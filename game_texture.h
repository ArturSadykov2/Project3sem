#pragma once
#include <SFML/Graphics.hpp>
#include "global_values.h"
#include <iostream>

sf::Texture home_screen_png;
sf::Texture settings_screen_png;
sf::Texture intermediate_menu_png;
sf::Texture pause_menu_png;

sf::Texture texture_wood_png;
sf::Texture texture_wood_1_png;
sf::Texture texture_wood_2_png;

sf::Texture dark_ball_png;
sf::Texture disco_ball_png;
sf::Texture grey_ball_png;
sf::Texture red_ball_png;
sf::Texture striped_ball_png;
sf::Texture magma_ball_png;

sf::Texture go_png;
sf::Texture exit_png;
sf::Texture nextlvl_png;
sf::Texture settings_png;
sf::Texture go_back_png;
sf::Texture continue_png;

sf::Texture dark_down_png;
sf::Texture disco_down_png;
sf::Texture grey_down_png;
sf::Texture red_down_png;
sf::Texture striped_down_png;
sf::Texture magma_down_png;

sf::Texture arrow_down_png;

sf::Texture cursor_up_png;
sf::Texture cursor_down_png;

// creating surfaces for objects

// creating main surface

sf::Sprite home_surface;
sf::Sprite menu_of_set_surface;
sf::Sprite intermediate_menu_surface;
sf::Sprite pause_menu_surface;

// creating surface for main button

sf::Sprite exit_surface;
sf::Sprite go_surface;
sf::Sprite settings_surface;
sf::Sprite nextlvl_surface;
sf::Sprite go_back_surface;
sf::Sprite continue_surface;

void load_textures() {
    home_screen_png.loadFromFile("image/main_background.png");
    settings_screen_png.loadFromFile("image/menu_ball.png");
    intermediate_menu_png.loadFromFile("image/intermediate_menu.png");
    pause_menu_png.loadFromFile("image/pause_menu.png");

    texture_wood_png.loadFromFile("image/levels_image/texture_wood.jpg");
    texture_wood_1_png.loadFromFile("image/levels_image/texture_wood_1.png");
    texture_wood_2_png.loadFromFile("image/levels_image/texture_wood_2.png");

    dark_ball_png.loadFromFile("image/dark_ball.png");
    disco_ball_png.loadFromFile("image/disco_ball.png");
    grey_ball_png.loadFromFile("image/grey_ball.png");
    red_ball_png.loadFromFile("image/red_ball.png");
    striped_ball_png.loadFromFile("image/striped_ball.png");
    magma_ball_png.loadFromFile("image/magma_ball.png");

    go_png.loadFromFile("image/go_down.png");
    exit_png.loadFromFile("image/exit_down.png");
    nextlvl_png.loadFromFile("image/nextlvl_down.png");
    settings_png.loadFromFile("image/settings_down.png");
    go_back_png.loadFromFile("image/go_back_down.png");
    continue_png.loadFromFile("image/continue_down.png");

    dark_down_png.loadFromFile("image/dark_down.png");
    disco_down_png.loadFromFile("image/disco_down.png");
    grey_down_png.loadFromFile("image/grey_down.png");
    red_down_png.loadFromFile("image/red_down.png");
    striped_down_png.loadFromFile("image/striped_down.png");
    magma_down_png.loadFromFile("image/magma_down.png");

    arrow_down_png.loadFromFile("image/arrow_down.png");

    cursor_up_png.loadFromFile("image/cursor_up.png");
    cursor_down_png.loadFromFile("image/cursor_down.png");

    // creating surfaces for objects

    // creating main surface

    home_surface.setTexture(home_screen_png);
    home_surface.setScale(scale_x, scale_y);

    menu_of_set_surface.setTexture(settings_screen_png);
    menu_of_set_surface.setScale(scale_x, scale_y);

    intermediate_menu_surface.setTexture(intermediate_menu_png);
    intermediate_menu_surface.setScale(scale_x, scale_y);

    pause_menu_surface.setTexture(pause_menu_png);
    pause_menu_surface.setScale(scale_x, scale_y);

    // creating surface for main button

    exit_surface.setTexture(exit_png);
    exit_surface.setScale(scale_x, scale_y);

    go_surface.setTexture(go_png);
    go_surface.setScale(scale_x, scale_y);

    settings_surface.setTexture(settings_png);
    settings_surface.setScale(scale_x, scale_y);

    nextlvl_surface.setTexture(nextlvl_png);
    nextlvl_surface.setScale(scale_x, scale_y);

    go_back_surface.setTexture(go_back_png);
    go_back_surface.setScale(scale_x, scale_y);

    continue_surface.setTexture(continue_png);
    continue_surface.setScale(scale_x, scale_y);

    // creating buttons for selecting balls

    sf::Texture dark_down_sfml = dark_down_png;
    sf::Sprite dark_button_surface;
    dark_button_surface.setTexture(dark_down_sfml);
    dark_button_surface.setScale(scale_x, scale_y);

    sf::Texture disco_down_sfml = disco_down_png;
    sf::Sprite disco_button_surface;
    disco_button_surface.setTexture(disco_down_sfml);
    disco_button_surface.setScale(scale_x, scale_y);

    sf::Texture grey_down_sfml = grey_down_png;
    sf::Sprite grey_button_surface;
    grey_button_surface.setTexture(grey_down_sfml);
    grey_button_surface.setScale(scale_x, scale_y);

    sf::Texture red_down_sfml = red_down_png;
    sf::Sprite red_button_surface;
    red_button_surface.setTexture(red_down_sfml);
    red_button_surface.setScale(scale_x, scale_y);

    sf::Texture striped_down_sfml = striped_down_png;
    sf::Sprite striped_button_surface;
    striped_button_surface.setTexture(striped_down_sfml);
    striped_button_surface.setScale(scale_x, scale_y);

    sf::Texture magma_down_sfml = magma_down_png;
    sf::Sprite magma_button_surface;
    magma_button_surface.setTexture(magma_down_sfml);
    magma_button_surface.setScale(scale_x, scale_y);

    // creating a button for an arrow

    sf::Texture arrow_down_sfml = arrow_down_png;
    sf::Sprite arrow_button_surface;
    arrow_button_surface.setTexture(arrow_down_sfml);
    arrow_button_surface.setScale(scale_x, scale_y);

    sf::Texture cursor_up_sfml = cursor_up_png;
    sf::Sprite cursor_up_button_surface;
    cursor_up_button_surface.setTexture(cursor_up_sfml);

    sf::Texture cursor_down_sfml = cursor_down_png;
    sf::Sprite cursor_down_button_surface;
    cursor_down_button_surface.setTexture(cursor_down_sfml);

    // creating surface for balls

    sf::Texture dark_ball_sfml = dark_ball_png;
    sf::Sprite dark_ball_surface;
    dark_ball_surface.setTexture(dark_ball_sfml);

    sf::Texture disco_ball_sfml = disco_ball_png;
    sf::Sprite disco_ball_surface;
    disco_ball_surface.setTexture(disco_ball_sfml);

    sf::Texture grey_ball_sfml = grey_ball_png;
    sf::Sprite grey_ball_surface;
    grey_ball_surface.setTexture(grey_ball_sfml);

    sf::Texture red_ball_sfml = red_ball_png;
    sf::Sprite red_ball_surface;
    red_ball_surface.setTexture(red_ball_sfml);

    sf::Texture striped_ball_sfml = striped_ball_png;
    sf::Sprite striped_ball_surface;
    striped_ball_surface.setTexture(striped_ball_sfml);

    sf::Texture magma_ball_texture;
    magma_ball_texture.loadFromFile("image/magma_ball.png");
    sf::Sprite magma_ball_sprite;
    magma_ball_sprite.setTexture(magma_ball_texture);
    magma_ball_sprite.setScale(size_ball.x / magma_ball_texture.getSize().x, size_ball.y / magma_ball_texture.getSize().y);

    sf::RenderTexture magma_ball_surface;
    magma_ball_surface.create(size_ball.x, size_ball.y);
    magma_ball_surface.draw(magma_ball_sprite);

    // the texture of the levels

    sf::Texture dark_ball_texture;
    dark_ball_texture.loadFromFile("image/dark_ball.png");
    sf::Sprite dark_ball_sprite;
    dark_ball_sprite.setTexture(dark_ball_texture);

    sf::Texture karusel_floor_texture;
    karusel_floor_texture.loadFromFile("image/levels_image/karysel3.png");
    sf::Sprite karusel_floor_sprite;
    karusel_floor_sprite.setTexture(karusel_floor_texture);
    karusel_floor_sprite.setScale(disk_size.x / karusel_floor_texture.getSize().x, disk_size.y / karusel_floor_texture.getSize().y);

    sf::RenderTexture disk_floor_surf;
    disk_floor_surf.create(disk_size.x, disk_size.y);
    disk_floor_surf.draw(karusel_floor_sprite);

    sf::Texture karusel_walls_texture;
    karusel_walls_texture.loadFromFile("image/levels_image/karysel_walls.png");
    sf::Sprite karusel_walls_sprite;
    karusel_walls_sprite.setTexture(karusel_walls_texture);
    karusel_walls_sprite.setScale(disk_size.x / karusel_walls_texture.getSize().x, disk_size.y / karusel_walls_texture.getSize().y);

    sf::RenderTexture disk_walls_surf;
    disk_walls_surf.create(disk_size.x, disk_size.y);
    disk_walls_surf.draw(karusel_walls_sprite);

    sf::Texture texture_wood_png;
    texture_wood_png.loadFromFile("image/levels_image/texture_wood.jpg");
    sf::Sprite bg_wood_sprite;
    bg_wood_sprite.setTexture(texture_wood_png);
    bg_wood_sprite.setScale(size.x / texture_wood_png.getSize().x, size.y / texture_wood_png.getSize().y);

    sf::RenderTexture bg_wood_surface;
    bg_wood_surface.create(size.x, size.y);
    bg_wood_surface.draw(bg_wood_sprite);

    sf::Texture lv1_light_texture;
    lv1_light_texture.loadFromFile("image/levels_image/level_1/lv1_sp_light.png");
    sf::Sprite lv1_light_sprite;
    lv1_light_sprite.setTexture(lv1_light_texture);
    lv1_light_sprite.setScale(size.x / lv1_light_texture.getSize().x, size.y / lv1_light_texture.getSize().y);

    sf::RenderTexture lv1_walls_surf;
    lv1_walls_surf.create(size.x, size.y);
    lv1_walls_surf.draw(lv1_light_sprite);

    sf::Texture lv1_dark_texture;
    lv1_dark_texture.loadFromFile("image/levels_image/level_1/lv1_super_dark.png");
    sf::Sprite lv1_dark_sprite;
    lv1_dark_sprite.setTexture(lv1_dark_texture);
    lv1_dark_sprite.setScale(size.x / lv1_dark_texture.getSize().x, size.y / lv1_dark_texture.getSize().y);

    sf::RenderTexture lv1_dark_surf;
    lv1_dark_surf.create(size.x, size.y);
    lv1_dark_surf.draw(lv1_dark_sprite);

    sf::Texture lv1_traps_texture;
    lv1_traps_texture.loadFromFile("image/levels_image/level_1/lv1_lovushka_2.png");
    sf::Sprite lv1_traps_sprite;
    lv1_traps_sprite.setTexture(lv1_traps_texture);
    lv1_traps_sprite.setScale(size.x / lv1_traps_texture.getSize().x, size.y / lv1_traps_texture.getSize().y);

    sf::RenderTexture lv1_traps_surf;
    lv1_traps_surf.create(size.x, size.y);
    lv1_traps_surf.draw(lv1_traps_sprite);

    sf::Texture finish_texture;
    finish_texture.loadFromFile("image/levels_image/final_hole.png");
    sf::Sprite finish_sprite;
    finish_sprite.setTexture(finish_texture);
    finish_sprite.setScale(finish_width / finish_texture.getSize().x, finish_hight / finish_texture.getSize().y);

    sf::RenderTexture finish_surf;
    finish_surf.create(finish_width, finish_hight);
    finish_surf.draw(finish_sprite);

    sf::Texture lv2_walls_texture;
    lv2_walls_texture.loadFromFile("image/levels_image/level_2/lv2_bw.png");
    sf::Sprite lv2_walls_sprite;
    lv2_walls_sprite.setTexture(lv2_walls_texture);
    lv2_walls_sprite.setScale(size.x / lv2_walls_texture.getSize().x, size.y / lv2_walls_texture.getSize().y);

    sf::RenderTexture lv2_walls_surf;
    lv2_walls_surf.create(size.x, size.y);
    lv2_walls_surf.draw(lv2_walls_sprite);

    sf::Texture lv2_traps_texture;
    lv2_traps_texture.loadFromFile("image/levels_image/level_2/lv2_lovyshka.png");
    sf::Sprite lv2_traps_sprite;
    lv2_traps_sprite.setTexture(lv2_traps_texture);
    lv2_traps_sprite.setScale(size.x / lv2_traps_texture.getSize().x, size.y / lv2_traps_texture.getSize().y);

    sf::RenderTexture lv2_traps_surf;
    lv2_traps_surf.create(size.x, size.y);
    lv2_traps_surf.draw(lv2_traps_sprite);

    sf::Texture lv2_dark_texture;
    lv2_dark_texture.loadFromFile("image/levels_image/level_2/lv2_without_guns.png");
    sf::Sprite lv2_dark_sprite;
    lv2_dark_sprite.setTexture(lv2_dark_texture);
    lv2_dark_sprite.setScale(size.x / lv2_dark_texture.getSize().x, size.y / lv2_dark_texture.getSize().y);

    sf::RenderTexture lv2_dark_surf;
    lv2_dark_surf.create(size.x, size.y);
    lv2_dark_surf.draw(lv2_dark_sprite);

    sf::Texture lv3_walls_texture;
    lv3_walls_texture.loadFromFile("image/levels_image/level_3/lv3_light.png");
    sf::Sprite lv3_walls_sprite;
    lv3_walls_sprite.setTexture(lv3_walls_texture);
    lv3_walls_sprite.setScale(size.x / lv3_walls_texture.getSize().x, size.y / lv3_walls_texture.getSize().y);

    sf::RenderTexture lv3_walls_surf;
    lv3_walls_surf.create(size.x, size.y);
    lv3_walls_surf.draw(lv3_walls_sprite);

    sf::Texture lv3_traps_texture;
    lv3_traps_texture.loadFromFile("image/levels_image/level_3/lv3_lovyshki_dark.png");
    sf::Sprite lv3_traps_sprite;
    lv3_traps_sprite.setTexture(lv3_traps_texture);
    lv3_traps_sprite.setScale(size.x / lv3_traps_texture.getSize().x, size.y / lv3_traps_texture.getSize().y);

    sf::RenderTexture lv3_traps_surf;
    lv3_traps_surf.create(size.x, size.y);
    lv3_traps_surf.draw(lv3_traps_sprite);

    sf::Texture lv3_dark_texture;
    lv3_dark_texture.loadFromFile("image/levels_image/level_3/lv3_without_guns.png");
    sf::Sprite lv3_dark_sprite;
    lv3_dark_sprite.setTexture(lv3_dark_texture);
    lv3_dark_sprite.setScale(size.x / lv3_dark_texture.getSize().x, size.y / lv3_dark_texture.getSize().y);

    sf::RenderTexture lv3_dark_surf;
    lv3_dark_surf.create(size.x, size.y);
    lv3_dark_surf.draw(lv3_dark_sprite);

    sf::Texture lv4_walls_g_texture;
    lv4_walls_g_texture.loadFromFile("image/levels_image/level_4/lv4_without_guns.png");
    sf::Sprite lv4_walls_g_sprite;
    lv4_walls_g_sprite.setTexture(lv4_walls_g_texture);
    lv4_walls_g_sprite.setScale(size.x / lv4_walls_g_texture.getSize().x, size.y / lv4_walls_g_texture.getSize().y);

    sf::RenderTexture lv4_walls_surf_g;
    lv4_walls_surf_g.create(size.x, size.y);
    lv4_walls_surf_g.draw(lv4_walls_g_sprite);

    sf::Texture lv4_walls_texture;
    lv4_walls_texture.loadFromFile("image/levels_image/level_4/lv4_light.png");
    sf::Sprite lv4_walls_sprite;
    lv4_walls_sprite.setTexture(lv4_walls_texture);
    lv4_walls_sprite.setScale(size.x / lv4_walls_texture.getSize().x, size.y / lv4_walls_texture.getSize().y);

    sf::RenderTexture lv4_walls_surf;
    lv4_walls_surf.create(size.x, size.y);
    lv4_walls_surf.draw(lv4_walls_sprite);

    sf::Texture lv4_traps_texture;
    lv4_traps_texture.loadFromFile("image/levels_image/level_4/lv4_lovyshki_dark.png");
    sf::Sprite lv4_traps_sprite;
    lv4_traps_sprite.setTexture(lv4_traps_texture);
    lv4_traps_sprite.setScale(size.x / lv4_traps_texture.getSize().x, size.y / lv4_traps_texture.getSize().y);

    sf::RenderTexture lv4_traps_surf;
    lv4_traps_surf.create(size.x, size.y);
    lv4_traps_surf.draw(lv4_traps_sprite);

    sf::Texture lv4_dark_texture;
    lv4_dark_texture.loadFromFile("image/levels_image/level_4/lv4_dark.png");
    sf::Sprite lv4_dark_sprite;
    lv4_dark_sprite.setTexture(lv4_dark_texture);
    lv4_dark_sprite.setScale(size.x / lv4_dark_texture.getSize().x, size.y / lv4_dark_texture.getSize().y);

    sf::RenderTexture lv4_dark_surf;
    lv4_dark_surf.create(size.x, size.y);
    lv4_dark_surf.draw(lv4_dark_sprite);
}