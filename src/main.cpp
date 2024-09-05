#include "../include/common.h"

// inits
WindowSFML mainWin;
WindowSFML secondWin;
TextAndFont myTextAndFont;
Buttons mainButtons;
sf::Event mainEvent;
sf::Event secondEvent;
Logs logs;
ShellExecuteInfoAsAdmin SEIAA;
bool isMouseOverButton(sf::RectangleShape& button, sf::Vector2i mousePos);

int main()
{
    // create win
    // idk if this method of creating objs is cooked or not
    mainWin.createWindow();
    myTextAndFont.initTextAndFont();
    mainButtons.createYesButton();
    mainButtons.createNoButton();
    mainButtons.createNotBadButton();
    mainButtons.createBadButton();
    mainButtons.createCookedButton();

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
                // if mouse button is pressed
                else if(secondEvent.type == sf::Event::MouseButtonPressed){
                    //if the left mouse button is pressed
                    if(secondEvent.mouseButton.button == sf::Mouse::Left){
                        std::cout << "clicked" << std::endl;
                        //get mouse position
                        sf::Vector2i mousePos = sf::Mouse::getPosition(secondWin.window);
                        int level_of_pc;
                        // if mouse is over NotBad button
                        if(isMouseOverButton(mainButtons.notBadButton, mousePos)){
                            std::cout << "over notbad" << std::endl;
                            level_of_pc = 1;
                            secondWin.window.close();
                            SEIAA.StartingExecutionProcess(level_of_pc);
                            SEIAA.AskForRestart();
                        }
                        // if mouse is over Bad button
                        if(isMouseOverButton(mainButtons.badButton, mousePos)){
                            std::cout << "over bad" << std::endl;
                            level_of_pc = 2;
                            secondWin.window.close();
                            SEIAA.StartingExecutionProcess(level_of_pc);
                            SEIAA.AskForRestart();
                        }
                        // if mouse is over Cooked button
                        if(isMouseOverButton(mainButtons.cookedButton, mousePos)){
                            std::cout << "over cooked" << std::endl;
                            level_of_pc = 3;
                            secondWin.window.close();
                            SEIAA.StartingExecutionProcess(level_of_pc);
                            SEIAA.AskForRestart();
                        }
                    }
                }
            }
            //second win drawings
            // clear win w/ black
            secondWin.window.clear(sf::Color::White);
            //draw here
            secondWin.window.draw(myTextAndFont.askChoiceMessage);
            secondWin.window.draw(mainButtons.notBadButton);
            secondWin.window.draw(myTextAndFont.notBadMess);
            secondWin.window.draw(mainButtons.badButton);
            secondWin.window.draw(myTextAndFont.badMess);
            secondWin.window.draw(mainButtons.cookedButton);
            secondWin.window.draw(myTextAndFont.cookedMess);
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

bool isMouseOverButton(sf::RectangleShape& button, sf::Vector2i mousePos){
    sf::FloatRect bounds = button.getGlobalBounds();
    return bounds.contains(static_cast<sf::Vector2f>(mousePos));
}