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
    margin: 0px 0px 20px 0px;
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
