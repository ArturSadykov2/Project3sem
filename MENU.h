#pragma once
#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Menu {
public:
    Menu(sf::RenderWindow& window) : window(window) {
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

    void checkOn(const sf::Event& event);
    void checkOnSettings(const sf::Event& event);
    void checkOnGameWindows(const sf::Event& event);

    void checkOff();
    void checkOffSettings();
    void checkOffGameWindows();

    void drawButtons();
    void drawButtonsBalls();
    void screenDraw();

    void playMusic(sf::Music& channel);

private:
    sf::RenderWindow& window;

    int ballIndex;
    int menuLive;
    int homeSurface;
    int startOfSet;
    int intermediateMenu;
    int pauseMenu;

    bool exitOn;
    bool exitOff;
    bool go;
    bool settings;
    bool nextLvl;
    bool goBack;
    bool continuee;
    bool darkButton;
    bool discoButton;
    bool greyButton;
    bool redButton;
    bool stripedButton;
    bool magmaButton;
    bool arrowButton;

    int level1;
    int level2;
    int level3;
    int level4;

    void drawButtonsHelper(const sf::Sprite& sprite, float x, float y);
};

#endif 