#include "../include/Buttons.h"

void Buttons::createYesButton()
{
    yesButton.setSize(sf::Vector2f(100.f, 50.f));
    yesButton.setPosition(sf::Vector2f(300.f, 475.f));
    yesButton.setFillColor(sf::Color::Green);
}

void Buttons::createNoButton()
{
    noButton.setSize(sf::Vector2f(100.f, 50.f));
    noButton.setPosition(sf::Vector2f(500.f, 475.f));
    noButton.setFillColor(sf::Color::Red);
}

void Buttons::createNotBadButton()
{
    notBadButton.setSize(sf::Vector2f(100.f, 50.f));
    notBadButton.setPosition(sf::Vector2f(250.f, 475.f));
    notBadButton.setFillColor(sf::Color::Green);
}

void Buttons::createBadButton()
{
    badButton.setSize(sf::Vector2f(100.f, 50.f));
    badButton.setPosition(sf::Vector2f(400.f, 475.f));
    badButton.setFillColor(sf::Color::Yellow);
}

void Buttons::createCookedButton()
{
    cookedButton.setSize(sf::Vector2f(100.f, 50.f));
    cookedButton.setPosition(sf::Vector2f(550.f, 475.f));
    cookedButton.setFillColor(sf::Color::Red);
}