#include "Graphics.h"
#include "../Input/Input.h"

Graphics::Graphics(int width, int height) : window(sf::VideoMode(width, height), "SFML Window"), square(sf::Vector2f(100, 100)) {
    square.setFillColor(sf::Color::Red);
    square.setPosition((width - 100) / 2, (height - 100) / 2); // Center the square in the window
}

Graphics::~Graphics() {
    cleanup();
}

void Graphics::init() {
    // Any initialization code for graphics (if needed)
}

void Graphics::clear() {
    window.clear();
}

void Graphics::display() {
    window.display();
}

void Graphics::render(int x, int y) {
    square.setPosition(x - square.getSize().x / 2, y - square.getSize().y / 2);
    window.draw(square);
}

void Graphics::cleanup() {
    window.close();
}

bool Graphics::isWindowOpen() const {
    return window.isOpen();
}

void Graphics::handleEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

sf::RenderWindow& Graphics::getWindow() {
    return window;
}

void Graphics::handleEvents(Input& input) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }

        input.update(event); // Update the input class with each event
    }
}