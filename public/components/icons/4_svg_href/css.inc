.sea {
    display: flex;
    align-items: center;
    gap: 2px;
}

/* Transform */
.axial-symmetry-x {
    transform: scaleX(-1);
}

/* Animations */
.flutter {
    animation: flutter 5s infinite;
}
.delay1 {
    animation-delay: 1s;
}
.delay2 {
    animation-delay: 2s;
}
.delay3 {
    animation-delay: 3s;
}
.delay4 {
     animation-delay: 4s;
 }

@keyframes flutter {
    0% {
        transform: scaleX(1) rotate(0deg)
    }
    25% {
        transform: scaleX(0.9) rotate(5deg);
    }
    50% {
        transform: scaleX(0.8) rotate(-5deg)
    }
    75% {
        transform: scaleX(1.1) rotate(5deg)
    }
    100% {
        transform: scaleX(1) rotate(0deg)
    }
}

.flutter-fish {
    animation: flutter-fish 5s infinite;
}

@keyframes flutter-fish {
    0% {
        transform: rotate(0deg)
    }
    25% {
        transform: rotate(5deg);
    }
    50% {
        transform: rotate(-5deg)
    }
    75% {
        transform: rotate(5deg)
    }
    100% {
        transform: rotate(0deg)
    }
}