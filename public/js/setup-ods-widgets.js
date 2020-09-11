var app = angular.module('ods-widgets', []);

app.factory("domainConfig", [function() {
    return {"explore.dataset_catalog_separate_languages": null,
        "explore.catalog.geonavigation": null,
        "explore.disable_analyze": null,
        "languages": ["en"],
        "explore.dataset_catalog_default_source_shared": null,
        "explore.enable_api_tab": true,
        "explore.reuse": null};
}]);

app.factory("config", [function() {
    return {
        DATASET_ID: '',
        LANGUAGE: 'en',
        AVAILABLE_LANGUAGES: ["en"],
        USER: 'frederic.passaniti',
        FQ_USERNAME: 'frederic.passaniti',
        BRAND_HOSTNAME: "opendatasoft.com",
        DEFAULT_BASEMAP: {"jawg_apikey": "4cKtE4Rze1HrvxWa9a7mdolSk10lVThTFC8zadQYMIMxTjkpTeIDJAAmhReDGnCH", "jawg_odsdomain": "userclub", "provider": "jawg.streets"},
        DOMAIN_ID: 'userclub',
        ANONYMOUS_ACCESS_ENABLED: 'true',
        FEEDBACK: true,
        RESOURCE_DOWNLOAD_CONDITIONS: false,
        PARENT_DOMAIN: true,
        MINUTE_LEVEL_SCHEDULING: false,
        CATALOG_SEARCH_BOOSTING_ENABLED: false,
        GEOREFERENCE: true,
        CSV_DELIMITER: ';',
        CENTRALSTORE: true,
        FORCE_DEBUG_LOGGER: false,
        RECAPTCHA_PUBLIC_KEY: '6LflroEUAAAAAH1LD8LksjNLDrYFfDp1_bf-D_RD',
        REQUEST_ID: '8651b4d2816a29cbb152a516e1f5abee'
    }
}]);