<div class="container">
    <ods-simple-tabs class="tab-pills">
        <ods-simple-tab label="Heatmap"
                        fontawesome-class="map"
                        keep-content="false">
            <ods-dataset-context context="datum"
                                 datum-dataset="observation-synop">
                <div ods-adv-analysis="myData"
                     ods-adv-analysis-context="datum"
                     ods-adv-analysis-select="avg(t) as count"
                     ods-adv-analysis-group-by="date_format(date,'YYYY-MM-dd') as date">
                    <div ng-init="jsondef={
'$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
'data': {
    'name': 'data'
},
'height': 400,
'config': {
    'view': {
        'stroke': 'transparent',
        'strokeWidth': 0
    },
    'axis': {
        'grid': true,
        'domain': false,
        'labelFontSize':14,
        'labelFont':'Roboto, Helvetica, Arial, sans-serif'
    }
},
'mark': {
    'type': 'rect'
},
'encoding': {
    'y': {
        'field': 'date',
        'timeUnit': 'month',
        'type': 'ordinal',
        'title': 'Month'
    },
    'x': {
        'field': 'date',
        'timeUnit': 'date',
        'type': 'ordinal',
        'title': 'Day'
    },
    'color': {
        'title': 'Average temperature (K)',
        'field': 'count',
        'aggregate': 'mean',
        'type': 'quantitative',
        'legend': {
            'format':'.0f',
            'title': null
        }
    }
}
}">
                        <ods-vega-lite-chart spec="jsondef"
                                             values-data="myData"></ods-vega-lite-chart>
                    </div>
                </div>
            </ods-dataset-context>
        </ods-simple-tab>
        <ods-simple-tab label="Json config"
                        fontawesome-class="code"
                        keep-content="false">
        <pre><code>{
'$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
'data': {
    'name': 'data'
},
'height': 400,
'config': {
    'view': {
        'stroke': 'transparent',
        'strokeWidth': 0
    },
    'axis': {
        'grid': true,
        'domain': false,
        'labelFontSize':14,
        'labelFont':'Roboto, Helvetica, Arial, sans-serif'
    }
},
'mark': {
    'type': 'rect'
},
'encoding': {
    'y': {
        'field': 'date',
        'timeUnit': 'year',
        'type': 'ordinal',
        'title': 'Year'
    },
    'x': {
        'field': 'date',
        'timeUnit': 'month',
        'type': 'ordinal',
        'title': 'Month'
    },
    'color': {
        'title': 'Average temperature (K)',
        'field': 'count',
        'aggregate': 'mean',
        'type': 'quantitative',
        'legend': {
            'format':'.0f',
            'title': null
        }
    }
}
}
</code></pre>
        </ods-simple-tab>
    </ods-simple-tabs>
</div>