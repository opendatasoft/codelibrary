<section class="row">
  <div class="col-md-4">
    <ods-dataset-context context="bikecount" bikecount-dataset="comptage-velo-donnees-compteurs-syndicat-des-mobilites-de-touraine">
      <div class="card"
           ng-if="!ctx.parameters['refine.date']"
           ods-adv-analysis="daytotal"
           ods-adv-analysis-context="bikecount"
           ods-adv-analysis-select="sum(counts) as total"
           ods-adv-analysis-where="date >= now(days=-7)"
           ods-adv-analysis-group-by="date_format(date, 'YYYY-MM-dd')"
           >
          <div class="card-head"></div>
          <div class="card-body"
                ods-subaggregation="daytotal"
                ods-subaggregation-serie-weekavg="MEAN(total)">
              <p class="title is-1 has-text-primary">
                  {{ results[0].weekavg | number:0 }}
              </p>
              <p class="subtitle is-2">
                  bikes counted per day on average last week.
              </p>
          </div>
          <div class="card-footer">
          </div>
      </div>
    </ods-dataset-context>
  </div>
</section>
