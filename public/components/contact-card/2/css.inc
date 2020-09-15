/* Contact Card (Basic card)
========================================================================== */
.contact-card {
    height: 100%;
    background-color: var(--boxes-background);
    color: var(--text);
    text-align: center;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    padding: 26px;
    border: 1px solid var(--boxes-border);
    border-bottom-width: 3px;
    border-bottom-color: transparent;
    box-shadow: 0 1px var(--highlight);
    border-radius: 4px;
    min-height: 390px;
    text-decoration: none;
    transition: all .2s;
    position: relative;
}
.contact-card:hover {
    border-color: var(--highlight);
}
.contact-card-header {
    position: relative;
    height: 140px;
    width: 140px;
    background-color: rgba(218, 218, 218, .2);
    border-radius: 50%;
    display: flex;
    align-items: center;
    justify-content: center;
}
.contact-card-photo {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    margin: auto;
    height: 140px;
    width: auto;
    max-width: 140px;
    border-radius: 50%;
}
.contact-card-tag {
    font-size: .9rem;
    padding: 4px;
    text-transform: uppercase;
    font-weight: normal;
    border-radius: 4px;
    position: absolute;
    bottom: -10px;
    color: #4f9e30;
    background-color: #d2e6cc;
}
.contact-card-title {
    font-size: 1.5rem;
    color: var(--titles);
    font-weight: normal;
    margin-top: 13px;
    margin-bottom: 6px;
    max-width: 100%;
}
.contact-card-post {
    color: #6f6f6f;
    font-size: 1em;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 0;
    max-width: 100%;
}
.contact-card-description {
    font-size: 1rem;
    line-height: 1.5;
    font-weight: normal;
    padding-top: 13px;
    margin-top: 26px;
    margin-bottom: 0;
    border-top: 1px solid #dadada;
    color: var(--text);
    max-width: 100%;
}
.color-card-pop-in-button {
    position: absolute;
    top: 13px;
    right: 13px;
    color: #071a70;
    border-radius: 4px;
    border: 1px solid #071a70;
    padding: 4px 8px;
    font-size: .9rem;
    text-decoration: none;
    transition: all .2s;
}
.color-card-pop-in-button:hover {
    background-color: #071a70;
    color: #FFFFFF;
    text-decoration: none;
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
