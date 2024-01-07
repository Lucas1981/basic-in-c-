#ifndef INPUT_H
#define INPUT_H

#include <SFML/Window.hpp>

class Input {
public:
    void update(sf::Event event);

    bool isKeyPressed(sf::Keyboard::Key key) const;

private:
    bool keyState[sf::Keyboard::KeyCount] = {false};
};

#endif // INPUT_H
