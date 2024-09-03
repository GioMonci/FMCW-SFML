#pragma once
#include "common.h"

class Buttons {

    public:
    sf::RectangleShape yesButton;
    sf::RectangleShape noButton;
    sf::RectangleShape notBadButton;
    sf::RectangleShape badButton;
    sf::RectangleShape cookedButton;

    void createYesButton();
    void createNoButton();
    void createNotBadButton();
    void createBadButton();
    void createCookedButton();
};
