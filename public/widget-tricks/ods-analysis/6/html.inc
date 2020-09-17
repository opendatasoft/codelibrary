<ods-dataset-context context="shanghaiworlduniversityranking"
                     shanghaiworlduniversityranking-dataset="shanghai-world-university-ranking"
                     shanghaiworlduniversityranking-domain="public"
                     shanghaiworlduniversityranking-parameters="{'sort':'world_rank'}">
    <div class="row"
         ods-analysis="analysisshanghai"
         ods-analysis-context="shanghaiworlduniversityranking"
         ods-analysis-max="20"
         ods-analysis-x="university_name"
         ods-analysis-serie-bestpubscore="MAX(pub)"
         ods-analysis-serie-bestalumniscore="MAX(alumni)"
         ods-analysis-serie-bestawardscore="MAX(award)"
         ods-analysis-sort="bestawardscore">
        {{ mynewstructure = (analysisshanghai.results | toObject : 'x') ; "" }}
        <div class="col-sm-6">
            <h3>
                ods-analysis
            </h3>
            <pre ng-bind="analysisshanghai|json"></pre>
        </div>
        <div class="col-sm-6">
            <h3>
                mynewstructure = (odsanalysis.results | toObject : 'x')
            </h3>
            <pre ng-bind="analysisshanghai.results | toObject : 'x' |json"></pre>
        </div>
        <div class="col-sm-12">
            <h3>
                Princeton University score <b>{{ mynewstructure['Princeton University'].bestawardscore }}</b>
            </h3>
            <pre>mynewstructure['Princeton University'].bestawardscore</pre>
            <h3>
                Cornell University score <b>{{ mynewstructure['Cornell University'].bestawardscore }}</b>
            </h3>
            <pre>mynewstructure['Cornell University'].bestawardscore</pre>
            <h3>
                Columbia University score <b>{{ mynewstructure['Columbia University'].bestawardscore }}</b>
            </h3>
            <pre>mynewstructure['Columbia University'].bestawardscore</pre>
        </div>
    </div>
</ods-dataset-context>
