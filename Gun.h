#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <random>
#include "game_texture.h"

class Gun {
public:
    Gun(float x, float y, float angle, float v, const std::vector<sf::Texture>& balls_surfaces) {
        points = 0;
        this->x = x;
        this->y = y;
        vx = v * cos(angle);
        vy = v * sin(angle);
        this->angle = angle;
        surf.setTexture(balls_surfaces[rand() % 4 + 2]);
        mask = bullet_mask;
    }

    void draw(sf::RenderWindow& window) {
        surf.setPosition(x, y);
        window.draw(surf);
    }

    void move(float dt) {
        x += vx * dt;
        y += vy * dt;
    }

    std::pair<bool, bool> collusion(const sf::Image& wall_mask, const Ball& ball, float x, float y, const sf::Image& ball_mask, float dt) {
        bool overlap_wall = wall_mask.getPixel(x + vx * dt - 0, y + vy * dt - 0) != sf::Color::Transparent;
        bool overlap_ball = ball_mask.getPixel(x + vx * dt - ball.x - ball.vx, y + vy * dt - ball.y - ball.vy) != sf::Color::Transparent;
        bool kill_ball = false;
        bool kill = false;
        if (overlap_ball) {
            ball.x = x;
            ball.y = y;
            ball.vx = 0;
            ball.vy = 0;
            ball.ax = 0;
            ball.ay = 0;
            kill_ball = true;
        }
        if (overlap_wall) {
            kill = true;
        }
        return std::make_pair(kill, kill_ball);
    }

private:
    int points;
    float x, y, vx, vy, angle;
    sf::Sprite surf;
    sf::Image mask;
    ;

}