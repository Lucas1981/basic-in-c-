#include "Input.h"

void Input::update(sf::Event event) {
    if (event.type == sf::Event::KeyPressed) {
        keyState[event.key.code] = true;
    } else if (event.type == sf::Event::KeyReleased) {
        keyState[event.key.code] = false;
    }
}

bool Input::isKeyPressed(sf::Keyboard::Key key) const {
    return keyState[key];
}
