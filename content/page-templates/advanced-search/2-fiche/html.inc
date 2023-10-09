<ods-dataset-context context="boamp"
                     boamp-dataset="boamp"
                     boamp-domain="boamp-datadila"
                     boamp-urlsync="true"
                     ng-init="values = {}">

    <div ods-results="items"
         ods-results-context="boamp"
         ods-results-max="1"
         ng-repeat="(i,item) in items"
         ng-init="avis_donnees = (item.fields.donnees | fromjson);">

        <h2 ng-bind="'Avis n° ' + item.fields.idweb">
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

        <ul>
            <li ng-if="avis_donnees.IDENTITE.DENOMINATION">
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

            <li ng-if="avis_donnees.IDENTITE.URL">
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
                <span ng-bind="avis_donnees.OBJET.DELEGATION.DATE_DEBUT | moment: 'LL'"></span>
            </li>

            <li ng-if="avis_donnees.OBJET.CARACTERISTIQUES.PRINCIPALES">
                <span>Caractéristiques principales :</span><br />
                <span ng-bind-html="avis_donnees.OBJET.CARACTERISTIQUES.PRINCIPALES"></span>
            </li>

            <li ng-if="avis_donnees.OBJET.CARACTERISTIQUES.QUANTITE">
                <span>Quantité ou étendue :</span><br />
                <span ng-bind-html="avis_donnees.OBJET.CARACTERISTIQUES.QUANTITE"></span>
            </li>

            <li ng-if="avis_donnees.CONDITION_PARTICIPATION.CRITERE_SELECTION">
                <span>Conditions de participations :</span><br />
                <span ng-bind-html="avis_donnees.CONDITION_PARTICIPATION.CRITERE_SELECTION"></span>
            </li>
        </ul>
    </div>
</ods-dataset-context>
