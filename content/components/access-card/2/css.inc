:root {
    --secondary-color: #142E7B;
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
    padding: 10px 0px;
}

.access-card-top {
    padding: 20px;
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
    background-image: url("https://userclub.opendatasoft.com/assets/theme_image/access-cards.jpg");
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    height: 240px;
}

.access-card-description {
    padding: 20px;
}

.access-card-description p {
    margin: 5px 0px;
}

.access-card-button {
    color: var(--secondary-color);
    transition: all 0.3s;
    font-size: 14px;
    font-weight: 700;
    padding: 0px 20px 20px 20px;
}

.access-card-button i {
    padding-left: 5px;
}

.access-card-bg:hover .access-card-button {
    transform: translateX(5px);
  }