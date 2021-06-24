">

<!-- TABS -->
<div ng-init="categories = ((kpis | toObject : 'category') | keys)">
    <ods-simple-tabs ng-show="categories.length > 0 && categories[0] != 'undefined'"
                     class="tab-pills"
                     sync-to-scope="activecategory">
        <ods-simple-tab ng-repeat="category in categories"
                        ng-if="category != 'undefined'"
                        label="{{ category }}"
                        keep-content="true">
        </ods-simple-tab>
    </ods-simple-tabs>
</div>

<!-- CARDS -->
<section>
    <div class="row row-equal-height">
        <div ng-repeat="item in kpis"
             ng-if="activecategory == (item.category | slugify) || !item.category"
             class="{{ 'col-md-' + (12/itemsPerRowDesktop) }} {{ 'col-sm-' + (12/itemsPerRowTablet) }} col-xs-12 col-print-6 margin-bottom-20 {{ item.title | slugify }}">

            <ods-dataset-context context="kpictx"
                                 kpictx-dataset="{{item.dataset_id}}">

                <!-- Apply filters to kpi context -->
                <!-- if no advanced parameters is defined, get the simple one -->
                <span ng-if="!item.dataset_advanced_refine_parameters">{{ kpictx.parameters['refine.' + item.dataset_refine_key] = item.dataset_refine_value ; '' }}</span>
                <span ng-if="item.dataset_advanced_refine_parameters">{{ kpictx.parameters = (item.dataset_advanced_refine_parameters.replaceAll('\'','"') | fromjson) ; '' }}</span>

                <span ng-if="item.compare_mode == 'numeric'">

                        <span ods-aggregation-context="kpictx"
                              ods-aggregation="result"
                              ods-aggregation-expression="{{item.aggregation_expression}}"
                              ods-aggregation-function="{{item.aggregation_function}}">
                            {{ item.result = result ; '' }}
                        </span>

                    <!-- KPI box component -->
                        <div class="card-flip"
                             ng-init="isFlipped = false"
                             ng-click="isFlipped = (item.flip_additional_description?!isFlipped:isFlipped)"
                             ng-class="{'not-flippable': !item.flip_additional_description,
                                   'is-flipped': isFlipped}">

    <div class="kpi-card card-face card-face-front">
        <div class="kpi-card-top">
            <div ng-if="item.image_url" class="kpi-img">
                <img ng-src="{{ item.image_url }}"/>
            </div>
        </div>
        <div class="kpi-card-middle">
            <h2 class="kpi-value">
                {{ item.result | number : (item.aggregation_precision || 0) }} <span class="kpi-unit">{{ item.aggregation_unit }}</span>
            </h2>
            <p class="kpi-title">
                {{ item.title }}

                <span ng-if="item.strings.filtrenend">
                    {{ dateFormat.prefix + item.strings.filtrenstart + dateFormat.infix + item.strings.filtrenend + dateFormat.suffix }}
                </span>
                <span ng-if="!item.strings.filtrenend">
                    {{ item.strings.filtrenstart | capitalize }}
                </span>
            </p>



                <div class="kpi-valref"
                     ng-if="item.compare_strategie">
    <ods-dataset-context context="kpivalrefctx"
                         kpivalrefctx-dataset="{{item.valref_dataset_id}}">

        <!-- Apply filters to kpi context -->
        <!-- if no advanced parameters is defined, get the simple one -->
        <span ng-if="!item.valref_dataset_advanced_refine_parameters">{{ kpivalrefctx.parameters['refine.' + item.valref_dataset_refine_key] = item.valref_dataset_refine_value ; '' }}</span>
        <span ng-if="item.valref_dataset_advanced_refine_parameters">{{ kpivalrefctx.parameters = (item.valref_dataset_advanced_refine_parameters.replaceAll('\'','"') | fromjson) ; '' }}</span>

        <!-- KPI box component -->
        <div ods-aggregation-context="kpivalrefctx"
             ods-aggregation="resultvalref"
             ods-aggregation-expression="{{item.valref_aggregation_expression}}"
             ods-aggregation-function="{{item.valref_aggregation_function}}">

            <div ng-switch="item.compare_strategie">
    <div ng-switch-when="none">
        {{ item.value = resultvalref ; '' }}
    </div>
    <div ng-switch-when="diff">
        {{ item.value = (item.result/resultvalref)*100 ; '' }}
    </div>
    <div ng-switch-when="progression">
        {{ item.value = (item.result - resultvalref)/resultvalref*100 ; '' }}
    </div>
    <div ng-switch-default>
        {{ item.value = '' }}
    </div>
</div>

<div ng-if="item.compare_strategie == 'diff' || item.compare_strategie == 'progression'">
    <span class="kpi-valref-value"><span ng-if="item.compare_strategie == 'progression'">{{ item.value > 0 ? '+' : '' }}</span>{{ item.value | number : (item.valref_aggregation_precision || 0) }}</span>
    <span class="kpi-valref-unit">{{ item.valref_aggregation_unit }}</span>
    <span class="kpi-valref-carret" ng-if="item.higher">
                    <i ng-if="item.value > 0" class="fa fa-caret-up"
                       ng-class="{'kpi-valref-carret-good': item.higher == 'isbetter'}" aria-hidden="true"></i>
                    <i ng-if="item.value < 0" class="fa fa-caret-down"
                       ng-class="{'kpi-valref-carret-good': item.higher != 'isbetter'}" aria-hidden="true"></i>
                </span>
    <div class="kpi-valref-text">
        {{ item.valref_prefix }}
        <span class="kpi-valref-secondaryvalue">{{ resultvalref | number : (item.valref_aggregation_precision || 0) }}
                        <span class="kpi-unit">{{ item.aggregation_unit }}</span>
                    </span>
        {{ item.valref_suffix }}
        <span class="kpi-valref-date">{{
            (item.strings.filtrenmoinsunend?dateFormat.prefix:'') +
            item.strings.filtrenmoinsunstart +
            (item.strings.filtrenmoinsunend?dateFormat.infix + item.strings.filtrenmoinsunend + dateFormat.suffix:'')
            }}
        </span>
    </div>
</div>

<div ng-if="!item.compare_strategie">
    <div class="kpi-valref-text">
        <span class="kpi-valref-value">{{ resultvalref | number : (item.valref_aggregation_precision || 0) }}</span>
        <span class="kpi-valref-unit">{{ item.valref_aggregation_unit }}</span>
    </div>
    {{ item.valref_prefix }}
    {{ item.valref_suffix }}
</div>

            <!--
            <div ng-if="!(item.compare_strategie == 'diff' || item.compare_strategie == 'progression')">
                Wrong setup : unknown compare_strategie (can be diff or progression)
            </div>-->

        </div>
    </ods-dataset-context>
</div>


            <div ng-if="item.link" class="kpi-link">
                <a target="_blank"
                   ng-click="values.popin = (item.link_mode == 'popin' ? (item.title | slugify) : false); item.link_mode == 'popin' ? $event.preventDefault() : ''; $event.stopPropagation()"
                   ng-href="{{ item.link }}">{{ item.link_label || "See the data" }}</a>
            </div>
        </div>
        <div ng-if="item.flip_hint"
             class="kpi-card-bottom">
            <p class="hint">{{ item.flip_hint }}</p>
        </div>
    </div>
    <div class="kpi-card card-face card-face-back">
        <p>
            {{ item.flip_additional_description }}
        </p>
        <a target="_blank" ng-if="item.flip_additional_link" ng-href="{{ item.flip_additional_link }}">
            {{ item.flip_additional_link_label || item.flip_additional_link }}
        </a>
    </div>
</div>
                    </span>

                <span ng-if="item.compare_mode == 'date'"
                      ng-init="item.values = {'date':undefined};">
                        <!-- Date selection strategy -->
                        <div ng-switch="item.get_date_from">
    <div ng-switch-when="now">
        <div ods-datetime="today">
            {{ item.values.date = (today | moment : 'YYYY/MM/DD') ; '' }}
        </div>
    </div>
    <div ng-switch-when="data">
        {{ kpictx.parameters['sort'] = item.date_field_id; '' }}
        <div ods-results="items"
             ods-results-context="kpictx"
             ods-results-max="1">
                            <span ng-if="items[0]">
                                {{ item.values.date = (items[0].fields[item.date_field_id] | moment : 'YYYY/MM/DD') ; '' }}
                            </span>
        </div>
    </div>
    <div ng-switch-when="ods-analysis">
        <div ods-analysis="analysis"
             ods-analysis-context="kpictx"
             ods-analysis-x="{{ item.date_field_id }}"
             ods-analysis-serie-count="COUNT()">
                            <span ng-if="analysis.results">
                                {{ xstruct = analysis.results[analysis.results.length - 1].x;
                                   item.values.date = xstruct.year+ (xstruct.month ?('/'+(xstruct.month > 9 ?'':'0')+xstruct.month+(xstruct.day ?('/'+(xstruct.day > 9 ?'':'0')+xstruct.day):'')):'');
                                '' }}
                            </span>
        </div>
    </div>
    <div ng-switch-default></div>
</div>

                        <span ng-if="item.values.date">
                            <!-- Compute the date range by the desired date compare strategy -->
                            {{
item.strings.date = (item.values.date | moment | date : (item.date_format || 'd MMM yyyy'));
item.values.debutdumois = (item.values.date | moment : 'YYYY/MM/01');
item.strings.debutdumois = (item.values.debutdumois | moment | date : 'mediumDate');
item.values.debutdumoisdelanneeprecedente = (item.values.date | moment : 'YYYY/MM/01' | momentadd : 'year' : -1 | moment : 'YYYY/MM/DD');
item.strings.debutdumoisdelanneeprecedente = (item.values.date | moment : 'YYYY/MM/01' | momentadd : 'year' : -1 | date : 'mediumDate');
item.values.debutdelannee = (item.values.date | moment : 'YYYY/01/01');
item.strings.debutdelannee = (item.values.debutdelannee | moment | date : 'mediumDate');
item.values.nowdumoisprecedent = (item.values.date | momentadd : 'month' : -1 | moment : 'YYYY/MM/DD');
item.strings.nowdumoisprecedent = (item.values.date | momentadd : 'month' : -1 | date : 'mediumDate');
item.values.nowdumoisprecedentdelanneeprecedente = (item.values.date | momentadd : 'month' : -13 | moment : 'YYYY/MM/DD');
item.strings.nowdumoisprecedentdelanneeprecedente = (item.values.date | momentadd : 'month' : -13 | date : 'mediumDate');
item.values.nowdumoisprecedentprecedent = (item.values.date | momentadd : 'month' : -2 | moment : 'YYYY/MM/DD');
item.strings.nowdumoisprecedentprecedent = (item.values.date | momentadd : 'month' : -2 | date : 'mediumDate');
item.values.nowdelanneeprecedente = (item.values.date | momentadd : 'year' : -1 | moment : 'YYYY/MM/DD');
item.strings.nowdelanneeprecedente = (item.values.date | momentadd : 'year' : -1 | date : 'mediumDate');
item.values.nowdelanneeprecedenteprecedente = (item.values.date | momentadd : 'year' : -2 | moment : 'YYYY/MM/DD');
item.strings.nowdelanneeprecedenteprecedente = (item.values.date | momentadd : 'year' : -2 | date : 'mediumDate');
item.values.moisplein = (item.values.debutdumois | momentadd : 'month' : -1 | moment : 'YYYY/MM/DD');
item.strings.moisplein = (item.values.debutdumois | momentadd : 'month' : -1 | date : 'MMM yyyy');
item.values.moispleindelanneeprecedente = (item.values.debutdumois | momentadd : 'month' : -13 | moment : 'YYYY/MM/DD');
item.strings.moispleindelanneeprecedente = (item.values.debutdumois | momentadd : 'month' : -13 | date : 'MMM yyyy');
item.values.moispleinprecedent = (item.values.debutdumois | momentadd : 'month' : -2 | moment : 'YYYY/MM/DD');
item.strings.moispleinprecedent = (item.values.debutdumois | momentadd : 'month' : -2 | date : 'MMM yyyy');
item.values.debutdelanneepleine = (item.values.debutdelannee | momentadd : 'year' : -1 | moment : 'YYYY/MM/DD');
item.strings.debutdelanneepleine = (item.values.debutdelannee | momentadd : 'year' : -1 | date : 'mediumDate');
item.values.debutdelanneeprecedente = (item.values.debutdelannee | momentadd : 'year' : -2 | moment : 'YYYY/MM/DD');
item.strings.debutdelanneeprecedente = (item.values.debutdelannee | momentadd : 'year' : -2 | date : 'mediumDate');

"" }}

                            <!-- Keep for later, possible upgrades of this templates with quarters and semesters -->
                            <!--
                            item.values.nowtrimestre = ((item.values.date | moment : 'MM') / 3 | math: 'ceil');
                            item.values.nowtrimestredebut = (item.values.date | moment : 'YYYY') + '/' + (item.values.nowtrimestre * 3 - 2 > 9?'':'0') + (item.values.nowtrimestre * 3 - 2);
                            item.values.nowtrimestrefin = (item.values.date | moment : 'YYYY') + '/' + (item.values.nowtrimestre * 3 > 9?'':'0') + (item.values.nowtrimestre * 3);

                            item.values.nowsemestre = ((item.values.date | moment : 'MM') / 6 | math: 'ceil');
                            item.values.nowsemestredebut = (item.values.date | moment : 'YYYY') + '/' + (item.values.nowsemestre * 6 - 5 > 9?'':'0') + (item.values.nowsemestre * 6 - 5);
                            item.values.nowsemestrefin = (item.values.date | moment : 'YYYY') + '/' + (item.values.nowsemestre * 6 > 9?'':'0') + (item.values.nowsemestre * 6);
                            -->

<div ng-switch="item.compare_date_strategie">
    <div ng-switch-when="RM/RM-1">
        {{
        item.values.filtren = "[" + item.values.debutdumois + " TO " + item.values.date + "]";
        item.values.filtrenmoinsun = "[" + item.values.moisplein + " TO " + item.values.nowdumoisprecedent + "]";

        item.strings.filtrenstart =  item.strings.debutdumois;
        item.strings.filtrenend =  item.strings.date;
        item.strings.filtrenmoinsunstart =  item.strings.moisplein;
        item.strings.filtrenmoinsunend =  item.strings.nowdumoisprecedent;
        ''}}
    </div>
    <div ng-switch-when="RM/RM-12">
        {{
        item.values.filtren = "[" + item.values.debutdumois + " TO " + item.values.date + "]";
        item.values.filtrenmoinsun = "[" + item.values.debutdumoisdelanneeprecedente + " TO " + item.values.nowdelanneeprecedente + "]";

        item.strings.filtrenstart =  item.strings.debutdumois;
        item.strings.filtrenend =  item.strings.date;
        item.strings.filtrenmoinsunstart =  item.strings.debutdumoisdelanneeprecedente;
        item.strings.filtrenmoinsunend =  item.strings.nowdelanneeprecedente;
        ''}}
    </div>
    <div ng-switch-when="FM/FM-1">
        {{
        item.values.filtren = (item.values.moisplein | moment : 'YYYY/MM');
        item.values.filtrenmoinsun = (item.values.moispleinprecedent | moment : 'YYYY/MM');

        item.strings.filtrenstart =  item.strings.moisplein;
        item.strings.filtrenmoinsunstart =  item.strings.moispleinprecedent;
        ''}}
    </div>
    <div ng-switch-when="FM/FM-12">
        {{
        item.values.filtren = (item.values.moisplein | moment : 'YYYY/MM');
        item.values.filtrenmoinsun = (item.values.moispleindelanneeprecedente | moment : 'YYYY/MM');

        item.strings.filtrenstart =  item.strings.moisplein;
        item.strings.filtrenmoinsunstart =  item.strings.moispleindelanneeprecedente;
        ''}}
    </div>
    <div ng-switch-when="SM/SM-1">
        {{
        item.values.filtren = "[" + item.values.nowdumoisprecedent + " TO " + item.values.date + "]";
        item.values.filtrenmoinsun = "[" + item.values.nowdumoisprecedentprecedent + " TO " + item.values.nowdumoisprecedent + "[";

        item.strings.filtrenstart =  item.strings.nowdumoisprecedent;
        item.strings.filtrenend =  item.strings.date;
        item.strings.filtrenmoinsunstart =  item.strings.nowdumoisprecedentprecedent;
        item.strings.filtrenmoinsunend =  item.strings.nowdumoisprecedent;
        ''}}
    </div>
    <div ng-switch-when="SM/SM-12">
        {{
        item.values.filtren = "[" + item.values.nowdumoisprecedent + " TO " + item.values.date + "]";
        item.values.filtrenmoinsun = "[" + item.values.nowdumoisprecedentdelanneeprecedente + " TO " +
        item.values.nowdelanneeprecedente + "]";

        item.strings.filtrenstart =  item.strings.nowdumoisprecedent;
        item.strings.filtrenend =  item.strings.date;
        item.strings.filtrenmoinsunstart =  item.strings.nowdumoisprecedentdelanneeprecedente;
        item.strings.filtrenmoinsunend =  item.strings.nowdelanneeprecedente;
        ''}}
    </div>
    <div ng-switch-when="RY/RY-1">
        {{
        item.values.filtren = "[" + item.values.debutdelannee + " TO " + item.values.date + "]";
        item.values.filtrenmoinsun = "[" + item.values.debutdelanneepleine + " TO " + item.values.nowdelanneeprecedente + "]";

        item.strings.filtrenstart =  item.strings.debutdelannee;
        item.strings.filtrenend =  item.strings.date;
        item.strings.filtrenmoinsunstart =  item.strings.debutdelanneepleine;
        item.strings.filtrenmoinsunend =  item.strings.nowdelanneeprecedente;
        ''}}
    </div>
    <div ng-switch-when="FY/FY-1">
        {{
        item.values.filtren = (item.values.debutdelanneepleine | moment : 'YYYY');
        item.values.filtrenmoinsun = (item.values.debutdelanneeprecedente | moment : 'YYYY');

        item.strings.filtrenstart =  item.strings.debutdelanneepleine;
        item.strings.filtrenmoinsunstart =  item.strings.debutdelanneeprecedente;
        ''}}
    </div>
    <div ng-switch-when="SY/SY-1">
        {{
        item.values.filtren = "[" + item.values.nowdelanneeprecedente + " TO " + item.values.date + "]";
        item.values.filtrenmoinsun = "[" + item.values.nowdelanneeprecedenteprecedente + " TO " + item.values.nowdelanneeprecedente +
        "]";

        item.strings.filtrenstart =  item.strings.nowdelanneeprecedente;
        item.strings.filtrenend =  item.strings.date;
        item.strings.filtrenmoinsunstart =  item.strings.nowdelanneeprecedenteprecedente;
        item.strings.filtrenmoinsunend =  item.strings.nowdelanneeprecedente;
        ''}}
    </div>
    <div ng-switch-default></div>
</div>

                            <span ng-if="item.values.filtren && item.values.filtrenmoinsun">
                                <ods-dataset-context context="kpidatectxn,kpidatectxnmoinsun"
                                                     kpidatectxn-dataset="{{item.dataset_id}}"
                                                     kpidatectxnmoinsun-dataset="{{item.valref_dataset_id}}">
                                    <!-- Apply filters to date kpi contexts from configuration -->
                                    <span ng-if="!item.dataset_advanced_refine_parameters">{{ kpidatectxn.parameters['refine.' + item.dataset_refine_key] = item.dataset_refine_value ; '' }}</span>
                                    <span ng-if="item.dataset_advanced_refine_parameters">{{ kpidatectxn.parameters = (item.dataset_advanced_refine_parameters.replaceAll('\'','"') | fromjson) ; '' }}</span>
                                    <span ng-if="!item.valref_dataset_advanced_refine_parameters">{{ kpidatectxnmoinsun.parameters['refine.' + item.valref_dataset_refine_key] = item.valref_dataset_refine_value ; '' }}</span>
                                    <span ng-if="item.valref_dataset_advanced_refine_parameters">{{ kpidatectxnmoinsun.parameters = (item.valref_dataset_advanced_refine_parameters.replaceAll('\'','"') | fromjson) ; '' }}</span>

                                    <!-- Then apply filter from computed date ranges -->
                                    {{ kpidatectxn.parameters['q.date'] = item.date_field_id + ':' + item.values.filtren ; '' }}
                                    {{ kpidatectxnmoinsun.parameters['q.date'] = item.date_field_id + ':' + item.values.filtrenmoinsun ; '' }}

                                    <span ods-aggregation-context="kpidatectxn"
                                          ods-aggregation="result"
                                          ods-aggregation-expression="{{item.aggregation_expression}}"
                                          ods-aggregation-function="{{item.aggregation_function}}">
                                        {{ item.result = result ; '' }}
                                    </span>

                                    <!-- KPI box component with date compare -->
                                    <div class="card-flip"
                                         ng-init="isFlipped = false"
                                         ng-click="isFlipped = (item.flip_additional_description?!isFlipped:isFlipped)"
                                         ng-class="{'not-flippable': !item.flip_additional_description,
                                   'is-flipped': isFlipped}">

    <div class="kpi-card card-face card-face-front">
        <div class="kpi-card-top">
            <div ng-if="item.image_url" class="kpi-img">
                <img ng-src="{{ item.image_url }}"/>
            </div>
        </div>
        <div class="kpi-card-middle">
            <h2 class="kpi-value">
                {{ item.result | number : (item.aggregation_precision || 0) }} <span class="kpi-unit">{{ item.aggregation_unit }}</span>
            </h2>
            <p class="kpi-title">
                {{ item.title }}

                <span ng-if="item.strings.filtrenend">
                    {{ dateFormat.prefix + item.strings.filtrenstart + dateFormat.infix + item.strings.filtrenend + dateFormat.suffix }}
                </span>
                <span ng-if="!item.strings.filtrenend">
                    {{ item.strings.filtrenstart | capitalize }}
                </span>
            </p>


                <div class="kpi-valref"
                     ng-if="item.compare_strategie">
    <!-- KPI box component -->
    <div ods-aggregation-context="kpidatectxnmoinsun"
         ods-aggregation="resultvalref"
         ods-aggregation-expression="{{item.valref_aggregation_expression}}"
         ods-aggregation-function="{{item.valref_aggregation_function}}">

        <div ng-switch="item.compare_strategie">
    <div ng-switch-when="none">
        {{ item.value = resultvalref ; '' }}
    </div>
    <div ng-switch-when="diff">
        {{ item.value = (item.result/resultvalref)*100 ; '' }}
    </div>
    <div ng-switch-when="progression">
        {{ item.value = (item.result - resultvalref)/resultvalref*100 ; '' }}
    </div>
    <div ng-switch-default>
        {{ item.value = '' }}
    </div>
</div>

<div ng-if="item.compare_strategie == 'diff' || item.compare_strategie == 'progression'">
    <span class="kpi-valref-value"><span ng-if="item.compare_strategie == 'progression'">{{ item.value > 0 ? '+' : '' }}</span>{{ item.value | number : (item.valref_aggregation_precision || 0) }}</span>
    <span class="kpi-valref-unit">{{ item.valref_aggregation_unit }}</span>
    <span class="kpi-valref-carret" ng-if="item.higher">
                    <i ng-if="item.value > 0" class="fa fa-caret-up"
                       ng-class="{'kpi-valref-carret-good': item.higher == 'isbetter'}" aria-hidden="true"></i>
                    <i ng-if="item.value < 0" class="fa fa-caret-down"
                       ng-class="{'kpi-valref-carret-good': item.higher != 'isbetter'}" aria-hidden="true"></i>
                </span>
    <div class="kpi-valref-text">
        {{ item.valref_prefix }}
        <span class="kpi-valref-secondaryvalue">{{ resultvalref | number : (item.valref_aggregation_precision || 0) }}
                        <span class="kpi-unit">{{ item.aggregation_unit }}</span>
                    </span>
        {{ item.valref_suffix }}
        <span class="kpi-valref-date">{{
            (item.strings.filtrenmoinsunend?dateFormat.prefix:'') +
            item.strings.filtrenmoinsunstart +
            (item.strings.filtrenmoinsunend?dateFormat.infix + item.strings.filtrenmoinsunend + dateFormat.suffix:'')
            }}
        </span>
    </div>
</div>

<div ng-if="!item.compare_strategie">
    <div class="kpi-valref-text">
        <span class="kpi-valref-value">{{ resultvalref | number : (item.valref_aggregation_precision || 0) }}</span>
        <span class="kpi-valref-unit">{{ item.valref_aggregation_unit }}</span>
    </div>
    {{ item.valref_prefix }}
    {{ item.valref_suffix }}
</div>

        <!--
        <div ng-if="!(item.compare_strategie == 'diff' || item.compare_strategie == 'progression')">
            Wrong setup : unknown compare_strategie (can be diff or progression)
        </div>-->

    </div>
</div>



            <div ng-if="item.link" class="kpi-link">
                <a target="_blank"
                   ng-click="values.popin = (item.link_mode == 'popin' ? (item.title | slugify) : false); item.link_mode == 'popin' ? $event.preventDefault() : ''; $event.stopPropagation()"
                   ng-href="{{ item.link }}">{{ item.link_label || "See the data" }}</a>
            </div>
        </div>
        <div ng-if="item.flip_hint"
             class="kpi-card-bottom">
            <p class="hint">{{ item.flip_hint }}</p>
        </div>
    </div>
    <div class="kpi-card card-face card-face-back">
        <p>
            {{ item.flip_additional_description }}
        </p>
        <a target="_blank" ng-if="item.flip_additional_link" ng-href="{{ item.flip_additional_link }}">
            {{ item.flip_additional_link_label || item.flip_additional_link }}
        </a>
    </div>
</div>
                                </ods-dataset-context>
                            </span>
                        </span>
                    </span>
            </ods-dataset-context>            </div>

        <!-- Pop-ins of all KPIs -->
        <div ng-repeat="item in kpis"
             class="ods-pop-in"
             ng-if="values.popin == (item.title | slugify)">
            <div class="ods-pop-in__container iframe-container">
                <iframe ng-src="{{ item.link }}"
                        width="100%"
                        height="100%"></iframe>
            </div>
            <div class="ods-pop-in__backdrop"
                 ng-click="values.popin = false"></div>
        </div>
    </div>
</section>
</div>
