#ifndef CIRCLE_H
#define CIRCLE_H

#include <SFML/Graphics.hpp>

class Circle {
public:
    Circle(float x, float y);

    void draw(sf::RenderWindow& window);

private:
    static constexpr float radius = 20.0f; // Constant radius for all circles
    static const sf::Color color;          // Constant color for all circles
    sf::CircleShape shape;
};

#endif // CIRCLE_H
