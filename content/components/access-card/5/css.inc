:root {
    --secondary-color: #142e7b;
}

.access-card {
    border-radius: 10px;
    background-color: var(--boxes-background);
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.13);
    transition: all 0.3s;
    position: relative;
    height: 100%;
    color: var(--text);
    display: block;
}

.access-card:hover {
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.5);
    text-decoration: none;
}

.access-card-top {
    padding: 26px;
}

.access-card-pretitle {
    text-transform: uppercase;
    color: var(--secondary-color);
    opacity: 0.7;
    font-weight: 400;
    margin: 0px;
    font-size: 12px;
}

.access-card-title {
    font-weight: 400;
    margin: 10px 0px;
    font-size: 22px;
}

.access-card-subtitle {
    font-size: 16px;
    font-weight: 400;
    margin: 0px;
}

.access-card-img {
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    height: 250px;
}

.access-card-button {
    color: var(--secondary-color);
    font-size: 14px;
    font-weight: 700;
    display: flex;
    justify-content: left;
    align-items: center;
    width: 100%;
    padding: 26px 26px 26px;
}

.access-card-button i {
    padding-left: 5px;
    transition: all 0.3s;
}

.access-card:hover .access-card-button i {
    transform: translateX(5px);
}
