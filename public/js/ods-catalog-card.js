(function () {
    'use strict';

    var mod = angular.module('ods-widgets');

    mod.directive('odsCatalogCard', function () {
        return {
            restrict: 'E',
            transclude: true,
            scope: {
                dataset: '=?',
                catalog: '=?'
            },
            template: '' +
                '<div class="ods-catalog-card" ods-full-click inject></div>',
            controller: function($scope) {
                if (!angular.isDefined($scope.dataset)) {
                    $scope.dataset = $scope.$parent.item;
                }
                if (!angular.isDefined($scope.catalog)) {
                    $scope.catalog = $scope.$parent.context;
                }
            }
        };
    });

    mod.directive('odsCatalogCardKeywords', function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            template: '' +
                '<div class="ods-catalog-card__keywords">' +
                '    <ods-catalog-card-keyword keyword="keyword"' +
                '                              ng-repeat="keyword in keywords track by $index"></ods-catalog-card-keyword>' +
                '</div>',
            controller: function($scope) {
                $scope.keywords = $scope.dataset.metas.keyword;
                if (angular.isString($scope.keywords)) {
                    $scope.keywords = [$scope.keywords];
                }
            }
        };
    });

    mod.directive('odsCatalogCardKeyword', function () {
        return {
            restrict: 'E',
            scope: {
                keyword: '=',
                catalog: '=?'
            },
            template: '' +
                '<a class="ods-catalog-card__keyword"' +
                '   href="#"' +
                '     ng-click="catalog.toggleRefine(\'keyword\', keyword)"' +
                '     ng-class="{\'ods-catalog-card__keyword--active\': isActive(keyword)}"' +
                '     ng-bind="keyword"></a>',
            controller: function ($scope) {
                if (!angular.isDefined($scope.catalog)) {
                    $scope.catalog = $scope.$parent.catalog;
                }

                $scope.isActive = function(keyword) {
                    if ($scope.catalog.parameters['refine.keyword']) {
                        var refines = $scope.catalog.parameters['refine.keyword'];
                        if (angular.isArray(refines) && refines.indexOf(keyword) > -1 || refines === keyword) {
                            return true;
                        }
                    }
                    return false;
                };
            }
        };
    });

    mod.directive('odsCatalogCardThemeIcon', function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            template: '' +
                '<ods-theme-picto class="ods-catalog-card__theme-icon" theme="{{ dataset.metas.theme|firstValue }}" aria-hidden="true"></ods-theme-picto>'
        };
    });

    mod.directive('odsCatalogCardBody', function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            replace: true,
            transclude: true,
            template: '' +
                '<div class="ods-catalog-card__body" ng-class="{\'ods-catalog-card__body--full-width\': !dataset.has_records}" ng-transclude></div>'
        };
    });

    mod.directive('odsCatalogCardTitle', function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            template: '' +
                '<a ods-main-click' +
                '   class="ods-catalog-card__title-link" ' +
                '   ng-href="{{ (\'dataset/\' + dataset.datasetid + \'/\')|propagateAppendedURLParameters }}"' +
                '   target="_self">' +
                '    <h2 class="ods-catalog-card__title" ng-bind="dataset.metas.title"></h2>' +
                '</a>'
        };
    });

    mod.directive('odsCatalogCardDescription', function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            template: '' +
                '<p class="ods-catalog-card__description" ng-bind-html="dataset.metas.description|shortSummary|prettyText"></p>'
        };
    });

    mod.directive('odsCatalogCardMetadataItem', function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            scope: {
                itemTitle: '@',
                itemKey: '@'
            },
            template: '' +
                '<div class="ods-catalog-card__metadata-item" ng-show="shown">' +
                '    <div class="ods-catalog-card__metadata-item-label" ng-bind="itemTitle|translate"></div>' +
                '    <div class="ods-catalog-card__metadata-item-value" ng-switch="itemKey">' +
                '       <span ng-switch-when="records_count">' +
                '            <span translate translate-n="value" translate-plural="{{$count|number}} items"> {{$count|number}} item</span>' +
                '       </span>' +
                '       <span ng-switch-when="explore.download_count">{{value|number}}</span>' +
                '       <span ng-switch-when="modified">{{value|moment:"LLL"}}</span>' +
                '       <span ng-switch-when="data_processed">{{value|moment:"LLL"}}</span>' +
                '       <span ng-switch-when="territory" ng-bind-html="formatLocation(value)"></span>' +
                '       <span class="ods-catalog-card__metadata-item-value-text" ng-switch-default ng-bind-html="value|formatMeta|prettyText"></span>' +
                '    </div>' +
                '</div>',
            controller: function($scope) {
                if ($scope.itemKey.indexOf('.') > -1) {
                    var template = $scope.itemKey.split('.')[0];
                    var key = $scope.itemKey.split('.')[1];
                    if (angular.isDefined($scope.$parent.dataset.extra_metas[template])) {
                        $scope.value = $scope.$parent.dataset.extra_metas[template][key];
                    } else {
                        $scope.value = $scope.$parent.dataset.interop_metas && $scope.$parent.dataset.interop_metas[template][key];
                    }
                } else {
                    $scope.value = $scope.$parent.dataset.metas[$scope.itemKey];
                }
                if (angular.isUndefined($scope.value)) {
                    $scope.shown = false;
                } else if (['records_count', 'explore.download_count'].indexOf($scope.itemKey) > -1 && $scope.value === 0) {
                    $scope.shown = false;
                } else {
                    $scope.shown = true;
                }

                $scope.formatLocation = function(locations) {
                    if (!angular.isArray(locations)) {
                        return null;
                    }
                    var formattedLocations = locations.map(function(location) {
                        return '<span class="ods-catalog-card__metadata-item-value-location">' +
                            '<i class="fa fa-map-marker ods-catalog-card__metadata-item-value-location-picto"></i> ' + location +
                            '</span>';
                    });
                    return formattedLocations.join('');
                };
            }
        };
    });

    mod.directive('odsCatalogCardVisualizations', [function () {
        return {
            restrict: 'E',
            require: '^odsCatalogCard',
            replace: true,
            template: '' +
                '<div class="ods-catalog-card__visualizations" ng-if="dataset.has_records">' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/table/" ' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-table" aria-hidden="true"></i> ' +
                '        <span translate>Table</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/map/" ' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization"' +
                '       ng-show="dataset.features.indexOf(\'geo\') >= 0 && !dataset.extra_metas.visualization.map_disabled">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-globe" aria-hidden="true"></i> ' +
                '        <span translate>Map</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/analyze/" ' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization"' +
                '       ng-show="dataset.features.indexOf(\'analyze\') >= 0 && analyzeTabEnabled && !dataset.extra_metas.visualization.analyze_disabled">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-bar-chart" aria-hidden="true"></i> ' +
                '        <span translate>Analyze</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/calendar/" ' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization"' +
                '       ng-show="dataset.features.indexOf(\'calendar\') >= 0 && dataset.extra_metas.visualization.calendar_enabled">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-calendar" aria-hidden="true"></i> ' +
                '        <span translate>Calendar</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/images/" ' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization"' +
                '       ng-show="dataset.features.indexOf(\'image\') >= 0 && !dataset.extra_metas.visualization.images_disabled">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-picture-o" aria-hidden="true"></i> ' +
                '        <span translate>Images</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/export/" ' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-download" aria-hidden="true"></i> ' +
                '        <span translate>Export</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/api/" ' +
                '       ng-if="apiTabEnabled"' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-cogs" aria-hidden="true"></i> ' +
                '        <span translate>API</span>' +
                '    </a>' +
                '    <a href="/explore/dataset/{{ dataset.datasetid }}/{{ (dataset.extra_metas.visualization.custom_view_slug) || defaultCustomViewConfig.slug }}/" ' +
                '       ng-if="dataset.features.indexOf(\'custom_view\') > -1"' +
                '       target="_self" ' +
                '       class="ods-catalog-card__visualization">' +
                '        <i class="ods-catalog-card__visualization-icon fa fa-{{ dataset.extra_metas.visualization.custom_view_icon || defaultCustomViewConfig.icon }}" aria-hidden="true"></i> ' +
                '        <span ng-bind="dataset.extra_metas.visualization.custom_view_title || defaultCustomViewConfig.title"></span>' +
                '    </a>' +
                '</div>',
            link: function (scope) {
                scope.apiTabEnabled = false;
                scope.analyzeTabEnabled = true;
                scope.defaultCustomViewConfig = { 'slug': 'custom', 'title': 'Custom view', 'icon': 'fa-dashboard'};
            }
        };
    }]);
})();
