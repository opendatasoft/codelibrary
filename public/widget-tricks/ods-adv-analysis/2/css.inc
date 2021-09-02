/* Elements */
section.row {
    padding: 13px;
    margin-bottom: 64px;
}
.title {
    font-weight: 700;
    margin-bottom: 1em;
}

.subtitle {
    font-weight: 400;
    margin-top: -1em;
}

.title .subtitle {
    justify-self: flex-start;
}

.title.is-1 {
    font-size: 2.3125rem;
}

.title.is-2,
.subtitle.is-2 {
    font-size:  1.4375rem;
}

.title.is-3,
.subtitle.is-3 {
    font-size: 1.25rem;
}

/* Components */
.card {
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: space-between;
    min-width: 200px;
    height: 100%;
    padding: 13px;
    border-radius: 6px;
    border: 1px solid #CBD2DB;
}

.card-head,
.card-footer {
    flex: 0 1 48px;
}

.card-body {
    flex-grow: 1;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    width: 100%;
}
