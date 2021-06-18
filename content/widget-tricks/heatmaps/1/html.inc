<div class="container">
    <h3>Vega-Lite works with a json block that contains the entire description of the chart. It looks like this:</h3>
    <div class="row">
        <div class="col-md-8">
        <pre><code>{
    '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
    'data': {
        'name': 'data'
    },
    'height': 300,
    'config': {
        ...
    },
    'mark': 'rect',
    'encoding': {
        'y': ...,
        'x': ...,
        'color': ...,
        'size': ...
    }
}</code></pre>
        </div>
        <div class="col-md-4">
            <h4>The structure</h4>
            <ul>
                <li><code>data</code> is the data from your <code>ods-adv-analysis</code></li>
                <li><code>height</code> th height of the chart. The width is 100% of the container</li>
                <li>
                    <code>mark</code> is the type of chart, rect for heatmaps, circle for bubble maps, it can be line, area, text etc...
                    <a target="_blank"
                       href="https://vega.github.io/vega-lite-v2/docs/mark.html">See mark documentation</a>
                </li>
                <li><code>encoding</code> is the axis, scale, legend, and all specific settings of the visualisation
                </li>
            </ul>
        </div>
    </div>
    <h3>Encoding block is the most important, it contains your axis settings, color and size settings, and the legend</h3>
    <div class="row">
        <div class="col-md-8">
        <pre><code>'encoding': {
        'y': {
            'field': 'date',
            'timeUnit': 'month',
            'type': 'ordinal'
        },
        'x': {
            'field': 'date',
            'timeUnit': 'hours',
            'type': 'ordinal'
        },
        'color': {
            'field': 'count',
            'aggregate': 'sum',
            'type': 'quantitative'
        }
    }
}</code></pre>
        </div>
        <div class="col-md-4">
            <h4>Example of minimal encoding for an heatmap</h4>
            <ul>
                <li><strong>y axis</strong> are the months, taken from the <code>date</code> field of the data</li>
                <li><strong>x axis</strong> are the hours of the day, taken from the <code>date</code> field of the data
                </li>
                <li>the heatmap is colored by computing the sum of
                    <code>count</code> field from the data, for each month and hours.
                </li>
            </ul>
        </div>
        <div class="col-md-12">
            <p>
                The difficult part here is the type of scale of color,
                <code>type: quantitative</code>. The resulting values is a quantity (a sum, an average etc...).
                See other <a target="_blank"
                             href="https://vega.github.io/vega-lite-v2/docs/type.html">encoding types in the documentation</a>.
                But in brief :
            </p>
            <ul>
                <li><code>quantitative</code>: numerical values and quantities</li>
                <li><code>temporal</code>: specific to dates and datetimes</li>
                <li><code>ordinal</code>: values that you can order (ex: Jan, Feb, Mar, Apr...)</li>
                <li><code>nominal</code>: values that you can name (ex: Male, Female.</li>
            </ul>
        </div>
    </div>

    <h3>Config</h3>
    <div class="row">
        <div class="col-md-8">
        <pre><code>'config': {
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
    }
}</code></pre>
        </div>
        <div class="col-md-4">
            <h4>Overall configuration</h4>
            <p>Optional, but useful to customize the final rendering. Here
                <code>grid: true</code> set a grid canvas with X and Y lines.
                <code>domain: false</code> remove the base line between the visualization and the axis legends.
                <a target="_blank"
                   href="https://vega.github.io/vega-lite-v2/docs/config.html">See the documentation for more personalization</a>
        </div>
    </div>
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
                    <div ng-init="jsondef=
{
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
}">
                        <ods-vega-lite-chart spec="jsondef"
                                             values-data="myData"></ods-vega-lite-chart>
                    </div>
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
                    <div ng-init="jsondef=
{
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
}">
                        <ods-vega-lite-chart spec="jsondef"
                                             values-data="myData"></ods-vega-lite-chart>
                    </div>
                </div>
            </ods-dataset-context>
        </div>
        <div class="col-md-12">
            All available scale colors can be found in the <a target="_blank" href="https://vega.github.io/vega/docs/schemes/#scheme-properties">scheme documentation</a>
        </div>
    </div>
</div>