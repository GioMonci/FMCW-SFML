#include "../include/common.h"

// inits
WindowSFML mainWin;
WindowSFML secondWin;
TextAndFont myTextAndFont;
Buttons mainButtons;
sf::Event mainEvent;
sf::Event secondEvent;


bool isMouseOverButton(sf::RectangleShape& button, sf::Vector2i mousePos){
    sf::FloatRect bounds = button.getGlobalBounds();
    return bounds.contains(static_cast<sf::Vector2f>(mousePos));
}

int main()
{
    // create win
    mainWin.createWindow();
    myTextAndFont.initTextAndFont();
    mainButtons.createYesButton();
    mainButtons.createNoButton();

    // run pgrm as long as win is open
    while(mainWin.window.isOpen()){
        // check win events triggered since last iteration of loop
        while(mainWin.window.pollEvent(mainEvent)){
            // "close req" event: close win
            if(mainEvent.type == sf::Event::Closed){
                mainWin.window.close();
            }
            // if mouse button is pressed
            else if(mainEvent.type == sf::Event::MouseButtonPressed){
                //if the left mouse button is pressed
                if(mainEvent.mouseButton.button == sf::Mouse::Left){
                    std::cout << "clicked" << std::endl;
                    //get mouse position
                    sf::Vector2i mousePos = sf::Mouse::getPosition(mainWin.window);
                    // if mouse is over yes button
                    if(isMouseOverButton(mainButtons.yesButton, mousePos)){
                        std::cout << "over yes" << std::endl;
                        mainWin.window.close();
                        secondWin.createWindow();
                    }
                    // if mouse is over no button
                    if(isMouseOverButton(mainButtons.noButton, mousePos)){
                        std::cout << "over no" << std::endl;
                        mainWin.window.close();
                    }
                }
            }
        }
        // second window while loop here
        while(secondWin.window.isOpen())
        {
            while(secondWin.window.pollEvent(secondEvent)){
                // "close req" event: close win
                if(secondEvent.type == sf::Event::Closed){
                    secondWin.window.close();
                }
            }
            //second win drawings
            // clear win w/ black
            secondWin.window.clear(sf::Color::White);
            //draw here
            secondWin.window.draw(myTextAndFont.askChoiceMessage);
            //end current frame
            secondWin.window.display();
        }
        // main win drawings
        // clear win w/ black
        mainWin.window.clear(sf::Color::White);
        //draw here
        mainWin.window.draw(myTextAndFont.mainMessage);
        mainWin.window.draw(mainButtons.yesButton);
        mainWin.window.draw(myTextAndFont.yesMess);
        mainWin.window.draw(mainButtons.noButton);
        mainWin.window.draw(myTextAndFont.noMess);
        //end current frame
        mainWin.window.display();
    }

    return 0;
}