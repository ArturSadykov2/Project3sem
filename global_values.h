#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


int size_hight = 1392;
int size_width = 783;
float scale_x = size_hight / 1024.0;
float scale_y = size_width / 576.0;

sf::Vector2f size(size_hight, size_width);

sf::Vector2f coord_of_start[] = { sf::Vector2f(90, 80), sf::Vector2f(100, 80), sf::Vector2f(1250, 75), sf::Vector2f(100, 360) };
sf::Vector2f coord_of_finish[] = { sf::Vector2f(1200, 630), sf::Vector2f(1050, 650), sf::Vector2f(970, 420), sf::Vector2f(1200, 360) };

sf::SoundBuffer vile_jewish_sound_buffer;
sf::SoundBuffer rolling_sound_buffer;
sf::SoundBuffer bounce_sound_buffer;

sf::Vector2f size_ball(50 * scale_x, 50 * scale_x);
float cursor_size = 100 * scale_x;
float finish_hight = 50 * scale_x;
float finish_width = 100 * scale_x;
sf::Vector2f disk_size(450 * scale_x, 450 * scale_x);