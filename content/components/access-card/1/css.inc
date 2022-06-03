:root {
    --secondary-color: #142e7b;
}

.access-card-bg {
    background-repeat: no-repeat;
    background-size: cover;
    border-radius: 6px;
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.13);
    transition: all 0.3s;
    color: var(--text);
    display: flex;
    height: 100%;
    justify-content: center;
    padding-bottom: 15px;
    margin-bottom: 20px;
}

.access-card-bg:hover {
    box-shadow: 0px 8px 15px rgba(0, 0, 0, 0.5);
    text-decoration: none;
}

.access-card {
    border-radius: 10px;
    background-color: #fff;
    margin-top: 200px;
    padding: 26px;
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

.access-card-button {
    color: var(--secondary-color);
    font-size: 16px;
    font-weight: 700;
    display: flex;
    justify-content: right;
    align-items: center;
    width: 100%;
    padding: 26px 0px 0px 26px;
}

.access-card-button i {
    padding-left: 5px;
    transition: all 0.3s;
}

.access-card:hover .access-card-button i {
    transform: translateX(5px);
}
