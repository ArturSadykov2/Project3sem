#include "menu.h"
#include "game_texture.h"

Menu::Menu(sf::RenderWindow& window) : window(window) {
    ballIndex = 1;
    menuLive = 1;
    homeSurface = 1;
    startOfSet = 0;
    intermediateMenu = 0;
    pauseMenu = 0;

    exitOn = false;
    exitOff = false;
    go = false;
    settings = false;
    nextLvl = false;
    goBack = false;
    continuee = false;
    darkButton = false;
    discoButton = false;
    greyButton = false;
    redButton = false;
    stripedButton = false;
    magmaButton = false;
    arrowButton = false;

    level1 = 1;
    level2 = 0;
    level3 = 0;
    level4 = 0;
}

void Menu::checkOn(const sf::Event& event) {
    if ((0 <= event.mouseButton.x - 131 * scale_x + cursor_size / 2 <= 281 * scale_x) &&
        (0 <= event.mouseButton.y - 153 * scale_y + cursor_size / 2 <= 92 * scale_y)) {
        exitOn = true;
    }
    else if ((0 <= event.mouseButton.x - 671 * scale_x + cursor_size / 2 <= 206 * scale_x) &&
        (0 <= event.mouseButton.y - 153 * scale_y + cursor_size / 2 <= 107 * scale_y)) {
        go = true;
    }
    else if ((0 <= event.mouseButton.x - 272 * scale_x + cursor_size / 2 <= 320 * scale_x) &&
        (0 <= event.mouseButton.y - 394 * scale_y + cursor_size / 2 <= 106 * scale_y)) {
        settings = true;
    }
}

void Menu::checkOnSettings(const sf::Event& event) {
    if ((0 <= event.mouseButton.x - 721 * scale_x + cursor_size / 2 <= 215 * scale_x) &&
        (0 <= event.mouseButton.y - 50 * scale_y + cursor_size / 2 <= 215 * scale_y)) {
        darkButton = true;
        ballIndex = 4;
    }
    else if ((0 <= event.mouseButton.x - 74 * scale_x + cursor_size / 2 <= 215 * scale_x) &&
        (0 <= event.mouseButton.y - 320 * scale_y + cursor_size / 2 <= 215 * scale_y)) {
        discoButton = true;
        ballIndex = 3;
    }
    else if ((0 <= event.mouseButton.x - 74 * scale_x + cursor_size / 2 <= 215 * scale_x) &&
        (0 <= event.mouseButton.y - 50 * scale_y + cursor_size / 2 <= 215 * scale_y)) {
        greyButton = true;
        ballIndex = 2;
    }
    else if ((0 <= event.mouseButton.x - 399 * scale_x + cursor_size / 2 <= 215 * scale_x) &&
        (0 <= event.mouseButton.y - 50 * scale_y + cursor_size / 2 <= 215 * scale_y)) {
        redButton = true;
        ballIndex = 1;
    }
    else if ((0 <= event.mouseButton.x - 399 * scale_x + cursor_size / 2 <= 215 * scale_x) &&
        (0 <= event.mouseButton.y - 320 * scale_y + cursor_size / 2 <= 215 * scale_y)) {
        stripedButton = true;
        ballIndex = 5;
    }
    else if ((0 <= event.mouseButton.x - 721 * scale_x + cursor_size / 2 <= 215 * scale_x) &&
        (0 <= event.mouseButton.y - 320 * scale_y + cursor_size / 2 <= 215 * scale_y)) {
        magmaButton = true;
        ballIndex = 6;
    }
    else if ((0 <= event.mouseButton.x) && (0 <= event.mouseButton.y) &&
        (event.mouseButton.x <= 61 * scale_x) && (event.mouseButton.y <= 46 * scale_y)) {
        arrowButton = true;
    }
}

void Menu::checkOnGameWindows(const sf::Event& event) {
    if ((0 <= event.mouseButton.x - 292 * scale_x + cursor_size / 2 <= 440 * scale_x) &&
        (0 <= event.mouseButton.y - 332 * scale_y + cursor_size / 2 <= 140 * scale_y)) {
        goBack = true;
    }
    else if ((0 <= event.mouseButton.x - 292 * scale_x + cursor_size / 2 <= 440 * scale_x) &&
        (0 <= event.mouseButton.y - 128 * scale_y + cursor_size / 2 <= 140 * scale_y) && intermediateMenu) {
        nextLvl = true;
    }
    else if ((0 <= event.mouseButton.x - 292 * scale_x + cursor_size / 2 <= 440 * scale_x) &&
        (0 <= event.mouseButton.y - 128 * scale_y + cursor_size / 2 <= 140 * scale_y) && pauseMenu) {
        continuee = true;
    }
}

void Menu::checkOff() {
    if (exitOn) {
        exitOff = true;
        exitOn = false;
    }
    else if (go) {
        go = false;
        menuLive = 0;
        homeSurface = 0;
    }
    else if (settings) {
        settings = false;
        startOfSet = 1;
        homeSurface = 0;
    }
}

void Menu::checkOffSettings() {
    if (arrowButton) {
        arrowButton = false;
        startOfSet = 0;
        homeSurface = 1;
    }
    else if (darkButton) {
        darkButton = false;
    }
    else if (discoButton) {
        discoButton = false;
    }
    else if (greyButton) {
        greyButton = false;
    }
    else if (redButton) {
        redButton = false;
    }
    else if (stripedButton) {
        stripedButton = false;
    }
    else if (magmaButton) {
        magmaButton = false;
    }
}

void Menu::checkOffGameWindows() {
    if (goBack) {
        goBack = false;
        homeSurface = 1;
        intermediateMenu = 0;
        pauseMenu = 0;
    }
    else if (nextLvl) {
        nextLvl = false;
        menuLive = 0;
        if (level1) {
            level2 = 1;
            level1 = 0;
        }
        else if (level2) {
            level3 = 1;
            level2 = 0;
        }
        else if (level3) {
            level4 = 1;
            level3 = 0;
        }
    }
    else if (continuee) {
        continuee = false;
        pauseMenu = 0;
        menuLive = 0;
    }
}

void Menu::drawButtons() {
    if (exitOn) {
        window.draw(exit_surface);
    }
    else if (go) {
        window.draw(go_surface);
    }
    else if (nextLvl) {
        window.draw(nextlvl_surface);
    }
    else if (settings) {
        window.draw(settings_surface);
    }
    else if (goBack) {
        window.draw(go_back_surface);
    }
    else if (continuee) {
        window.draw(continue_surface);
    }
}

void Menu::drawButtonsBalls() {
    if (darkButton) {
        window.draw(dark_button_surface);
    }
    else if (discoButton) {
        window.draw(disco_button_surface);
    }
    else if (greyButton) {
        window.draw(grey_button_surface);
    }
    else if (redButton) {
        window.draw(red_button_surface);
    }
    else if (stripedButton) {
        window.draw(striped_button_surface);
    }
    else if (magmaButton) {
        window.draw(magma_button_surface);
    }
    else if (arrowButton) {
        window.draw(arrow_button_surface);
    }
}

void Menu::screenDraw() {
    if (startOfSet) {
        window.draw(menu_of_set_surface);
    }
    else if (homeSurface) {
        window.draw(home_surface);
    }
    else if (intermediateMenu) {
        window.draw(intermediate_menu_surface);
    }
    else if (pauseMenu) {
        window.draw(pause_menu_surface);
    }
}

void Menu::playMusic(sf::Music& channel) {
    if (intermediateMenu || pauseMenu) {
        channel.pause();
    }
    else {
        channel.play();
    }
}

void Menu::drawButtonsHelper(const sf::Sprite& sprite, float x, float y) {
    sprite.setPosition(x, y);
    window.draw(sprite);
}