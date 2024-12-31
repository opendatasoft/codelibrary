<div class="container">
    <h3>All together</h3>
    <div class="row">
        <div class="col-md-5">
        <pre><code>{
    '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
    'data': {
        'name': 'data'
    },
    'height': 300,
    'mark': 'rect',
    'encoding': {
        'y': {
            'field': 'date',
            'timeUnit': 'month',
            'type': 'ordinal',
        },
        'x': {
            'field': 'date',
            'timeUnit': 'date',
            'type': 'ordinal',
        },
        'color': {
            'field': 'count',
            'aggregate': 'sum',
            'type': 'quantitative'
        }
    }
}</code></pre>
        </div>
        <div class="col-md-7">
            <ods-dataset-context context="datum"
                                 datum-dataset="comptage-velo-donnees-compteurs">
                <h4>Counting of cyclists by month and day. Analysis of the trend.</h4>
                <div ods-adv-analysis="myData"
                     ods-adv-analysis-context="datum"
                     ods-adv-analysis-select="sum(sum_counts) as count"
                     ods-adv-analysis-group-by="date_format(date,'YYYY-MM-dd') as date">
                    <ods-vega-lite-chart spec="{
    '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
    'data': {
        'name': 'data'
    },
    'height': 300,
    'mark': 'rect',
    'encoding': {
        'y': {
            'field': 'date',
            'timeUnit': 'month',
            'type': 'ordinal',
        },
        'x': {
            'field': 'date',
            'timeUnit': 'date',
            'type': 'ordinal',
        },
        'color': {
            'field': 'count',
            'aggregate': 'sum',
            'type': 'quantitative'
        }
    }
}"
                                         values-data="myData"></ods-vega-lite-chart>
                </div>
            </ods-dataset-context>
        </div>
    </div>
    <h3>With optional config, titles and custom scale colors</h3>
    <div class="row">
        <div class="col-md-5">
        <pre><code>{
    '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
    'data': {
        'name': 'data'
    },
    'height': 300,
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
    'mark': 'rect',
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
            'title': 'Nombre de passages',
            'field': 'count',
            'aggregate': 'sum',
            'type': 'quantitative',
            'scale': {
                'scheme': 'yellowgreenblue',
            },
            'legend': {
                'title': null
            }
        }
    }
}</code></pre>
        </div>
        <div class="col-md-7">
            <ods-dataset-context context="datum"
                                 datum-dataset="comptage-velo-donnees-compteurs">
                <h4>Counting of cyclists by month and day. Analysis of the trend.</h4>
                <div ods-adv-analysis="myData"
                     ods-adv-analysis-context="datum"
                     ods-adv-analysis-select="sum(sum_counts) as count"
                     ods-adv-analysis-group-by="date_format(date,'YYYY-MM-dd') as date">
                    <ods-vega-lite-chart spec="{
    '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
    'data': {
        'name': 'data'
    },
    'height': 300,
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
    'mark': 'rect',
    'encoding': {
        'y': {
            'field': 'date',
            'timeUnit': 'month',
            'type': 'ordinal',
            'title': 'Month',
            'format': '%e'
        },
        'x': {
            'field': 'date',
            'timeUnit': 'date',
            'type': 'ordinal',
            'title': 'Day'
        },
        'color': {
            'title': 'Number of cyclists',
            'field': 'count',
            'aggregate': 'sum',
            'type': 'quantitative',
            'scale': {
                'scheme': 'purples',
            },
            'legend': {
                'title': null
            }
        }
    }
}"
                                         values-data="myData"></ods-vega-lite-chart>
                </div>
            </ods-dataset-context>
        </div>
    </div>
</div>