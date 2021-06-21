<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="observation-synop">
        <div ods-adv-analysis="myData"
             ods-adv-analysis-context="datum"
             ods-adv-analysis-select="avg(t) as count"
             ods-adv-analysis-group-by="year(date) as year, nom_reg">
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
    'x': {
        'field': 'year',
        'type': 'ordinal',
        'title': 'Year',
        'axis': {
           'labelAngle': 290
        }
    },
    'y': {
        'field': 'nom_reg',
        'type': 'ordinal',
        'title': 'Region name',
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
}">
                <ods-vega-lite-chart spec="jsondef"
                                     values-data="myData"></ods-vega-lite-chart>
            </div>
            <p>
                Here, <code>ods-adv-analysis</code> returns the year only (and not the complete date). Therefore, Vega-lite considers it as text and not as a date.
            </p>
        </div>
    </ods-dataset-context>
</div>