<section class="container datastory-header">
    <h1 class="datastory-title">
        Data story title
    </h1>
    <h2 class="datastory-tagline">
        Proinde concepta rabie saeviore, quam desperatio incendebat et fames, 
        amplificatis viribus ardore incohibili in excidium urbium matris Seleuciae efferebantur, 
        quam comes tuebatur Castricius tresque legiones bellicis sudoribus induratae.
    </h2>
    <h3 class="datastory-intro">
        Ex his quidam aeternitati se commendari posse per statuas aestimantes eas 
        ardenter adfectant quasi plus praemii de figmentis aereis sensu carentibus adepturi, 
        quam ex conscientia honeste recteque factorum, easque auro curant inbracteari, 
        quod Acilio Glabrioni delatum est primo, cum consiliis armisque regem superasset Antiochum. 
        quam autem sit pulchrum exigua haec spernentem et minima ad ascensus verae gloriae tendere longos et arduos, 
        ut memorat vates Ascraeus, Censorius Cato monstravit. qui interrogatus quam ob rem inter multos... 
        statuam non haberet malo inquit ambigere bonos quam ob rem id non meruerim, quam quod est gravius cur inpetraverim mussitare.
    </h3>
</section>

<section class="container datastory-body">
    <h2 class="datastory-subtitle">
        A block
    </h2>
    <p class="datastory-text">
        Adolescebat autem obstinatum propositum erga haec et similia multa scrutanda, 
        stimulos admovente regina, quae abrupte mariti fortunas trudebat in exitium praeceps, 
        cum eum potius lenitate feminea ad veritatis humanitatisque viam reducere utilia suadendo deberet, 
        ut in Gordianorum actibus factitasse Maximini truculenti illius imperatoris rettulimus coniugem.
    </p>

    <h2 class="datastory-subtitle">
        A block with list
    </h2>
    <p class="datastory-text">
        Nemo quaeso miretur, si post exsudatos labores itinerum longos congestosque 
        adfatim commeatus fiducia vestri ductante barbaricos pagos adventans velut mutato 
        repente consilio ad placidiora deverti.
    </p>
    <ul class="datastory-text">
        <li>
            Nemo quaeso miretur, si post exsudatos labores itinerum longos congestosque.
        </li>
        <li>
            adfatim commeatus fiducia vestri ductante barbaricos pagos adventans velut 
            mutato repente consilio ad placidiora deverti.
        </li>
    </ul>

    <h2 class="datastory-body">
        A block with a graph and an image
    </h2>
    <ods-dataset-context context="prixdescarburantsj7" 
                         prixdescarburantsj7-domain="public"
                         prixdescarburantsj7-dataset="prix_des_carburants_j_7" 
                         prixdescarburantsj7-parameters="{'sort':'update'}">
        <ods-chart single-y-axis="true" 
                align-month="true">
            <ods-chart-query context="prixdescarburantsj7" 
                            field-x="update" 
                            maxpoints="50" 
                            timescale="month">
                <ods-chart-serie expression-y="price_gazole" 
                                chart-type="arearange" 
                                function-y="COUNT" 
                                color="#FF515A" 
                                scientific-display="true" 
                                subseries='[{"func":"MIN","yAxis":"price_gazole"},{"func":"MAX","yAxis":"price_gazole"}]'>
                </ods-chart-serie>
                <ods-chart-serie expression-y="price_sp95" 
                                chart-type="arearange" 
                                function-y="COUNT" 
                                color="#1B6698" 
                                scientific-display="true" 
                                subseries='[{"func":"MIN","yAxis":"price_sp95"},{"func":"MAX","yAxis":"price_sp95"}]'>
                </ods-chart-serie>
                <ods-chart-serie expression-y="price_sp98" 
                                chart-type="arearange" 
                                function-y="COUNT" 
                                color="#FCD23B" 
                                scientific-display="true" 
                                subseries='[{"func":"MIN","yAxis":"price_sp98"},{"func":"MAX","yAxis":"price_sp98"}]'>
                </ods-chart-serie>
            </ods-chart-query>
        </ods-chart>
    </ods-dataset-context>

    <p class="datastory-text">
        Adolescebat autem obstinatum propositum erga haec et similia multa scrutanda, 
        stimulos admovente regina, quae abrupte mariti fortunas trudebat in exitium praeceps, 
        cum eum potius lenitate feminea ad veritatis humanitatisque viam reducere utilia suadendo deberet, 
        ut in Gordianorum actibus factitasse Maximini truculenti illius imperatoris rettulimus coniugem.
    </p>
    <p class="datastory-text">
        <a href="#">Lorem ipsum !</a>
    </p>
    <img src="/img/datastory-image.png" 
         class="datastory-image">
</section>