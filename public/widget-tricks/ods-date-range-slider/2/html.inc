<ods-dataset-context context="ctx"
                       ctx-dataset="shanghai-world-university-ranking"
                       ctx-domain="public">
      <h3>
          Classement de Shanghai des universités - moyenne du score par ans
      </h3>
      <ods-date-range-slider context="ctx"
                             date-format="YYYY"
                             initial-from="2010/01/01"
                             initial-to="2015/01/01"
                             precision="year"
                             date-field="year"
                             start-bound="'2005/01/01'"
                             end-bound="'2018/01/01'">
      </ods-date-range-slider>
      <div class="row">
          <div class="col-md-12">
              <ods-chart single-y-axis="true" min="0" max="101" step="5" labels-x-length="35" align-month="true">
                  <ods-chart-query context="ctx" field-x="university_name" maxpoints="20" sort="serie1-1">
                      <ods-chart-serie expression-y="total_score" chart-type="bar" function-y="AVG" label-y="Moyenne du score sur la plage sélectionnée" color="#FF515A" display-units="false" display-values="true" scientific-display="true">
                      </ods-chart-serie>
                  </ods-chart-query>
              </ods-chart>
          </div>
      </div>
  </ods-dataset-context>
