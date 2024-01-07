#ifndef CLOCK_H
#define CLOCK_H

#include <SFML/System.hpp>

class Clock {
public:
    Clock();

    void reset();
    float getElapsedTime() const;

private:
    sf::Clock clock;
};

#endif // CLOCK_H
