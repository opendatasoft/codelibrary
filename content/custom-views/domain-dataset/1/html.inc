<div class="custom-view container-fluid">
<section class="top-links">
  <strong>
    In your backoffice
    <i class="fa fa-external-link" aria-hidden="true"></i>
  </strong>

  <a href="/backoffice/monitoring/users/">Users</a>
  <a href="/backoffice/monitoring/quality/">Quality</a>
  <a href="/backoffice/monitoring/actions/">Actions</a>
  <a href="/backoffice/monitoring/activity_log/">Activity logs</a>
</section>
<section>
  <h1 class="title">
    Catalog overview
    <span class="title-info">
      (last updated {{ ctx.dataset.metas.data_processed | date : 'd
      MMMM yyyy' }})
    </span>
  </h1>

  <div
    class="row"
    ods-analysis="datasets"
    ods-analysis-x="visibility"
    ods-analysis-serie-total="COUNT(*)"
    ods-analysis-context="ctx"
  >
    {{ datasetcount = (datasets.results | toObject : 'x') ; "" }}
    <div class="col-md-4 m-4">
      <a
        class="box"
        href="/explore/dataset/domaindatasets/table/?refine.visibility=restricted"
        target="_blank"
      >
        <div></div>
        <span class="kpi">
          <i class="fa fa-lock" aria-hidden="true"></i>
          {{ datasetcount['restricted'].total || 0 }}
        </span>
        <p class="subtitle">Private datasets</p>
      </a>
    </div>
    <div class="col-md-4 m-4">
      <a
        class="box"
        href="/explore/dataset/domaindatasets/table/?refine.visibility=domain"
        target="_blank"
      >
        <div></div>
        <span class="kpi">
          <i class="fa fa-unlock-alt" aria-hidden="true"></i>
          {{ datasetcount['domain'].total || 0 }}
        </span>
        <p class="subtitle">Public datasets</p>
      </a>
    </div>
    <div class="col-md-4 m-4">
      <a
        class="box"
        href="/explore/dataset/domaindatasets/table/?q=publishing_properties:'federated'+or+publishing_properties:'scheduled'&sort=modified"
        target="_blank"
      >
      {{ ctx.parameters['sort'] = 'modified' ; "" }}
        <ods-chart display-legend="false" align-month="true">
          <ods-chart-query
            context="ctx"
            field-x="publishing_properties"
            maxpoints="0"
            timescale="day"
            stacked="normal"
            category-colors="{ 'scheduled': 'var(--success)', 'federated': 'var(--info)' , 'manual': 'var(--warning)'}"
          >
            <ods-chart-serie
              expression-y="jddscheduled"
              chart-type="pie"
              labelsposition="inside"
              innersize="15%"
              function-y="COUNT"
              scientific-display="true"
            >
            </ods-chart-serie>
          </ods-chart-query>
        </ods-chart>
        <p class="subtitle">Update methods</p>
      </a>
    </div>
  </div>
</section>

<section>
  <div
    ods-results="datasetlist"
    ods-results-context="ctx"
    ods-results-max="5"
  >
    <h2 class="title">
      Last modified
    </h2>
    <div class="pill-list">
      <a
        ng-href="{{ '/explore/dataset/' + item.fields.dataset_id + '/table' }}"
        class="pill"
        ng-repeat="item in datasetlist"
      >
        {{ item.fields.title}}
      </a>
    </div>
  </div>
</section>
<!-- Ligne avec les graphiques de répartition-->
<section>
  <div class="row">
    <div class="col-md-6">
      <div>
        <h2 class="title">
          Dataset by topic
        </h2>
        <ods-chart align-month="true" labels-x-length="20">
          <ods-chart-query
            context="ctx"
            field-x="theme"
            maxpoints="0"
            sort="serie1-1"
          >
            <ods-chart-serie
              expression-y="records_count"
              chart-type="treemap"
              function-y="COUNT"
              color="range-Paired"
              scientific-display="true"
            >
            </ods-chart-serie>
          </ods-chart-query>
        </ods-chart>
      </div>
    </div>

    <div class="col-md-6">
      <h2 class="title">
        Dataset by producer
      </h2>
      <ods-chart align-month="true" labels-x-length="20">
        <ods-chart-query
          context="ctx"
          field-x="publisher"
          maxpoints="0"
          sort="serie1-1"
        >
          <ods-chart-serie
            expression-y="records_count"
            chart-type="treemap"
            function-y="COUNT"
            color="range-Paired"
            scientific-display="true"
          >
          </ods-chart-serie>
        </ods-chart-query>
      </ods-chart>
    </div>
  </div>
</section>

<!-- Top et flop 5 des jeux de données les + populaires -->
<section>
  <div class="row">
    <div class="col-md-6">
      <h2 class="title">
        Most popular datasets
      </h2>

      <div
        ods-analysis="datasetminpopularity"
        ods-analysis-context="ctx"
        ods-analysis-max="8"
        ods-analysis-x="dataset_id"
        ods-analysis-serie-popularity="AVG(explore_popularity_score)"
        ods-analysis-sort="popularity"
      >
        <table class="top3-table">
          <thead>
            <tr>
              <th>#</th>
              <th>Dataset</th>
              <th>
                Score
                <i
                  class="fa fa-info-circle"
                  aria-hidden="true"
                  ods-tooltip="<p>The popularity score is the result of a calculation that uses the number of downloads, reuses and API calls of a dataset. The higher the score is, the more the dataset is being used!</p> "
                ></i>
              </th>
              <th>Details</th>
            </tr>
          </thead>
          <tbody>
            <tr
              ng-repeat="(position,analyse) in datasetminpopularity.results"
            >
              <td>{{ position + 1}}</td>
              <td>
                <a
                  target="_blank"
                  ng-href="{{ '/explore/dataset/' + analyse.x}}"
                >
                  {{ analyse.x }}
                </a>
              </td>
              <td>{{ analyse.popularity | number }}</td>
              <td>
                <a
                  target="_blank"
                  ng-href="{{ '/explore/dataset/ods-api-monitoring/analyze/?source=monitoring&amp;q=' + analyse.x }}"
                  ><i class="fa fa-bar-chart" aria-hidden="true"></i>
                </a>
              </td>
            </tr>
          </tbody>
        </table>
      </div>
    </div>

    <div class="col-md-6">
      <h2 class="title">
        Least popular dataset
      </h2>

      <div
        ods-analysis="datasetmaxpopularity"
        ods-analysis-context="ctx"
        ods-analysis-max="8"
        ods-analysis-x="dataset_id"
        ods-analysis-serie-popularity="AVG(explore_popularity_score)"
        ods-analysis-sort="-popularity"
      >
        <table class="top3-table">
          <thead>
            <tr>
              <th>#</th>
              <th>dataset</th>
              <th>
                Score
                <i
                  class="fa fa-info-circle"
                  aria-hidden="true"
                  ods-tooltip="<p>The popularity score is the result of a calculation that uses the number of downloads, reuses and API calls of a dataset. The higher the score is, the more the dataset is being used!</p> "
                ></i>
              </th>
              <th>Details</th>
            </tr>
          </thead>
          <tbody>
            <tr
              ng-repeat="(position,analyse) in datasetmaxpopularity.results"
            >
              <td>{{ position + 1}}</td>
              <td>
                <a
                  target="_blank"
                  ng-href="{{ '/explore/dataset/' + analyse.x}}"
                  >{{ analyse.x }}</a
                >
              </td>
              <td>{{ analyse.popularity | number }}</td>
              <td>
                <a
                  target="_blank"
                  ng-href="{{ '/explore/dataset/ods-api-monitoring/analyze/?source=monitoring&amp;q=' + analyse.x }}"
                  ><i class="fa fa-bar-chart" aria-hidden="true"></i>
                </a>
              </td>
            </tr>
          </tbody>
        </table>
      </div>
    </div>
  </div>
</section>

<section>
  <div class="row">
    <div class="col-md-12">
      <h2 class="title">
        Licenses use
      </h2>
      <ods-tag-cloud
        context="ctx"
        facet-name="license"
        max="10"
        redirect-to="/explore/dataset/domaindatasets/table/"
      >
      </ods-tag-cloud>
    </div>
  </div>
</section>
</div>
