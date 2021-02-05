/* Unrefined state
========================================================================== */
.unrefined .header {
    text-align: center;
}
.unrefined .title {
    font-size: 1.5rem;
    color: #071a70;
    font-weight: normal;
    margin-top: 17px !important;
    margin-bottom: 10px;
}
.unrefined .subtitle {
    font-size: 1rem;
    margin: 4px 0;
    text-transform: uppercase;
    font-weight: normal;
    border-radius: 4px;
    margin: 0;
    display: inline-block;
}


/* Button Go Back
========================================================================== */
.button-go-back {
    font-size: 1.2rem;
    color: var(--text);
    padding: .5rem 1rem;
    border-radius: .4rem;
    border-width: 1px;
    margin: 0 0 2rem 0;
    display: inline-block;
    text-decoration: none;
    transition: all .2s;
    background-color: #D9F1FF; /* Button background color */
}
.button-go-back:hover {
    text-decoration: none;
    background-color: #A6DEFF; /* Button background color on mouse hover */
}
.button-go-back-icon {
    margin-right: .4rem;
    position: relative;
    left: 0;
    transition: all .3s;
}
.button-go-back:hover .button-go-back-icon {
    left: -.3rem;
}




/* Side detail as an exemple, you should remove this part and do you own
========================================================================== */
.pop-in-header {
    margin-bottom: 20px;
}
.pop-in-photo-container {
    position: relative;
    height: 100px;
    width: 100px;
    background-color: rgba(218, 218, 218, .2);
    border-radius: 50%;
    display: flex;
    align-items: center;
    justify-content: center;
    margin-left: auto;
}
.pop-in-photo {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    margin: auto;
    height: 100px;
    width: auto;
    max-width: 100px;
    border-radius: 50%;
}
.pop-in-title {
    font-size: 1.5rem;
    color: #071a70;
    font-weight: normal;
    margin-top: 17px !important;
    margin-bottom: 10px;
}
.pop-in-subtitle {
    font-size: 1rem;
    margin: 4px 0;
    text-transform: uppercase;
    font-weight: normal;
    border-radius: 4px;
    margin: 0;
    display: inline-block;
}
.pop-in-list {
    margin-top: 0;
    margin-bottom: 0;
}
.pop-in-list dt {
    color: #6f6f6f;
}
@media screen and (min-width: 767px) {
    .pop-in-list dt {
        text-align: right;
    }
}
.pop-in-list dd {
    margin: 0;
}
