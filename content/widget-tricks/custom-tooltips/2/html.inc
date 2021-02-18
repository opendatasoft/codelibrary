<ods-dataset-context context="ushospitals" ushospitals-dataset="us-hospitals" ushospitals-domain="userclub">
<!-- Component starts here 👇 -->
  <ods-map style="height:600px" location="8,41.35826,-72.23511" scroll-wheel-zoom="false">
      <ods-map-layer picto="hospital" color="#2C3F56" context="ushospitals">
          <ul style="display: block; list-style-type: none; color: #2c3f56; padding:0; margin:0;">
              <li>
                  <strong style="font-size:17px;">{{ record.fields.name | limitTo:25 }}</strong>
              </li>
              <li style="color:#bbb;">{{ record.fields.address | limitTo:140 }}</li>
              <li style="font-style:italic;color:#bbb;">{{ record.fields.city | limitTo:140 }}
                  <br/>
              </li>
              <br/>
              <li style="color:#ec643c; font-size:15px;">
                  <i class="fa fa-hospital-o"></i>{{record.fields.type}}
              </li>
              <li style="font-size:15px;">
                  <i class="fa fa-calendar-o"></i>
                  <span style="font-size: 14px; color: #bcbcbc;">Established</span>{{record.fields.date_creat | date}}
              </li>
              <li style="font-size:15px;">
                  <i class="fa fa-medkit"></i>
                  <span style="font-size: 14px; color: #bcbcbc;">Trauma</span>{{record.fields.trauma }}
              </li>
              <li style="font-size:15px;">
                  <i class="fa fa-dot-circle-o"></i>
                  <span style="font-size: 14px; color: #bcbcbc;">Helipad</span>{{record.fields.helipad}}
              </li>
              <li>
                  <ul style="list-style-type: none; color: #2c3f56;padding:0 0 15px;margin-top:0px;">
                      <li>
                          <strong style="font-size:15px;">
                              <i aria-hidden="true" class="fa fa-users"></i>
                              <span style="color: #bcbcbc;">Population/Beds</span>{{record.fields.population}}
                          </strong>
                      </li>
                      <li style="float:right;">
                          <strong style="font-size:13px;">
                              <a ng-href="{{record.fields.website}}" style="color:#ec643c;" target="_blank">Source</a>
                          </strong>
                          <i class="fa fa-external-link" style="color:#ec643c;"></i>
                      </li>
                  </ul>
              </li>
          </ul>
      </ods-map-layer>
  </ods-map>
  <!-- Component ends here 👆 -->
</ods-dataset-context>
