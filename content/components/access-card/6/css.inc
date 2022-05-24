:root {
    --secondary-color: #142e7b;
    --custom-background: #e2e6ee;
}

.access-card {
    border-radius: 10px;
    height: 100%;
    min-height: 300px;
    background-color: var(--custom-background);
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.13);
    color: var(--secondary-color);
    transition: all 0.3s;
    display: block;
}

.access-card:hover {
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.5);
    text-decoration: none;
}

.access-card-img {
    background-image: url("https://userclub.opendatasoft.com/assets/theme_image/access-cards.jpg");
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    height: 250px;
    position: relative;
    border-radius: 10px 10px 0px 0px;
}

.access-card-content {
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
    color: var(--secondary-color);
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
    color: var(--secondary-color);
    font-size: 14px;
    font-weight: 700;
    display: flex;
    justify-content: left;
    align-items: center;
    width: 100%;
    padding: 0px 26px 26px 26px;
}

.access-card-button i {
    padding-left: 5px;
    transition: all 0.3s;
}

.access-card:hover .access-card-button i {
    transform: translateX(5px);
}
