#pragma once
#include <SFML/Graphics.hpp>
class Wall {
public:
	int x, y;
	void init() {
		x = 0;
		y = 0;
	}
};

void draw_level(sf::RenderWindow& screen, sf::Sprite& lv_surface, sf::Sprite& lv_traps, sf::Sprite& bg_surface,
	sf::Sprite& ball, sf::Sprite& finish, int x_finish, int y_finish, sf::Sprite& lv_dark, Wall& wall) {
	if (wall.x < int(ball.getScale().x * 30)) {
		wall.x += 1;
	}
	if (wall.x > int(ball.getScale().x * 30)) {
		wall.x -= 1;
	}
	if (wall.y < int(ball.getScale().y * 30)) {
		wall.y += 1;
	}
	if (wall.y > int(ball.getScale().y * 30)) {
		wall.y -= 1;
	}
	bg_surface.setPosition(0 - wall.x, 0 - wall.y);
	int ax = wall.x;
	int ay = wall.y;
    if (ax != 0 && ay == 0) {
        while (ax != 0) {
            lv_dark.setPosition(-ax, 0);
            screen.draw(lv_dark);
            if (ax <= 0) {
                ax += 1;
            }
            else {
                ax -= 1;
            }
        }
    }
    else if (ax == 0 && ay != 0) {
        while (ay != 0) {
            lv_dark.setPosition(0, -ay);
            screen.draw(lv_dark);
            if (ay <= 0) {
                ay += 1;
            }
            else {
                ay -= 1;
            }
        }
    }
    else if (ax != 0 && ay != 0) {
        while (ax != 0) {
            lv_dark.setPosition(-ax, -ay);
            screen.draw(lv_dark);
            if (ax <= 0) {
                ax += 1;
            }
            else {
                ax -= 1;
            }
            if (ay <= 0) {
                ay += 1;
            }
            else {
                ay -= 1;
            }
        }
    }
    lv_traps.setPosition(0 - wall.x, 0 - wall.y);
    lv_surface.setPosition(0, 0);
    finish.setPosition(x_finish, y_finish);
    screen.draw(bg_surface);
    screen.draw(lv_traps);
    screen.draw(lv_surface);
    screen.draw(finish);
}

void draw_ball(sf::RenderWindow& screen, sf::Sprite& ball_surface, sf::Sprite& ball) {
    screen.draw(ball_surface);
}

void show_level();