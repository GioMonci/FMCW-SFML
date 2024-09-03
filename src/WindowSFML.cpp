#include "../include/WindowSFML.h"

void WindowSFML::createWindow()
{
    window.create(sf::VideoMode(900, 550, 32),
        "FMCW-SFML", sf::Style::Default);
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);
    window.setMouseCursorVisible(true);

}
