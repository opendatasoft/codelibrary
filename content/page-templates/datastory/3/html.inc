<section class="block-grey">
    <div class="container">
        <h1 class="header-title">
            Interesting title
        </h1>
        <h2 class="header-subtitle">
            Quam ob rem ut ii qui superiores sunt submittere se debent in amicitia, sic quodam modo inferiores extollere.
        </h2>
    </div>
</section>


<section class="block-white">
    <div class="container">
        <h2 class="block-title">
            A block subtitle
        </h2>
        <h3 class="block-subtitle">
            Non ergo erunt homines deliciis diffluentes audiendi, si quando de amicitia, quam nec usu nec ratione habent cognitam, disputabunt.
        </h3>

        <div class="block-section">
            <div class="row">
                <div class="col-md-6">
                    <p class="block-text">
                        Fieri, inquam, Triari, nullo pacto potest, ut non dicas, quid non probes eius, a quo dissentias. quid enim me prohiberet Epicureum esse, si probarem, quae ille diceret? cum praesertim illa perdiscere ludus esset. Quam ob rem dissentientium inter se reprehensiones non sunt vituperandae, maledicta, contumeliae, tum iracundiae, contentiones concertationesque in disputando pertinaces indignae philosophia mihi videri solent.
                    </p>
                </div>
                <div class="col-md-6">
                    <p class="block-text">
                        Paphius quin etiam et Cornelius senatores, <a href="#">ambo venenorum artibus</a> pravis se polluisse confessi, eodem pronuntiante Maximino sunt interfecti. pari sorte etiam procurator monetae extinctus est. Sericum enim et Asbolium supra dictos, quoniam cum hortaretur passim nominare, quos vellent, adiecta religione firmarat, nullum igni vel ferro se puniri iussurum, plumbi validis ictibus interemit. et post hoe flammis Campensem aruspicem dedit, in negotio eius nullo sacramento constrictus.
                    </p>
                </div>
            </div>
        </div>
        <ods-dataset-context context="chart"
                             chart-domain="public"
                             chart-dataset="modis_c6_global_7d"
                             chart-parameters="{'disjunctive.country':true}">
            <ods-chart align-month="true">
                <ods-chart-query context="chart" 
                                field-x="country" 
                                maxpoints="50">
                    <ods-chart-serie expression-y="brightness" 
                                    chart-type="areasplinerange" 
                                    function-y="COUNT" 
                                    color="#FF9810" 
                                    scientific-display="true" 
                                    subseries='[{"func":"MIN","yAxis":"brightness"},{"func":"MAX","yAxis":"brightness"}]'>
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </ods-dataset-context>
    </div>
</section>


<section class="block-grey">
    <div class="container">
        <h2 class="block-title">
            A block subtitle
        </h2>
        <h3 class="block-subtitle">
            Unde Rufinus ea tempestate praefectus praetorio
        </h3>

        <p class="block-text center-text">
            Per hoc minui studium suum existimans Paulus, ut erat in conplicandis negotiis artifex dirus, unde ei Catenae inditum est cognomentum, vicarium ipsum eos quibus praeerat adhuc defensantem ad sortem periculorum communium traxit. et instabat ut eum quoque cum tribunis et aliis pluribus ad comitatum imperatoris vinctum perduceret: quo percitus ille exitio urgente abrupto ferro eundem adoritur Paulum. et quia languente dextera, letaliter ferire non potuit, iam districtum mucronem in proprium latus inpegit. hocque deformi genere mortis excessit e vita iustissimus rector ausus miserabiles casus levare multorum.
        </p>

        <div class="block-section">
            <div class="row">
                <div class="col-md-6">
                    <ods-dataset-context context="map" 
                                         map-domain="public"
                                         map-dataset="modis_c6_global_7d" 
                                         map-parameters="{'disjunctive.country':true}">
                        <ods-map context="map" 
                                 scroll-wheel-zoom="false" 
                                 location="2,19.68257,-0.02081" 
                                 basemap="jawg.streets"></ods-map>
                    </ods-dataset-context>
                </div>
                <div class="col-md-6">
                    <p class="block-text justify-text">
                        Non ergo erunt homines deliciis diffluentes audiendi, si quando de amicitia, quam nec usu nec ratione habent cognitam, disputabunt. Nam quis est, pro deorum fidem atque hominum! qui velit, ut neque diligat quemquam nec ipse ab ullo diligatur, circumfluere omnibus copiis atque in omnium rerum abundantia vivere? Haec enim est tyrannorum vita nimirum, in qua nulla fides, nulla caritas, nulla stabilis benevolentiae potest esse fiducia, omnia semper suspecta atque sollicita, nullus locus amicitiae.
                        <br>
                        <a href="#">precari ab indigno</a>
                    </p>
                </div>
            </div>
        </div>

        <div class="block-section">
            <div class="row">
                <div class="col-md-6">
                    <p class="block-text justify-text">
                        Atque, ut Tullius ait, ut etiam ferae fame monitae plerumque ad eum locum ubi aliquando pastae sunt revertuntur, ita homines instar turbinis degressi montibus impeditis et arduis loca petivere mari confinia, per quae viis latebrosis sese convallibusque occultantes cum appeterent noctes luna etiam tum cornuta ideoque nondum solido splendore fulgente nauticos observabant quos cum in somnum sentirent effusos per ancoralia, quadrupedo gradu repentes seseque suspensis passibus iniectantes in scaphas eisdem sensim nihil opinantibus adsistebant et incendente aviditate saevitiam ne cedentium quidem ulli parcendo obtruncatis omnibus merces opimas velut viles nullis repugnantibus avertebant. haecque non diu sunt perpetrata.
                    </p>
                </div>
                <div class="col-md-6">
                    <ods-dataset-context context="chart2" 
                                         chart2-domain="public" 
                                         chart2-dataset="modis_c6_global_7d" 
                                         chart2-parameters="{'disjunctive.country':true,'timezone':'Europe/Berlin'}">
                        <ods-chart align-month="true">
                            <ods-chart-query context="chart2" 
                                             field-x="country" 
                                             maxpoints="10" 
                                             sort="serie1-1">
                                <ods-chart-serie expression-y="brightness" 
                                                 chart-type="column" 
                                                 function-y="COUNT" 
                                                 color="#FF9810" 
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </ods-dataset-context>
                </div>
            </div>
        </div>
    </div>
</section>
