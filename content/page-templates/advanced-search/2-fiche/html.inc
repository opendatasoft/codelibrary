<ods-dataset-context context="boamp"
                     boamp-dataset="boamp"
                     boamp-domain="boamp-datadila"
                     boamp-urlsync="true"
                     ng-init="values = {}">

    <div ods-results="items"
         ods-results-context="boamp"
         ods-results-max="1"
         ng-repeat="(i,item) in items"
         ng-init="avis_gestion = (item.fields.gestion | fromjson);
                  avis_donnees = (item.fields.donnees | fromjson);
                  lots=avis_donnees.OBJET.LOTS">

        <h2 ng-bind="'Avis n° ' + item.fields.idweb">
            <span ng-bind="' Publié le ' + (item.fields.dateparution | moment:'LL')"></span>
            <p>
                        <span ng-if="avis_gestion.INDEXATION.DATE_LIMITE_REPONSE"
                              ng-init="arrayDT = avis_gestion.INDEXATION.DATE_LIMITE_REPONSE.split('T');
                                       arrayDate = arrayDT[0].split('-');

                                       year = arrayDate[0];
                                       month = arrayDate[1];
                                       day = arrayDate[2];
                                       time_str = arrayDT[1];

                                       date_str_FormatFr = arrayDate[2] + '/' + arrayDate[1] + '/' + arrayDate[0];
                                       time_display = time_str.substring(0,5).replace(':','h');">Date limite de réponse le {{date_str_FormatFr}} à {{time_display}}</span>
            </p>
        </h2>

        <ul>
            <li>
                <span>Objet : </span>
                <span ng-bind="item.fields.objet"></span>
            </li>
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
                <span ng-if="item.fields.sousnaturenature_libelle"> - <span ng-bind="item.fields.sousnature_libelle"></span></span>
                <span ng-if="item.fields.etat == 'RECTIFICATIF'"> - rectificatif </span>
                <span ng-if="item.fields.etat == 'ANNULATION'"> - annulation </span>
                <span ng-if="item.fields.etat == 'RECTIFANNUL'"> - rectificatif et annulation </span>
            </li>

            <li>
                <span>Procédure : </span>
                <span margin-left="5em" ng-bind="item.fields.procedure_libelle"></span>
            </li>

            <li>
                <span>Date de parution : </span>
                <span margin-left="5em" ng-bind="item.fields.dateparution | date"></span>
                <span> - date limite de réponse : </span>
                <span margin-left="5em" ng-bind="item.fields.datelimitereponse | date"></span>
            </li>
        </ul>

        <h3>
            L’essentiel du marché
        </h3>

        <!-- IDENTIFICATION -->
        <div ng-init="item.fields.famille == 'DSP' ? denominationlabel = 'Nom et adresse de l\'autorité délégante :' : denominationlabel = 'Nom et adresse officiels de l\'organisme acheteur :'">
        </div>

        <ul>
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
            </div>
        </ul>

        <h3>
            Informations pratiques
        </h3>

        <ul>
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
</ods-dataset-context>
