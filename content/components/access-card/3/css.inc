:root {
    --secondary-color: #142e7b;
}

.access-card-link {
    color: var(--text);
}

.access-card-link:hover {
    text-decoration: none;
}

.access-card {
    border-radius: 10px;
    background-color: #fff;
    height: 100%;
    background-color: var(--boxes-background);
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.13);
    transition: all 0.3s;
}

.access-card:hover {
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.5);
}

.access-card-img {
    background-image: url("https://userclub.opendatasoft.com/assets/theme_image/access-cards.jpg");
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    height: 250px;
    position: relative;
}

.access-card-content {
    padding: 26px;
}

.access-card-pretitle {
    text-transform: uppercase;
    color: #535C29;
    background-color: #DBE0C1;
    border-radius: 3px;
    font-weight: 400;
    margin: 0px;
    font-size: 12px;
    position: absolute;
    bottom: 15px;
    left: 26px;
    padding: 5px;
}

.access-card-title {
    font-weight: 400;
    margin: 10px 0px;
    font-size: 22px;
}

.access-card-subtitle {
    font-size: 16px;
    font-weight: 400;
    margin: 0px 0px 10px 0px;
}

.access-card-content p {
    margin: 5px 0px;
}

.access-card-button {
    display: flex;
    justify-content: center;
    margin-top: 20px;
}

.access-card-button:hover {
    opacity: 0.7;
}

.access-card-button-content {
    background-color: var(--secondary-color);
    text-align: center;
    color: #fff;
    border-radius: 24px;
    padding: 10px 20px;
    width: fit-content;
}
