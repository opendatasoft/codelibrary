<div ng-init="showDetails = false;">
    <button class="button-see-more"
            ng-click="showDetails = !showDetails">
        <span ng-show="showDetails == false">
            See more
            <i class="fa fa-long-arrow-down fa-fw" aria-hidden="true"></i>
        </span>
        <span ng-show="showDetails == true">
            See less
            <i class="fa fa-long-arrow-up fa-fw" aria-hidden="true"></i>
        </span>
    </button>
    <div ng-if="showDetails == true">
        I am content that wasn't visible before!
    </div>
</div>
