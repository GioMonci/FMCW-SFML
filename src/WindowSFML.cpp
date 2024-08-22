#include "../include/WindowSFML.h"

void WindowSFML::createWindow()
{
    window.create(sf::VideoMode(900, 700, 32),
        "FMCW-SFML", sf::Style::Default);
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);
    window.setMouseCursorVisible(true);

}
