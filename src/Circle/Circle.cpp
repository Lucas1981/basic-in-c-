#include "Circle.h"

// Initialize the static color member
const sf::Color Circle::color = sf::Color::Green;

Circle::Circle(float x, float y) : shape(radius) {
    shape.setFillColor(color);
    shape.setPosition(x, y);
}

void Circle::draw(sf::RenderWindow& window) {
    window.draw(shape);
}
