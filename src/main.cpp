#include "../include/common.h"

int main(){

    // create win
    WindowSFML myWindow;
    WindowSFML myWindow2;
    TextAndFont myTextAndFont;
    myWindow.createWindow();
    myTextAndFont.initTextAndFont();

    // run pgrm as long as win is open
    while(myWindow.window.isOpen()){
        // check win events triggered since last iteration of loop
        sf::Event event;
        while(myWindow.window.pollEvent(event)){
            // "close req" event: close win
            if(event.type == sf::Event::Closed){
                myWindow.window.close();
                myWindow2.createWindow();
            }
        }
        while(myWindow2.window.isOpen())
        {
            sf::Event event2;
            while(myWindow2.window.pollEvent(event2)){
                // "close req" event: close win
                if(event2.type == sf::Event::Closed){
                    myWindow2.window.close();
                }
            }
            // clear win w/ black
            myWindow2.window.clear(sf::Color::White);
            //draw here
            myWindow2.window.draw(myTextAndFont.text2);
            //end current frame
            myWindow2.window.display();
        }
        // clear win w/ black
        myWindow.window.clear(sf::Color::White);
        //draw here
        myWindow.window.draw(myTextAndFont.text);
        //end current frame
        myWindow.window.display();
    }

    return 0;
}
