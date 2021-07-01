<h2>
    A pop-in window should be displaying after a short delay
</h2>

<em>
Note: Ods-pop-in will be displayed only once at each browsing session of the user
</em>

<ods-pop-in name="mypopindisco"
            title=""
            display-after="3"
            display-only-once="false">
    <h2>
        Welcome! <i class="fa fa-bell-o" aria-hidden="true"></i>
    </h2>
    <p>
        This is a pop-in sample
    </p>
    <button class="ods-button" 
            ng-click="hidePopIn()">
        Close
    </button>
</ods-pop-in>
      