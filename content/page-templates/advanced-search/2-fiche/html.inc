<ods-dataset-context context="ctx"
                     ctx-dataset="boamp"
                     ctx-domain="boamp-datadila"
                     ctx-urlsync="true">

    <div ods-results="items" ods-results-context="boamp" ods-results-max="1" id="toplist">

        <div ng-repeat="item in items"

             ng-init="avis_donnees = (item.fields.donnees | fromjson);
                                          avis_gestion = (item.fields.gestion | fromjson);
                                          boampavislie.parameters['q']='#exact(annonce_lie,'+ item.fields.idweb +')';
                                          boamphtml.parameters['q']='idweb:\'' + item.fields.idweb +  '\'';
                                          annonces_anterieures_schema_v110 =  ( item.fields.annonces_anterieures_schema_v110 | fromjson ) ;
                                          tab_dept = (item.fields.code_departement).split(',');
                                          src_pdf = 'https://www.boamp.fr/telechargements/PDF/' + (item.fields.dateparution | moment:'YYYY') + '/' + item.fields.filename + '/' + item.fields.idweb + '.pdf';
                                          src_pdf_ftp_url = 'https://fr.ftp.opendatasoft.com/datadila/BOAMP/PDF/' + (item.fields.dateparution | moment:'YYYY') + '/' + item.fields.filename + '/' + item.fields.idweb + '.pdf';

                                          ''" ;>

            <!--<div ng-if="item.fields.idweb =='22-128118' || item.fields.idweb =='22-130312' || item.fields.idweb =='22-130312'">-->
            <div ng-if="item.fields.idweb =='23-10244'">
                <h1>
                    Annonce supprimée
                </h1>
            </div>

            <!--<div ng-if="item.fields.idweb !='22-128118' && item.fields.idweb !='22-130312' && item.fields.idweb !='22-146477'">-->
            <div ng-if="item.fields.idweb !='23-10244'">

                <!-- titre et description de la page -->
                <ods-document-meta ng-init="
                                                            pageTitle = 'Avis n° ' + item.fields.idweb ;
                                                            pageDescription = 'Avis n° ' + item.fields.idweb + ' sur le site Boamp.fr';
                                                            boamp.currentPage.title = pageTitle;
                                                            "
                                   title="pageTitle" description="pageDescription">
                </ods-document-meta>

                <h1>
                    Détail de l'avis {{item.fields.idweb}}
                </h1>

                <div>
                    <h2>

                        <div>
                            <div>
                                <div>

                                    <label for="checkboxes-select-avis-{{i}}" ng-bind="'Avis n° ' + item.fields.idweb"></label>
                                    <!--<span ng-bind="'Avis n°' + item.fields.idweb"></span>-->

                                </div>
                                <div>
                                    <!--
                                        <p>
                                            <span ng-bind="' Publié le ' + (item.fields.dateparution | moment:'LL')"></span>
                                        </p>
                                    -->
                                    <span ng-bind="' Publié le ' + (item.fields.dateparution | moment:'LL')"></span>
                                </div>
                            </div>
                        </div>

                        <p>
                                            <span ng-if="avis_gestion.INDEXATION.DATE_LIMITE_REPONSE"
                                                  ng-init="
                                                                       arrayDT = avis_gestion.INDEXATION.DATE_LIMITE_REPONSE.split('T');
                                                                       arrayDate = arrayDT[0].split('-');

                                                                       year = arrayDate[0];
                                                                       month = arrayDate[1];
                                                                       day = arrayDate[2];
                                                                       time_str = arrayDT[1];

                                                                       date_str_FormatFr = arrayDate[2] + '/' + arrayDate[1] + '/' + arrayDate[0];
                                                                       time_display = time_str.substring(0,5).replace(':','h');"
                                            >Date limite de réponse le {{date_str_FormatFr}} à {{time_display}}

                                             <!--<br/>item.fields.datelimitereponse : {{ avis_gestion.INDEXATION.DATE_LIMITE_REPONSE }} <br/>-->
                                            </span>
                        </p>

                        <img ng-if="item.fields.criteres.includes('environnementaux')" src="/assets/theme_image/ico-critere-environnement.png" alt="Critères environnementaux" title="Critères environnementaux">
                        <img ng-if="item.fields.criteres.includes('sociaux')" src="/assets/theme_image/ico-critere-social.png" alt="Critères sociaux" title="Critères sociaux">
                        <img ng-if="item.fields.marche_public_simplifie == 1" src="/assets/theme_image/ico-critere-mps.png" alt="MPS" title="Marché public simplifié" style="padding-bottom:2px;">
                        <p>
                            <span ng-bind-html="item.fields.objet"></span>
                        </p>

                    </h2>

                    <div>
                        <ul>

                            <li>
                                <span>Département : </span>
                                <span ng-repeat="dept in tab_dept">{{dept}} </span>
                            </li>
                            <li>
                                <span>Acheteur : </span><span ng-bind-html="item.fields.nomacheteur"></span>
                            </li>

                            <li>
                                <span>Type d'avis : </span>
                                <span ng-bind="item.fields.nature_libelle"></span>
                                <span ng-if="item.fields.sousnature_libelle"> - <span ng-bind="item.fields.sousnature_libelle"></span></span>
                                <span ng-if="item.fields.etat == 'RECTIFICATIF'"> - rectificatif </span>
                                <span ng-if="item.fields.etat == 'ANNULATION'"> - annulation </span>
                                <span ng-if="item.fields.etat == 'RECTIFANNUL'"> - rectificatif et annulation </span>
                            </li>

                            <li>
                                <span>Procédure : </span>
                                <span margin-left="5em" ng-bind="item.fields.procedure_libelle"></span>
                            </li>

                        </ul>
                    </div>

                    <!--boampavislie : {{ boampavislie }} -->
                    <!-- AVIS LIE -->
                    <div ods-results="items_lie" ods-results-context="boampavislie" ods-results-max="100" id="toplist">
                        <div ng-if="(boampavislie.nhits > 0) && (boampavislie.nhits <= 100)">
                            <span ng-if="boampavislie.nhits==1">{{boampavislie.nhits}} Avis lié : </span>
                            <span ng-if="boampavislie.nhits>1">{{boampavislie.nhits}} Avis liés : </span>
                        </div>
                        <ul>
                            <li ng-repeat="item in items_lie">

                                <a href="/pages/avis?q=idweb:'{{item.fields.idweb}}'"> Annonce N°
                                    <span ng-bind="item.fields.idweb"></span> </a>
                                - <span ng-bind="item.fields.nature_libelle"></span> - Parue le
                                <span ng-bind="item.fields.dateparution | moment:&quot;LL&quot;"></span>
                            </li>
                        </ul>

                    </div>

                    <!-- annonces_anterieures_schema_v110 : {{ item.fields.annonces_anterieures_schema_v110 }} -->

                    <!-- DETAIL A PARTIR DU XML -->
                    <hr />

                    <div>
                        <div>
                            <!-- detail colonne gauche -->
                            <div>

                                <ul>

                                    <H3>
                                        L’essentiel du marché
                                    </H3>

                                    <!-- IDENTIFICATION -->
                                    <div ng-init="item.fields.famille == 'DSP' ? denominationlabel = 'Nom et adresse de l\'autorité délégante :' : denominationlabel = 'Nom et adresse officiels de l\'organisme acheteur :'">
                                    </div>

                                    <li ng-if="avis_donnees.IDENTITE.DENOMINATION">
                                        <span ng-bind="denominationlabel"></span><br />
                                        <span ng-bind-html="avis_donnees.IDENTITE.DENOMINATION"></span>

                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.CORRESPONDANT">
                                        <span>A l'attention de :</span><br />
                                        <span ng-bind="avis_donnees.IDENTITE.CORRESPONDANT"></span>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.ADRESSE || avis_donnees.IDENTITE.CP || avis_donnees.IDENTITE.VILLE">
                                        <span>Adresse :</span><br />
                                        <span ng-bind="avis_donnees.IDENTITE.ADRESSE"></span>
                                        <span ng-bind="avis_donnees.IDENTITE.CP"></span>
                                        <span ng-bind="avis_donnees.IDENTITE.VILLE"></span>
                                        <span ng-bind="avis_donnees.IDENTITE.PAYS"></span>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.TEL">
                                        <span>Téléphone :</span><br />
                                        <span ng-bind="avis_donnees.IDENTITE.TEL"></span>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.POSTE">
                                        <span>Poste :</span><br />
                                        <span ng-bind="avis_donnees.IDENTITE.POSTE"></span>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.FAX">
                                        <span>Télécopieur :</span><br />
                                        <span ng-bind="avis_donnees.IDENTITE.FAX"></span>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.CONTACT">
                                        <span>Point(s) de contact :</span><br />
                                        <span ng-bind="avis_donnees.IDENTITE.CONTACT"></span>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.MEL">
                                        <span>Courriel :</span><br />
                                        <a href="{{host_bo}}/pages/envoi-acheteur/{{avis_donnees.IDENTITE.MEL}}/{{item.fields.idweb}}" title="Envoyer un email à l'acheteur {{avis_donnees.IDENTITE.MEL}}"><span ng-bind="avis_donnees.IDENTITE.MEL"></span></a>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.URL">
                                                        <span ng-init="item.fields.famille == 'FNS' ? internetURLlabel = 'Adresse internet du pouvoir adjudicateur :' : (item.fields.famille == 'DSP' ? internetURLlabel = 'Adresse générale de l\'autorité délégante :' :internetURLlabel = 'Adresse internet :')">
                                                        </span>
                                        <span ng-bind="internetURLlabel"></span><br />
                                        <a href="{{avis_donnees.IDENTITE.URL}}" target="_blank" ng-bind="avis_donnees.IDENTITE.URL"></a>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.URL_PROFIL_ACHETEUR">
                                        <span>Adresse internet du profil d'acheteur :</span><br />
                                        <a href="{{avis_donnees.IDENTITE.URL_PROFIL_ACHETEUR}}" target="_blank" ng-bind="avis_donnees.IDENTITE.URL_PROFIL_ACHETEUR"></a>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.URL_INFORMATION">
                                        <span>Accès électronique à l'information :</span><br />
                                        <a href="{{avis_donnees.IDENTITE.URL_INFORMATION}}" target="_blank" ng-bind="avis_donnees.IDENTITE.URL_INFORMATION"></a>
                                    </li>

                                    <li ng-if="avis_donnees.IDENTITE.URL_PARTICIPATION">
                                        <span>Soumission des offres et des demandes de participation par voie électronique :</span><br />
                                        <a href="{{avis_donnees.IDENTITE.URL_PARTICIPATION}}" target="_blank" ng-bind="avis_donnees.IDENTITE.URL_PARTICIPATION"></a>
                                    </li>

                                    <!-- DESCRIPTION MARCHE -->
                                    <br />
                                    <li ng-if="avis_donnees.OBJET.OBJET_COMPLET">
                                        <span>Objet du marché :</span><br />
                                        <span ng-bind-html="avis_donnees.OBJET.OBJET_COMPLET"></span>
                                    </li>

                                    <!-- LIEUX -->
                                    <span
                                            ng-init="les_lieux = avis_donnees.OBJET.LIEU_EXEC_LIVR;
                                                                   les_lieux.length > 1 ? '' :  les_lieux[0] = avis_donnees.OBJET.LIEU_EXEC_LIVR ;
                                                                   ''" ;>
                                                    </span>

                                    <li ng-if="les_lieux[0].ADRESSE || les_lieux[0].CP || les_lieux[0].VILLE">
                                        <span>Lieu d'exécution des travaux, de livraison fournitures ou de prestation des services</span><br />
                                        <span ng-repeat="lieu in les_lieux" ng-bind="lieu.ADRESSE"></span>
                                        <span ng-bind="lieu.CP"></span> <span ng-bind="lieu.VILLE"></span><br />
                                    </li>

                                    <li ng-if="avis_donnees.OBJET.DELEGATION.AUTRES_PRECISIONS">
                                        <span>Autres caractéristiques et informations sur la nature et l'objet de la convention :</span><br />
                                        <span ng-bind="avis_donnees.OBJET.DELEGATION.AUTRES_PRECISIONS"></span>
                                    </li>

                                    <li ng-if="avis_donnees.OBJET.DELEGATION.DUREE_AN || avis_donnees.OBJET.DELEGATION.DUREE_MOIS">
                                        <span>Durée de la délégation :</span><br />
                                        <span ng-if="avis_donnees.OBJET.DELEGATION.DUREE_AN" ng-bind="avis_donnees.OBJET.DELEGATION.DUREE_AN"></span> ans
                                        <span ng-if="avis_donnees.OBJET.DELEGATION.DUREE_MOIS" ng-bind="avis_donnees.OBJET.DELEGATION.DUREE_MOIS"></span> mois

                                    </li>

                                    <li ng-if="avis_donnees.OBJET.DELEGATION.DATE_DEBUT">
                                        <span>Date à partir de laquelle la convention prend effet :</span><br />
                                        <span ng-bind="avis_donnees.OBJET.DELEGATION.DATE_DEBUT | moment:&quot;LL&quot;"></span>
                                    </li>

                                    <!-- QUANTITE LOTS -->
                                    <!--  DEBUG : DIV EN LOT ? : {{avis_donnees.OBJET.DIV_EN_LOTS}} - {{ (avis_donnees.OBJET.DIV_EN_LOTS).toString().indexOf('OFFRE_UN') }} -->
                                    <li ng-if="(avis_donnees.OBJET.DIV_EN_LOTS).hasOwnProperty('OFFRE_UN') || (avis_donnees.OBJET.DIV_EN_LOTS).hasOwnProperty('OFFRE_PLUSIEURS') || (avis_donnees.OBJET.DIV_EN_LOTS).hasOwnProperty('OFFRE_TOUS')">
                                        <span>Possibilité de présenter une offre pour :</span><br />
                                        <span ng-if="avis_donnees.OBJET.DIV_EN_LOTS.hasOwnProperty('OFFRE_UN')">un lot</span>
                                        <span ng-if="avis_donnees.OBJET.DIV_EN_LOTS.hasOwnProperty('OFFRE_PLUSIEURS') ">un ou plusieurs lots</span>
                                        <span ng-if="avis_donnees.OBJET.DIV_EN_LOTS.hasOwnProperty('OFFRE_TOUS')">tous les lots</span>
                                    </li>

                                    <!-- INFO LOTS -->
                                    <span
                                            ng-init="les_lots = avis_donnees.OBJET.LOTS.LOT;
                                                                   tableau_lots = les_lots.length > 1 ? les_lots : (avis_donnees.OBJET.LOTS );
                                                                   ''" ;>
                                                    </span>

                                    <li ng-if="avis_donnees.OBJET.LOTS.LOT"
                                        ng-init="les_lots = avis_donnees.OBJET.LOTS.LOT;
                                                                 tableau_lots = les_lots.length > 1 ? les_lots : (avis_donnees.OBJET.LOTS );">

                                        <span>Renseignements relatifs aux lots :</span><br />

                                        <!-- plusieurs lots -->
                                        <ul>
                                            <li ng-repeat="lot in tableau_lots">
                                                                <span ng-if="lot.NUM">
                                                                    <span ng-bind="'Lot n° ' + lot.NUM + ' : '"></span><span ng-bind-html="lot.INTITULE"></span><br />
                                                                </span>
                                                <span ng-bind-html="lot.DESCRIPTION"></span>
                                            </li>
                                        </ul>

                                    </li>

                                    <!-- CARACTERISTIQUES -->
                                    <li ng-if="avis_donnees.OBJET.CARACTERISTIQUES.PRINCIPALES">
                                        <span>Caractéristiques principales :</span><br />
                                        <span ng-bind-html="avis_donnees.OBJET.CARACTERISTIQUES.PRINCIPALES"></span>
                                    </li>

                                    <li ng-if="avis_donnees.OBJET.CARACTERISTIQUES.QUANTITE">
                                        <span>Quantité ou étendue :</span><br />
                                        <span ng-bind-html="avis_donnees.OBJET.CARACTERISTIQUES.QUANTITE"></span>
                                    </li>

                                    <!-- IMPLICATIONS -->
                                    <div ng-if="item.fields.famille == 'FNS'">
                                        <li ng-if="(avis_donnees.OBJET.AVIS_IMPLIQUE).hasOwnProperty('ACCORD_CADRE')">
                                            <span>L'avis implique l'établissement d'un accord-cadre</span>
                                        </li>

                                        <li ng-if="avis_donnees.CONDITION_PARTICIPATION.PRESTATION_RESERVEE_OUI">
                                            <span>La prestation est réservée à une profession particulière :</span><br />
                                            <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.PRESTATION_RESERVEE_OUI"></span>
                                        </li>

                                    </div>  <!-- fin isFNS -->

                                </ul>

                            </div> <!-- FIN  colonne gauche -->

                            <!-- detail colonne droite -->
                            <div>
                                <!-- ######################## -->
                                <!--BLOC -  Informations pratiques -->
                                <!-- ####################### -->

                                <!-- DEBUG CONDITION DELAI : {{ avis_donnees.CONDITION_DELAI }} -->
                                <ul>

                                    <H3>
                                        Informations pratiques
                                    </H3>

                                    <li ng-if="avis_donnees.CONDITION_DELAI.RECEPT_CANDIDAT">
                                        <span>Date limite de réception des candidatures :</span><br />
                                        <span
                                                ng-init="
                                                                       arrayDT = avis_donnees.CONDITION_DELAI.RECEPT_CANDIDAT.split('T');
                                                                       arrayDate = arrayDT[0].split('-');

                                                                       year = arrayDate[0];
                                                                       month = arrayDate[1];
                                                                       day = arrayDate[2];
                                                                       time_str = arrayDT[1];

                                                                       date_str_FormatFr = arrayDate[2] + '/' + arrayDate[1] + '/' + arrayDate[0];
                                                                       time_display = time_str.substring(0,5).replace(':','h');"
                                        > {{ date_str_FormatFr }} à {{time_display}}
                                                              </span>

                                        <!--<br/>avis_donnees.CONDITION_DELAI.RECEPT_CANDIDAT : {{ avis_donnees.CONDITION_DELAI.RECEPT_CANDIDAT }}-->
                                    </li>

                                    <li ng-if="avis_donnees.CONDITION_DELAI.RECEPT_OFFRES">
                                        <span>Date limite de réception des offres :</span><br />

                                        <span ng-init="
                                                                       arrayDT = avis_donnees.CONDITION_DELAI.RECEPT_OFFRES.split('T');
                                                                       arrayDate = arrayDT[0].split('-');

                                                                       year = arrayDate[0];
                                                                       month = arrayDate[1];
                                                                       day = arrayDate[2];
                                                                       time_str = arrayDT[1];

                                                                       date_str_FormatFr = arrayDate[2] + '/' + arrayDate[1] + '/' + arrayDate[0];
                                                                       time_display = time_str.substring(0,5).replace(':','h');"

                                        > {{ date_str_FormatFr }} à {{time_display}}

                                                        </span>

                                        <!--<br/>avis_donnees.CONDITION_DELAI.RECEPT_OFFRES : {{avis_donnees.CONDITION_DELAI.RECEPT_OFFRES}}-->
                                    </li>

                                    <!-- DEUBG : (avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE) -> {{ avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE }} -->
                                    <!-- Délai minimum de validité des offres -->
                                    <li ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE">
                                        <span>Délai minimum de validité des offres :</span><br />

                                        <span ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.JUSQUAU" ng-bind="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.JUSQUAU | moment:&quot;D MMMM YYYY&quot;"></span>

                                        <span ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_MOIS" ng-bind="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_MOIS"></span><span ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_MOIS"> mois</span>

                                        <span ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_JOUR && avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_MOIS"> et </span>

                                        <span ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_JOUR" ng-bind="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_JOUR"></span>
                                        <span ng-if="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.DUREE_JOUR"> jours</span>

                                    </li>

                                    <!-- Critères d'attribution : -->
                                    <!--
                                        <i>DEBUG</i> <br/>
                                        CRITERES D'ATTRIBUTION  {{ avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION}}
                                        <br/>
                                        CRITERES_CCTP:  {{ avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.hasOwnProperty('CRITERES_CCTP')}}  <br/>
                                        CRITERES_PONDERES:  {{ avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_PONDERES }}  <br/>
                                        CRITERES_PRIX:  {{ avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.hasOwnProperty('CRITERES_PRIX') }}  <br/>
                                        CRITERES_LIBRE:  {{ avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_LIBRE }}  <br/>

                                        <b>##TODO  -> Liste des critères pondérés</b> <br/>
                                        -->

                                    <!--
                                    <li ng-if="(avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION).hasOwnProperty('CRITERES_CCTP') || avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_PONDERES || (avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION).hasOwnProperty('CRITERES_PRIX') || avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_LIBRE">
                                        <span>Critères d'attribution :</span><br/>

                                        <span ng-if="(avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION).hasOwnProperty('CRITERES_CCTP')">
                                            Offre économiquement la plus avantageuse appréciée en fonction des critères énoncés dans le cahier des charges (règlement de la consultation, lettre d'invitation ou document descriptif).
                                        </span>

                                        <span ng-if="(avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION).hasOwnProperty('CRITERES_PRIX')">
                                            Offre économiquement la plus avantageuse appréciée en fonction du critère unique du prix le plus bas.
                                        </span>

                                        <div ng-if="(avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_PONDERES)">

                                            <span
                                                  ng-init="les_criteres_ponderes = avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_PONDERES.CRITERE;
                                                           les_criteres_ponderes.length > 1 ? '' :  les_criteres_ponderes[0] = avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION.CRITERES_PONDERES.CRITERE ;
                                                           ''";>
                                            </span>

                                            <span>Offre économiquement la plus avantageuse appréciée en fonction des critères énoncés ci-dessous</span>
                                            <ul>
                                                <li ng-repeat="critere in les_criteres_ponderes">
                                                    <span ng-bind-html="critere['#text']"></span> : <span ng-bind="critere['@POIDS']"></span> %
                                                </li>
                                            </ul>
                                        </div>


                                        <span ng-if="(avis_donnees.PROCEDURE.CRITERES_ATTRIBUTION).CRITERES_LIBRE" ng-bind-html="avis_donnees.CONDITION_DELAI.VALIDITE_OFFRE.CRITERES_LIBRE"></span>

                                    </li>
                                    -->

                                    <!-- CONDITIONS PARTICIPATION -->
                                    <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CRITERE_SELECTION">
                                        <span>Conditions de participations :</span><br />
                                        <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CRITERE_SELECTION"></span>
                                    </li>

                                    <!-- Situation propre -->
                                    <li ng-if="avis_donnees.CONDITION_PARTICIPATION.SITUATION_JURIDIQUE || avis_donnees.CONDITION_PARTICIPATION.SITUATION_JURIDIQUE_SST">
                                        <span>Situation propre :</span><br />
                                        <div ng-if="avis_donnees.CONDITION_PARTICIPATION.SITUATION_JURIDIQUE">
                                            <span ng-if="item.fields.estdefense == 'oui'"><i>Critères relatifs à la situation personnelle d'opérateurs économiques (susceptibles d'entraîner leur exclusion), y compris exigences relatives à leur inscription à un registre professionnel ou du commerce. Renseignements et formalités nécessaires pour évaluer si ces exigences sont remplies :</i><br /></span>
                                            <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.SITUATION_JURIDIQUE"></span>
                                        </div>

                                        <div ng-if="avis_donnees.CONDITION_PARTICIPATION.SITUATION_JURIDIQUE_SST">
                                            <span ng-if="item.fields.estdefense == 'oui'"><i>Critères relatifs à la situation personnelle de sous-traitants (susceptibles d'entraîner leur rejet), y compris exigences relatives à leur inscription à un registre professionnel ou du commerce. Renseignements et formalités nécessaires pour évaluer si ces exigences sont remplies :</i><br /></span>
                                            <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.SITUATION_JURIDIQUE_SST"></span>
                                        </div>
                                    </li>

                                    <!-- capacite economique et financiere -->
                                    <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO || avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_SST">
                                        <span>Capacité économique et financière - références requises :</span><br />
                                        <ul>
                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO">
                                                                <span ng-if="item.fields.estdefense == 'oui'">
                                                                    <i>Critères relatifs à la situation économique et financière d'opérateurs économiques (susceptibles d'entraîner leur exclusion). Renseignements et formalités nécessaires pour évaluer si ces exigences sont remplies :</i><br />
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO"></span>
                                            </li>

                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_NIVEAU_MINI">
                                                                <span>
                                                                    <i>Niveau(x) spécifique(s) minimal(aux) exigé(s) :</i><br />
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_NIVEAU_MINI"></span>
                                            </li>

                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_SST">
                                                                <span ng-if="item.fields.estdefense == 'oui'">
                                                                    <i>Critères relatifs à la situation économique et financière de sous-traitants (susceptibles d'entraîner leur rejet). Renseignements et formalités nécessaires pour évaluer si ces exigences sont remplies :</i><br />
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_SST"></span>
                                            </li>

                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_NIVEAU_MINI_SST">

                                                                <span><i>Niveau(x) spécifique(s) minimal(aux) exigé(s) :</i>
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_ECO_NIVEAU_MINI_SST"></span>

                                            </li>

                                        </ul>
                                    </li> <!-- fin capacite economique et financiere -->

                                    <!-- Capacite technique et professionnelle -->
                                    <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH || avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_SST">
                                        <span>Référence professionnelle et/ou capacité technique - références requises :</span><br />
                                        <ul>
                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH">
                                                                <span ng-if="item.fields.estdefense == 'oui'"><i>Critères relatifs à la capacité technique et/ou professionnelle d'opérateurs économiques (susceptibles d'entraîner leur exclusion). Renseignements et formalités nécessaires pour évaluer si ces exigences sont remplies :</i>
                                                                    <br />
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH"></span>
                                            </li>

                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_NIVEAU_MINI">
                                                                <span><i>Niveau(x) spécifique(s) minimal(aux) exigé(s) :</i>
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_NIVEAU_MINI"></span>
                                            </li>

                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_SST">
                                                                <span ng-if="item.fields.estdefense == 'oui'"><i>Critères relatifs à la capacité technique et/ou professionnelle de sous-traitants (susceptibles d'entraîner leur rejet). Renseignements et formalités nécessaires pour évaluer si ces exigences sont remplies :</i>
                                                                    <br />
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_SST"></span>
                                            </li>

                                            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_NIVEAU_MINI_SST">
                                                                <span><i>Niveau(x) spécifique(s) minimal(aux) exigé(s) :</i>
                                                                </span>
                                                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CAP_TECH_NIVEAU_MINI_SST"></span>
                                            </li>
                                        </ul>
                                    </li>

                                    <!-- PAIEMENT -->

                                    <!-- {{ avis_donnees.CONDITION_ADMINISTRATIVE }} -->
                                    <li ng-if="avis_donnees.CONDITION_ADMINISTRATIVE.CONDITIONS_ET_MODE_PAIEMENT_OBTENIR_DOCUMENTS">
                                        <span>Conditions et mode de paiement pour obtenir les documents contractuels et additionnels : </span><br />
                                        <span ng-bind-html="avis_donnees.CONDITION_ADMINISTRATIVE.CONDITIONS_ET_MODE_PAIEMENT_OBTENIR_DOCUMENTS"></span>

                                        <div ng-if="avis_donnees.CONDITION_ADMINISTRATIVE.DATE_LIMITE_OBTENTION_DOCUMENTS || avis_donnees.CONDITION_ADMINISTRATIVE.DOCUMENT_PAYANT_OUI.VALEUR ">
                                            <ul>
                                                <li ng-if="avis_donnees.CONDITION_ADMINISTRATIVE.DATE_LIMITE_OBTENTION_DOCUMENTS">
                                                    <span>date limite d'obtention :</span><br />
                                                    <span ng-bind="avis_donnees.CONDITION_ADMINISTRATIVE.DATE_LIMITE_OBTENTION_DOCUMENTS | moment:&quot;D MMMM YYYY&quot;"></span>

                                                </li>

                                                <li ng-if="avis_donnees.CONDITION_ADMINISTRATIVE.DOCUMENT_PAYANT_OUI.VALEUR">

                                                    <span>Prix :</span><br />
                                                    <span ng-bind="avis_donnees.CONDITION_ADMINISTRATIVE.DOCUMENT_PAYANT_OUI.VALEUR['#text']"></span>
                                                    <span ng-bind="avis_donnees.CONDITION_ADMINISTRATIVE.DOCUMENT_PAYANT_OUI.DEVISE['@DEVISE']"></span>
                                                </li>
                                            </ul>
                                        </div>
                                    </li>

                                    <!-- OBTENTION DOCUMENT -->
                                    <span
                                            ng-init="les_adresses_renseignement = avis_donnees.RENSEIGNEMENTS_COMPLEMENTAIRES.ADRESSES_COMPLEMENTAIRES.ADRESSE;
                                                                   tableau_adresse_renseignements = les_adresses_renseignement.length > 1 ? les_adresses_renseignement : (avis_donnees.RENSEIGNEMENTS_COMPLEMENTAIRES.ADRESSES_COMPLEMENTAIRES);
                                                                   ''" ;>
                                                    </span>

                                    <div ng-if="tableau_adresse_renseignements">
                                        <!--  <H4 > OBTENTION DOCUMENT - DEBUG :</H4> -->

                                        <!--
                                    DEBUG (avis_donnees.RENSEIGNEMENTS_COMPLEMENTAIRES.ADRESSES_COMPLEMENTAIRES.ADRESSE):<br/><br/> {{avis_donnees.RENSEIGNEMENTS_COMPLEMENTAIRES.ADRESSES_COMPLEMENTAIRES.ADRESSE}}
                                    <br/> <BR/>TABLEAU d'adresse -> {{tableau_adresse_renseignements}}<br/>
                                 -->
                                        <ul>
                                            <li ng-repeat="adresse in tableau_adresse_renseignements">
                                                <!--  adresse.TYPE -> {{adresse.TYPE}} -->
                                                <span ng-if="adresse.TYPE.hasOwnProperty('DOCUMENTS')">Adresse auprès de laquelle les documents peuvent être obtenus :<br /></span>
                                                <span ng-if="adresse.TYPE.hasOwnProperty('ENVOYER_OFFRES')">Adresse à laquelle les offres/candidatures/projets/demandes de participation doivent être envoyés :<br /></span>
                                                <span ng-if="adresse.TYPE.hasOwnProperty('ADMIN')">Adresse auprès de laquelle des renseignements d'ordre administratif peuvent être obtenus :<br /></span>
                                                <span ng-if="adresse.TYPE.hasOwnProperty('TECH')">Adresse auprès de laquelle des renseignements d'ordre technique peuvent être obtenus :<br /></span>
                                                <span ng-if="adresse.TYPE.hasOwnProperty('ADMIN_TECH')">Adresse auprès de laquelle des renseignements d'ordre administratif et technique peuvent être obtenus :<br /></span>
                                                <span ng-if="adresse.TYPE.hasOwnProperty('RENSEIGNEMENTS')">Adresse auprès de laquelle les documents peuvent être obtenus :<br /></span>
                                                <span ng-if="adresse.TYPE.hasOwnProperty('DOCUMENTS')">Adresse auprès de laquelle des renseignements complémentaires peuvent être obtenus :<br /></span>
                                                <!--
                                            <H4 ng-if="!adresse.TYPE.hasOwnProperty('DOCUMENTS') && !adresse.TYPE.hasOwnProperty('RENSEIGNEMENTS') && !adresse.TYPE.hasOwnProperty('ADMIN_TECH') && !adresse.TYPE.hasOwnProperty('TECH') && !adresse.TYPE.hasOwnProperty('ADMIN') && !adresse.TYPE.hasOwnProperty('ENVOYER_OFFRES') && !adresse.TYPE.hasOwnProperty('DOCUMENTS')">
                                                Autre adresse lié ({{adresse.TYPE}}):
                                            </H4>
                                        -->
                                                <div ng-if=" !(!adresse.TYPE.hasOwnProperty('DOCUMENTS') && !adresse.TYPE.hasOwnProperty('RENSEIGNEMENTS') && !adresse.TYPE.hasOwnProperty('ADMIN_TECH') && !adresse.TYPE.hasOwnProperty('TECH') && !adresse.TYPE.hasOwnProperty('ADMIN') && !adresse.TYPE.hasOwnProperty('ENVOYER_OFFRES') && !adresse.TYPE.hasOwnProperty('DOCUMENTS') ) ">
                                                    <div ng-if="adresse.DENOMINATION">
                                                        <span ng-bind-html="adresse.DENOMINATION"></span><br />
                                                    </div>
                                                    <span ng-if="adresse.CORRESPONDANT">Correspondant :  <span ng-bind-html="adresse.CORRESPONDANT"></span><br /></span>
                                                    <span ng-if="adresse.CONTACT">Contact:  <span ng-bind="adresse.CONTACT"></span><br /></span>
                                                    <span ng-if="adresse.ADRESSE" ng-bind="adresse.ADRESSE"></span>
                                                    <span ng-if="adresse.CP" ng-bind="adresse.CP"></span>
                                                    <span ng-if="adresse.VILLE" ng-bind="adresse.VILLE"></span>
                                                    <span ng-if="adresse.PAYS" ng-bind="adresse.PAYS"></span>
                                                    <span ng-if="adresse.ADRESSE || adresse.CP || adresse.VILLE || adresse.PAYS  ">
                                                                        <br />
                                                                    </span>
                                                    <span ng-if="adresse.POSTE">Poste : <span ng-bind="adresse.POSTE"></span><br /></span>
                                                    <span ng-if="adresse.FAX">Fax : <span ng-bind="adresse.FAX"></span><br /></span>
                                                    <span ng-if="adresse.MEL">Courriel : <span ng-bind="adresse.MEL"></span><br /></span>
                                                    <span ng-if="adresse.URL">Adresse internet : <span ng-bind="adresse.URL"></span><br /></span>

                                                </div>

                                            </li>
                                        </ul>
                                    </div>
                                </ul>

                            </div>
                        </div>
                    </div>

                    <!--
                        <span ng-bind="item.fields.nature_libelle"></span> <span ng-if="item.fields.sousnaturenature_libelle"> - <span ng-bind="item.fields.sousnature_libelle"></span></span>
                        <span ng-if="item.fields.etat == 'RECTIFICATIF'"> <strong> ( Rectificatif ) </strong></span>
                        <span ng-if="item.fields.etat == 'ANNULATION'"> <strong> ( Annulation ) </strong></span>
                        <span ng-if="item.fields.etat == 'RECTIFANNUL'"> <strong> ( Rectif./Annul. ) </strong></span>

                        <span margin-left="5em" ng-bind="item.fields.procedure_libelle"></span>
                        -->

                    <!-- REFERENCE ET AVIS ANTERIEUR / LIE -->

                    <hr />

                    <span>Références complètes : </span>Avis n° <span ng-bind="item.fields.idweb"></span>

                    <!-- LIEN JOUE/ TED - SSI famille de l'annonce = JOUE -->
                    <div ng-if="item.fields.famille == 'JOUE'">
                        <ods-dataset-context context="joue"
                                             joue-dataset="joue"
                                             ng-init="joue.parameters['q']='idweb:\'' + item.fields.idweb +  '\'';"
                        >



                                            <span ods-results="liens_ted"
                                                  ods-results-context="joue"
                                                  ods-results-max=5>
                                                <div ng-repeat="item in liens_ted">
                                                    <span ng-show="item.fields.reference_ted != 'NULL'">
                                                        <span>Référence de TED :</span> <a href="{{item.fields.url_ted}}" target="_blank">{{item.fields.reference_ted}}</a> - annonce diffusée le <span ng-bind="(item.fields.date_joue | moment:'LL')"></span>
                                                    </span>
                                                </div>
                                            </span>
                        </ods-dataset-context>
                    </div>

                    <div
                            ng-init="annonces_anterieures = (item.fields.annonces_anterieures | fromjson );
                                                  tableau_avis_initiaux = [];
                                                  annonces_anterieures.length > 1 ? tableau_avis_initiaux = annonces_anterieures : tableau_avis_initiaux[0] = annonces_anterieures;
                                                  ''">

                        <!-- on cherche l'annonce intiale dans le tableau des référence antérieure -->
                        <!-- car on n'affiche que celle-ci -->
                        <div ng-repeat="avis in tableau_avis_initiaux">
                            <!-- {{annonce.REFERENCE.TYPE_AVIS.STATUT.INITIAL != undefined ? annonce_initiale = annonce : ''}}    -->
                            <span ng-if="avis.REFERENCE.TYPE_AVIS.STATUT.INITIAL != undefined">
                                                {{ type_avis_precedent = '';
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["ATTRIBUTION"] ? 'Résultat de marché' : type_avis_precedent;
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["PRE-INFORMATION"] ? 'Avis informatif' : type_avis_precedent;
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["APPEL_OFFRE"] ? 'Avis de marché' : type_avis_precedent;
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["MODIFICATION"] ? 'Modification' : type_avis_precedent;
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["INTENTION_CONCLURE"] ? "Avis d'intention de conclure" : type_avis_precedent;
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["RECTIFICATIF"] ? 'Rectificatif' : type_avis_precedent;
                                                type_avis_precedent = avis.REFERENCE.TYPE_AVIS.NATURE["QUALIFICATION"] ? 'Qualification' : type_avis_precedent;
                                                ''
                                                }}


                                                <span>Liens vers les avis initiaux :</span> <strong ng-if="type_avis_precedent" ng-bind="type_avis_precedent + ' :'"></strong> Annonce publiée le <span ng-bind="((avis.REFERENCE_PUBLICATION[0].PUBLICATION_ELECTRONIQUE.DATE_PUBLICATION) | moment:&quot;L&quot;) "></span> - <a href="/pages/avis?q=idweb:'{{avis.REFERENCE.IDWEB}}'" title="Voir l'avis n° {{avis.REFERENCE.IDWEB}}"> <span ng-bind="'Référence : ' + avis.REFERENCE.IDWEB"></span> </a><br />
                                            </span>
                        </div>

                    </div>

                    <hr />

                    <!-- BOUTONS D'ACCES A L'ANNONCE -->
                    <div>
                        <div>

                            <!-- bouton pour HTML -->
                            <div
                                    ng-if="(item.fields.dateparution | moment:'YYYY' ) >= 2020 ">
                                <button
                                        ng-click="boamp.hideShowHTML=!boamp.hideShowHTML">
                                    {{!boamp.hideShowHTML ? "Voir l'annonce" : "Cacher le contenu de l'annonce" }}
                                </button>
                            </div>

                            <!-- bouton pour preview PDF iframe -->
                            <div
                                    ng-if="(item.fields.dateparution | moment:'YYYY' ) < 2020 ">
                                <button
                                        ng-click="boamp.hideShowIframePDF=!boamp.hideShowIframePDF">
                                    {{!boamp.hideShowIframePDF ? "Voir l'annonce" : "Cacher le contenu de l'annonce" }}
                                </button>
                            </div>

                            <div>
                                <a href="https://www.boamp.fr/telechargements/PDF/{{ item.fields.dateparution | moment:'YYYY'}}/{{item.fields.filename}}/{{item.fields.idweb}}.pdf">Obtenir un extrait de l’avis</a>
                                <!--<a href="https://fr.ftp.opendatasoft.com/datadila/BOAMP/PDF/{{ item.fields.dateparution | moment:'YYYY'}}/{{item.fields.filename}}/{{item.fields.idweb}}.pdf">Obtenir un extrait de l’avis</a>-->
                            </div>
                        </div>
                    </div>

                    <br />

                    <!-- HTML de l'annonce -->
                    <div ng-show="boamp.hideShowHTML" id="avis_HTML">
                        <ods-result-enumerator
                                context="boamphtml"
                                max="1"
                                show-hits-counter="false"
                                show-pagination="false">
                            <div>
                                <div ng-bind-html="item.fields.html"></div>
                            </div>

                        </ods-result-enumerator>
                    </div>

                    <!-- IFRAME -->

                    <div ng-if="boamp.hideShowIframePDF" id="avis_pdf"
                         ng-init="src_pdf = 'https://fr.ftp.opendatasoft.com/datadila/BOAMP/PDF/'+(item.fields.dateparution | moment:'YYYY')+'/'+item.fields.filename+'/'+item.fields.idweb+'.pdf?#toolbar=0&view=FitH'">

                        <iframe ods-iframe-src="{{ src_pdf }}" width="100%" height="1000px"></iframe>

                    </div>

                </div>

            </div>

        </div>

    </div>

</ods-dataset-context>
