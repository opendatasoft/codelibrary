---
title: "Vega-lite presentation"
date: 2021-06-16T14:46:16+02:00
---

#### Vega-Lite works with a json block that contains the entire description of the chart. It looks like this:
```
{
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
}
```

- `data` is the data from your `ods-adv-analysis`
- `height` the height of the chart. The width is 100% of the container</li>
- `mark` is the type of chart, rect for heatmaps, circle for bubble maps, it can be line, area, text etc... [See mark documentation](https://vega.github.io/vega-lite-v2/docs/mark.html)
- `encoding` is the axis, scale, legend, and all specific settings of the visualisation

#### Encoding block is the most important, it contains your axis settings, color and size settings, and the legend

An example of minimal encoding for an heatmap :

```
'encoding': {
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
}
```

- **y axis** are the months, taken from the `date` field of the data
- **x axis** are the hours of the day, taken from the `date` field of the data
- the heatmap is colored by computing the sum of `count` field from the data, for each month and hours.
- `type: quantitative` the type of scale of colors. 

The resulting values are a quantity (a sum, an average etc...).
See other [encoding types in the documentation](https://vega.github.io/vega-lite-v2/docs/type.html).

In brief, scale types are :

- `quantitative`: numerical values and quantities
- `temporal`: specific to full dates and datetimes to render timeseries 
- `ordinal`: values that you can order (ex: Jan, Feb, Mar, Apr...)
- `nominal`: values that you can name (ex: Male, Female)

#### Global configuration

```
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
    }
}
```

Optional, but useful to customize the final rendering. 
Here `grid: true` set a grid canvas with X and Y lines.
`domain: false` remove the baseline between the visualization and the axis legends.
[See the documentation for more personalization](https://vega.github.io/vega-lite-v2/docs/config.html)
