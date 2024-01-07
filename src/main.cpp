#include "Graphics/Graphics.h"
#include "Input/Input.h"
#include "Clock/Clock.h"
#include "Circle/Circle.h"
#include "CirclesLoader/CirclesLoader.h"
#include <vector>

int main() {
    int width = 800;
    int height = 600;
    Graphics graphics(width, height);
    Input input;
    Clock clock;

    float x = width / 2;
    float y = height / 2;
    const float speed = 150.0f; // Speed in pixels per second

    graphics.init();

    // Seed random number generator. We used this before the circles loader
    // std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::vector<Circle> circles = CirclesLoader::loadFromFile("./assets/circles.txt");

    while (graphics.isWindowOpen()) {
        sf::RenderWindow& window = graphics.getWindow();
        graphics.handleEvents(input);

        float deltaTime = clock.getElapsedTime();
        clock.reset();

        if (input.isKeyPressed(sf::Keyboard::Left)) {
            x -= speed * deltaTime;
        }
        if (input.isKeyPressed(sf::Keyboard::Right)) {
            x += speed * deltaTime;
        }
        if (input.isKeyPressed(sf::Keyboard::Up)) {
            y -= speed * deltaTime;
        }
        if (input.isKeyPressed(sf::Keyboard::Down)) {
            y += speed * deltaTime;
        }

        graphics.clear();

        // Draw each circle
        for (Circle& circle : circles) {
            circle.draw(window);
        }

        graphics.render(static_cast<int>(std::round(x)), static_cast<int>(std::round(y)));

        graphics.display();
    }

    return 0;
}
