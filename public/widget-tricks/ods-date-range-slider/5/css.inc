.range-slider-ctn {
    display: flex;
    flex-direction: column;
    align-items: center;
    margin: 13px 26px 32px 26px;
}

.odswidget-date-range-slider {
    width: 100%;
}

.range-slider-reset-button {
    margin-left: 0;
    margin-top: 13px;
    white-space: nowrap;
    font-size: 12px;
    padding: 3px 6px;
    line-height: 0;
    background-color: #e1e4e9;
    border-radius: 4px;
}

.range-slider-reset-button:not(.range-slider-reset-button-disabled):hover {
    opacity: 0.65;
}

.range-slider-reset-button-disabled {
    opacity: 0.5;
    pointer-event: none;
    text-decoration: none;
}

@media screen and (min-width: 500px) {
    .range-slider-ctn {
        flex-direction: row;
    }

    .range-slider-reset-button {
        margin-left: 50px;
        margin-top: 0;
    }
}