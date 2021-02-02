.map {
    position: relative;
}

.map .refine {
    z-index: 20;
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    display: flex;
    justify-content: center;
    align-items: center;
    flex-direction: column;
}

.map .refine .refine-close:hover {
    opacity: 0.65;
}

.map .backdrop {
    z-index: 19;
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    background-color: rgba(0, 0, 0, 0.7);
}




/* Pop-in
========================================================================== */
.ods-pop-in__backdrop {
    position: absolute;
    top: 0;
    bottom: 0;
    left: 0;
    right: 0;
    background-color: transparent;
    z-index: 101;
    cursor: auto;
}
.pop-in-clear-button {
    font-size: 1.3em;
    color: #ababab;
    position: absolute;
    top: 15px;
    right: 15px;
    border: none;
    background: none;
    z-index: 1;
}
.pop-in-clear-button:hover {
    color: #09357a;
}
.pop-in-card {
    z-index: 102;
    height: auto;
    min-width: 300px;
    width: 700px;
    background-color: white; /* Background color of card */
    color: var(--text);
    padding: 26px;
    margin: 0 10px;
    border-radius: 4px;
    text-decoration: none;
    transition: all .2s;
    position: relative;
    display: flex;
    flex-direction: column;
}
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
