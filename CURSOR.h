#pragma once

#ifndef CURSOR_HPP
#define CURSOR_HPP

#include <SFML/Graphics.hpp>

class Cursor {
public:
    Cursor(sf::RenderWindow& window, float x = 0.f, float y = 0.f) : window(window), click(false), x(x), y(y) {}

    void cursorChangePos(const sf::Event& event);
    void drawCursor();

    bool isClick() const { return click; }
    void setClick(bool value) { click = value; }

private:
    sf::RenderWindow& window;
    bool click;
    float x, y;
};

#endif 