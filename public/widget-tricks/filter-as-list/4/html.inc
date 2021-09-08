<!-- Important here: 2 contexts, one to display, one to get the date range and execute the ods-analysis. This secondary contexts MUST NOT be refined -->
<ods-dataset-context context="sirenepublic,sirenepublicfordaterange"
                     sirenepublic-dataset="sirene"
                     sirenepublic-domain="public"
                     sirenepublicfordaterange-dataset="sirene"
                     sirenepublicfordaterange-domain="public"
                     sirenepublicfordaterange-parameters="{'q':'ddebact:[2010 TO 2019]'}"
                     ng-init="range = {'months':undefined}">
    <!-- Important here: get the list of months over years in the dataset, it will fuel the HTML select -->
    <span ods-analysis="analyze"
          ods-analysis-context="sirenepublicfordaterange"
          ods-analysis-x="ddebact.year"
          ods-analysis-x-month="ddebact.month"
          ods-analysis-serie-cnt="COUNT()">
        {{ range.months = analyze.results ; "" }}
    </span>
    <!-- Important here: see that elements are displayed once range.months exists, not before -->
    <div class="row"
         ng-init="selected = {}">
        <div class="col-sm-4">
            <div class="filtres-facet-titre">
                From :
            </div>
            <div class="controler" ng-if="range.months"
                 ng-init="max = range.months.length-1;
                          selectionfrom = '0';">
                <div class="input-range-with-button">
                    <div class="controler-button"
                         ng-class="{'disabled': selectionfrom == 0}"
                         ng-click="selectionfrom = (selectionfrom<1?selectionfrom:selectionfrom-1)">
                        <i class="fa fa-angle-left" aria-hidden="true"></i>
                    </div>
                    <div class="controler-button controler-selection">
                        <select ng-model="selectionfrom">
                            <option ng-repeat="(i,month) in range.months"
                                    ng-selected="selectionfrom == i"
                                    value="{{ 1*i }}">
                                {{ (month.x.year + (month.x.month>=10?'-':'-0') + month.x.month) | moment: 'MMMM YYYY' | capitalize }}
                            </option>
                        </select>
                    </div>
                    <div class="controler-button"
                         ng-class="{'disabled': selectionfrom == max}"
                         ng-click="selectionfrom = (selectionfrom>=max?1*selectionfrom:1*selectionfrom+1);">
                        <i class="fa fa-angle-right" aria-hidden="true"></i>
                    </div>
                    <!-- get the date, format it, and store it into a variable for later use -->
                    {{ safe_for_ie = ((range.months[0].x.year + (month.x.month>=10?'-':'-0') + range.months[0].x.month) | momentadd : 'months' : selectionfrom | moment: 'Y-M');
                    (safe_for_ie | stringify | split:"-")[1] &lt; 10 ?
                    selected.datefrom=(safe_for_ie | stringify | split:"-")[0] + "-0" + (safe_for_ie | stringify | split:"-")[1]
                    :
                    selected.datefrom=safe_for_ie  ; ""}}
                </div>
            </div>
            <div class="filtres-facet-titre">
                To :
            </div>
            <div class="controler" ng-if="range.months"
                 ng-init="max=range.months.length-1;
                          selectionto=max;">
                <div class="input-range-with-button">
                    <div class="controler-button"
                         ng-class="{'disabled': selectionto == 0}"
                         ng-click="selectionto = (selectionto<1?selectionto:selectionto-1);">
                        <i class="fa fa-angle-left" aria-hidden="true"></i>
                    </div>
                    <div class="controler-button controler-selection">
                        <select ng-model="selectionto">
                            <option ng-repeat="(i,month) in range.months"
                                    ng-selected="selectionto == i"
                                    value="{{ 1*i }}">
                                {{ (month.x.year + (month.x.month>=10?'-':'-0') + month.x.month) | moment: 'MMMM YYYY' | capitalize }}
                            </option>
                        </select>
                    </div>
                    <div class="controler-button"
                         ng-class="{'disabled': selectionto == max}"
                         ng-click="selectionto = (selectionto>=max?1*selectionto:1*selectionto+1);">
                        <i class="fa fa-angle-right" aria-hidden="true"></i>
                    </div>
                    <!-- get the date, format it, and store it into a variable for later use -->
                    {{ safe_for_ie = ((range.months[0].x.year + (month.x.month>=10?'-':'-0') + range.months[0].x.month) | momentadd : 'months' : selectionto | moment: 'Y-M');
                    (safe_for_ie | stringify | split:"-")[1] &lt; 10 ?
                    selected.dateto=(safe_for_ie | stringify | split:"-")[0] + "-0" + (safe_for_ie | stringify | split:"-")[1]
                    :
                    selected.dateto=safe_for_ie  ; ""}}
                </div>
            </div>
            <h4 ng-if="selected.datefrom && selected.dateto">
                Search query = <span style="font-weight: 200">{{ sirenepublic.parameters['q'] = "ddebact:[" + selected.datefrom + " TO " + selected.dateto + "]"; }}</span>
            </h4>
        </div>
        <div class="col-sm-8">
            <ods-chart ng-if="range.months"
                       align-month="true">
                <ods-chart-query context="sirenepublic" field-x="ddebact" maxpoints="0" timescale="month">
                    <ods-chart-serie chart-type="column" function-y="COUNT" color="#1B6698" scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>
    </div>
</ods-dataset-context>
