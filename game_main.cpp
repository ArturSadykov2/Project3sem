#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "game_objects/game_menu.hpp"
#include "game_levels/game_level_1.hpp"
#include "game_levels/game_level_2.hpp"
#include "game_levels/game_level_3.hpp"
#include "game_levels/game_level_4.hpp"
#include "game_colors.hpp"
#include "game_texture.hpp"

int main()
{
    sf::Music vile_jewish_sound;
    if (!vile_jewish_sound.openFromFile("audio/vile_jewish_sound.ogg"))
    {
        std::cout << "Error loading audio file" << std::endl;
    }
    vile_jewish_sound.setLoop(true);
    vile_jewish_sound.setVolume(50);

    sf::Music rolling_sound;
    if (!rolling_sound.openFromFile("audio/rolling_sound.ogg"))
    {
        std::cout << "Error loading audio file" << std::endl;
    }
    rolling_sound.setLoop(true);
    rolling_sound.setVolume(50);
    rolling_sound.pause();

    sf::RenderWindow screen(sf::VideoMode(size[0], size[1]), "SFML window");
    screen.setFramerateLimit(FPS);

    Menu menu(screen);
    Cursor cursor(screen);

    bool running = true;
    sf::Mouse::setPosition(sf::Vector2i(screen.getSize().x / 2, screen.getSize().y / 2), screen);
    sf::Mouse::setCursorVisible(false);

    while (running)
    {
        screen.clear(WHITE);

        sf::Event event;
        while (screen.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                running = false;
                break;
            case sf::Event::MouseButtonPressed:
                cursor.click = true;
                if (menu.home_surface)
                {
                    menu.check_on(event);
                }
                else if (menu.start_of_set)
                {
                    menu.check_on_settings(event);
                }
                else if (menu.intermediate_menu || menu.pause_menu)
                {
                    menu.check_on_game_windows(event);
                }
                break;
            case sf::Event::MouseButtonReleased:
                cursor.click = false;
                if (menu.home_surface)
                {
                    menu.check_off();
                }
                else if (menu.start_of_set)
                {
                    menu.check_off_settings();
                }
                else if (menu.intermediate_menu || menu.pause_menu)
                {
                    menu.check_off_game_windows();
                }
                break;
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Space && menu.pause_menu)
                {
                    menu.continuee = true;
                }
                break;
            case sf::Event::KeyReleased:
                if (event.key.code == sf::Keyboard::Space && menu.pause_menu && menu.continuee)
                {
                    menu.continuee = false;
                    menu.pause_menu = 0;
                    menu.menu_live = 0;
                }
                break;
            case sf::Event::MouseMoved:
                cursor.cursor_change_pos(event);
                break;
            default:
                break;
            }
        }

        if (menu.menu_live)
        {
            vile_jewish_sound.play();
            rolling_sound.pause();
            menu.screen_draw();
            menu.draw_bottons();
            menu.draw_bottons_balls(red_ball_surface, grey_ball_surface, disco_ball_surface, dark_ball_surface, striped_ball_surface, magma_ball_surface);
        }
        else if (menu.level_1)
        {
            vile_jewish_sound.pause();
            level_1(screen.getSize(), balls_surfaces[menu.ball_index - 1], menu, rolling_sound);
            vile_jewish_sound.play();
            rolling_sound.pause();
        }
        else if (menu.level_2)
        {
            vile_jewish_sound.pause();
            level_2(screen.getSize(), balls_surfaces[menu.ball_index - 1], menu, balls_surfaces, rolling_sound);
            vile_jewish_sound.play();
            rolling_sound.pause();
        }
        else if (menu.level_3)
        {
            vile_jewish_sound.pause();
            level_3(screen.getSize(), balls_surfaces[menu.ball_index - 1], menu, balls_surfaces, rolling_sound);
            vile_jewish_sound.play();
            rolling_sound.pause();
        }
        else if (menu.level_4)
        {
            vile_jewish_sound.pause();
            level_4(screen.getSize(), balls_surfaces[menu.ball_index - 1], menu, balls_surfaces, rolling_sound);
            vile_jewish_sound.play();
            rolling_sound.pause();
        }

        if (menu.menu_live)
        {
            cursor.draw_cursor(cursor_up_texture);
        }
        else
        {
            cursor.draw_cursor(cursor_down_texture);
        }

        screen.display();
    }

    return 0;