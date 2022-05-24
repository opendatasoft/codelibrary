:root {
    --secondary-color: #142e7b;
}
.access-card-link {
    color: var(--text);
}
.access-card-bg {
    background-image: url("https://userclub.opendatasoft.com/assets/theme_image/access-cards.jpg");
    background-repeat: no-repeat;
    background-size: cover;
    border-radius: 6px;
    position: relative;
    height: 550px;
}
.access-card {
    border-radius: 10px;
    background-color: #fff;
    margin: 0% 3%;
    position: absolute;
    bottom: 3%;
    padding: 20px 30px 40px 20px;
    width: 94%;
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
    margin: 0px 0px 10px 0px;
}
.access-card-description {
    background-color: var(--boxes-background);
    padding: 10px;
}
.access-card-description h4 {
    font-weight: 700;
    margin: 5px 0px 0px 0px;
}
.access-card-description p {
    margin: 5px 0px;
}
.access-card i {
    position: absolute;
    right: 10%;
    bottom: 1%;
    color: var(--secondary-color);
    transition: all 0.3s;
    font-size: 20px;
}
.access-card-bg:hover .access-card i {
    transform: translateX(5px);
}
