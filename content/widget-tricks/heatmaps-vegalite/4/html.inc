<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="comptage-velo-donnees-compteurs">
        <div ods-adv-analysis="myData"
             ods-adv-analysis-context="datum"
             ods-adv-analysis-select="sum(sum_counts) as count"
             ods-adv-analysis-group-by="date_format(date,'YYYY-MM-dd') as date">
            <div class="row">
                <div class="col-md-5">
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
        'grid': false,
        'domain': false,
        'labelFontSize':14,
        'labelFont':'Roboto, Helvetica, Arial, sans-serif'
    }
},
'mark': {
    'type': 'circle',
    'opacity': 0.8,
    'stroke': 'black',
    'strokeWidth': 1
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
        'timeUnit': 'day',
        'type': 'ordinal',
        'title': 'Day of the week',
        'sort': ['mon', 'tue', 'wed', 'thu', 'fri', 'sat', 'sun'],
        'axis': {
           'labelAngle': 280
        }
    },
    'color': {
        'title': 'Bicycle count',
        'field': 'count',
        'aggregate': 'sum',
        'type': 'quantitative',
        'legend': {
            'title': null
        }
    },
    'size': {
        'title': 'Bicycle count',
        'field': 'count',
        'aggregate': 'sum',
        'type': 'quantitative',
        'legend': {
            'title': null
        }
    }
}
}"
                                         values-data="myData"></ods-vega-lite-chart>
                    <p>In <code>encoding</code>, <code>x</code> is <code>timeUnit: day</code>, and has a new property
                        <code>sort</code>, to force the week to start from Monday (instead of Sunday by default)</p>
                </div>
                <div class="col-md-7">
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
        'grid': false,
        'domain': false,
        'labelFontSize':14,
        'labelFont':'Roboto, Helvetica, Arial, sans-serif'
    }
},
'mark': {
    'type': 'circle',
    'opacity': 0.8,
    'stroke': 'black',
    'strokeWidth': 1
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
        'title': 'Bicycle count',
        'field': 'count',
        'aggregate': 'sum',
        'type': 'quantitative',
        'scale': {
            'scheme': 'blueorange'
        },
        'legend': {
            'title': null
        }
    },
    'size': {
        'title': 'Bicycle count',
        'field': 'count',
        'aggregate': 'sum',
        'type': 'quantitative',
        'legend': {
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