/* Flat style
=============================================================================*/
.flat-button {
    font-size: 1rem;
    color: var(--links);
    border: 1px solid var(--links);
    border-radius: 2rem;
    background: #FFF;
    padding: .37rem 1rem;
    margin-right: 6px;
}
.flat-button:hover{
   background-color: var(--links);
   color: #FFF;
}

.flat-button-active {
   background-color: var(--links);
   color: #FFF;
}


/* Press style
=============================================================================*/
.press-button {
    font-size: 1rem;
    color: var(--links);
    border: 1px solid var(--links);
    border-radius: 2rem;
    background: #FFF;
    padding: .37rem 1rem;
    border-bottom-width: 5px;
} 

.press-button-active{
    margin-top: 1px;
     border-bottom-width: 3px;
}

/* Shadow style
=============================================================================*/
.shadow-button {
    font-size: 1rem;
    background: rgb(0,136,204);
    background: linear-gradient(0deg, rgba(0,136,204,1) 0%, rgba(6,168,249,1) 100%);
    color: #FFF;
        border: 1px solid var(--links);
    border-radius: 2rem;
    padding: .37rem 1rem;
} 

.shadow-button-active{
    background-color: rgba(0,136,204,1);
    box-shadow: -1px 2px 10px 3px 
rgba(0, 0, 0, 0.3) inset;
}
}




