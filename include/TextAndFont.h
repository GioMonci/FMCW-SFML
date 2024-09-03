#pragma once
#include "common.h"

class TextAndFont {

    public:
    sf::Font font;
    sf::Text mainMessage;
    sf::Text askChoiceMessage;
    sf::Text warningMessage;
    sf::Text yesMess;
    sf::Text noMess;
    sf::Text notBadMess;
    sf::Text badMess;
    sf::Text cookedMess;
    void initTextAndFont();
};

