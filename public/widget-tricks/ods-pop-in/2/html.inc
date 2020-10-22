<div ng-init="pop = {
        'state':false,
        'iframe':false
    }">
    <button class="ods-button"
         ng-click="pop.state = true">
        Pop it!
    </button>
    <button class="ods-button"
         ng-click="pop.iframe = true">
        Pop it with iframe inside
    </button>

    {{ pop }}
    <my-custom-pop-in class="ods-pop-in" 
                   ng-if="pop.state">
        <div class="ods-pop-in__container">
            <h2>
                Pop!
            </h2>
            <button class="ods-button" 
                    ng-click="pop.state = false">
                Close
            </button>
        </div>
        <div class="ods-pop-in__backdrop" ng-click="pop.state = false"></div>
    </my-custom-pop-in>

    <my-custom-pop-in class="ods-pop-in" 
                      ng-if="pop.iframe">
        <div class="ods-pop-in__container iframe-container">
            <iframe src="/" 
                    width="100%" 
                    height="80vh" />
        </div>
        <div class="ods-pop-in__backdrop" 
             ng-click="pop.iframe = false"></div>
    </my-custom-pop-in>
</div>
      