<div class="container row">
    <div class="col-md-3">
        <div class="contact-card">
            <a ng-click="pop.state = true;"
               class="color-card-pop-in-button">
                More info
            </a>
            <div class="contact-card-header">
                <img class="contact-card-photo"
                     src="https://discovery.opendatasoft.com/assets/theme_image/contact-card-avatar-man.png">
                <div class="contact-card-tag">
                    WEB
                </div>
            </div>
            <h2 class="contact-card-title">
                Jean Dubois
            </h2>
            <h3 class="contact-card-post">
                Software developer
            </h3>
            <h4 class="contact-card-description">
                Paris - France
                <br>
                01.23.45.67.89
                <br>
                mail@mail.com
            </h4>
        </div>
    </div>
</div>
<!-- Pop-in -->
<pop-in class="ods-pop-in"
        ng-if="pop.state">
    <div class="pop-in-card">
        <button class="pop-in-clear-button"
                ng-click="pop.state = close"
                aria-label="Close popup window">
            <i class="fa fa-times" aria-hidden="true"></i>
        </button>
        <div class="pop-in-header row">
            <div class="col-xs-4">
                <div class="pop-in-photo-container">
                    <img class="pop-in-photo"
                         src="https://nconstanzo.opendatasoft.com/assets/theme_image/user-profile-image.png">
                </div>
            </div>
            <div class="col-xs-8">
                <h2 class="pop-in-title">
                    Jean Dubois
                </h2>
                <h3 class="pop-in-subtitle">
                    Software Developer
                </h3>
            </div>
        </div>
        <dl class="row pop-in-list">
            <dt class="col-sm-4">Team</dt>
            <dd class="col-sm-8">Web</dd>
            <dt class="col-sm-4">Location</dt>
            <dd class="col-sm-8">Paris - France</dd>
            <dt class="col-sm-4">Phone</dt>
            <dd class="col-sm-8">01.23.45.67.89</dd>
            <dt class="col-sm-4">E-mail</dt>
            <dd class="col-sm-8">mail@mail.com</dd>
            <dt class="col-sm-4">LinkedIn</dt>
            <dd class="col-sm-8">
                <a href="#">Jean Dubois</a>
            </dd>
            <dt class="col-sm-4">Twitter</dt>
            <dd class="col-sm-8">
                <a href="#">@jeandubois</a>
            </dd>
            <dt class="col-sm-4">Facebook</dt>
            <dd class="col-sm-8">
                <a href="#">Jean Dubois</a>
            </dd>
        </dl>
    </div>
    <div class="ods-pop-in__backdrop" ng-click="pop.state = close"></div>
</pop-in>
<!-- End of Pop-in -->
