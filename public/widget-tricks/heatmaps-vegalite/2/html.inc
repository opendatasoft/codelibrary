<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="observation-synop">
        <div ods-adv-analysis="myData"
             ods-adv-analysis-context="datum"
             ods-adv-analysis-select="avg(t) as count"
             ods-adv-analysis-group-by="date_format(date,'YYYY-MM-dd') as date">

            <div class="row">
                <div class="col-md-6">
                    <p>
                        Years by months, default (linear) scale, blueorange color scheme, mean temperature
                    </p>
                    <ods-vega-lite-chart spec="{
'$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
'data': {
    'name': 'data'
},
'height': 400,
'config': {
    'view': {
        'stroke': 'transparent',
        'strokeWidth': 0,
        'binSpacing': 2,
    },
    'axis': {
        'grid': true,
        'domain': false,
        'labelFontSize':14,
        'labelFont':'Roboto, Helvetica, Arial, sans-serif'
    }
},
'mark': {
    'type': 'rect',
    'binSpacing': 5,
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
        'title': 'Month',
        'axis': {
           'labelAngle': 290
        }
    },
    'color': {
        'title': 'Average temperature (K)',
        'field': 'count',
        'aggregate': 'mean',
        'type': 'quantitative',
        scale: {
            'scheme': 'blueorange'
        },
        'legend': {
            'format':'.0f',
            'title': null
        }
    }
}
}"
                                         values-data="myData"></ods-vega-lite-chart>
                </div>
                <div class="col-md-6">
                    <p>
                        Months by days, default (linear) scale, mean temperature
                    </p>
                    <ods-vega-lite-chart spec="{
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
        'title': 'Day',
        'axis': {
           'labelAngle': 290
        }
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
}"
                                         values-data="myData"></ods-vega-lite-chart>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>