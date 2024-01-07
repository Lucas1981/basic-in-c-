#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>
#include "../Input/Input.h"

class Graphics {
public:
    Graphics(int width, int height);
    ~Graphics();

    void init();
    void clear();
    void display();
    void render(int x, int y);
    void cleanup();
    bool isWindowOpen() const;
    void handleEvents();
    sf::RenderWindow& getWindow();
    void handleEvents(Input& input); // Add Input reference parameter

private:
    sf::RenderWindow window;
    sf::RectangleShape square;
};

#endif // GRAPHICS_H
