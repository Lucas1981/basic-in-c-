#include "Clock.h"

Clock::Clock() {
    clock.restart();
}

void Clock::reset() {
    clock.restart();
}

float Clock::getElapsedTime() const {
    return clock.getElapsedTime().asSeconds();
}
