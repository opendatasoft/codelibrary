<div class="row">
    <div class="col-xs-4">
        <h2>
            Flat style {{ flatbutton.active ? 'On' : 'Off' }}
        </h2>
        <button ng-click="flatbutton.active = !flatbutton.active"
                ng-class="{'flat-button-active': flatbutton.active == true}" class="flat-button"
                aria-expanded="{{ flatbutton.active == true }}">
            Click me
        </button>
    </div>

    <div class="col-xs-4">
        <h2>
            Press style {{ pressbutton.active ? 'On' : 'Off' }}
        </h2>
        <button ng-click="pressbutton.active = !pressbutton.active"
                ng-class="{'press-button-active': pressbutton.active == true}" class="press-button"
                aria-expanded="{{ pressbutton.active == true }}">
            Click me
        </button>
    </div>

    <div class="col-xs-4">
        <h2>
            Gradient and shadow style {{ shadowbutton.active ? 'On' : 'Off' }}
        </h2>
        <button ng-click="shadowbutton.active = !shadowbutton.active"
                ng-class="{'shadow-button-active': shadowbutton.active == true}" class="shadow-button"
                aria-expanded="{{ shadowbutton.active == true }}">
            Click me
        </button>
    </div>
</div>