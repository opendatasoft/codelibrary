/* Progression / gauge */
.card {
    position: relative;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    border: 1px solid #dee5ef;
    border-radius: 4px;
    background-color: #f6f8fb;
    padding: 30px;
    text-align: center;
}
.jauge-container {
    background-color: white;
    border: 1px solid #707070;
    border-radius: 3px;
    position: relative;
}
.jauge {
    background-color: black;
    color: white;
    border: 2px solid white;
    border-radius: 3px;
    display: block;
}
/* column */
.column .jauge {
    height: 80px;
    width: 30px;
}
/* bar */
.bar .jauge-container {
    width: 100%;
    height: 30px;
}
.bar .jauge {
    height: 100%;
}
