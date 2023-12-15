#include <iostream>
#include "Wall.h"

void show_level() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    Wall wall;
    wall.init();

    sf::Texture lv_surface_texture;
    sf::Texture lv_traps_texture;
    sf::Texture bg_surface_texture;
    sf::Texture ball_texture;
    sf::Texture finish_texture;
    sf::Texture lv_dark_texture;
    lv_surface_texture.loadFromFile("lv_surface.png");
    lv_traps_texture.loadFromFile("lv_traps.png");
    bg_surface_texture.loadFromFile("bg_surface.png");
    ball_texture.loadFromFile("ball.png");
    finish_texture.loadFromFile("finish.png");
    lv_dark_texture.loadFromFile("lv_dark.png");

    sf::Sprite lv_surface(lv_surface_texture);
    sf::Sprite lv_traps(lv_traps_texture);
    sf::Sprite bg_surface(bg_surface_texture);
    sf::Sprite ball(ball_texture);
    sf::Sprite finish(finish_texture);
    sf::Sprite lv_dark(lv_dark_texture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        draw_level(window, lv_surface, lv_traps, bg_surface, ball, finish, 0, 0, lv_dark, wall);
        draw_ball(window, ball, ball);
        window.display();
    }

}
