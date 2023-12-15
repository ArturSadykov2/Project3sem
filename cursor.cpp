#include "cursor.h"
#include "game_texture.h"

Cursor::Cursor(sf::RenderWindow& window, float x, float y) : window(window), click(false), x(x), y(y) {}

void Cursor::cursorChangePos(const sf::Event& event) {
    x = event.mouseMove.x;
    y = event.mouseMove.y;
}

void Cursor::drawCursor() {
    if (click) {
        window.draw(cursor_down_button_surface);
    }
    else {
        window.draw(cursor_up_button_surface);
    }
}