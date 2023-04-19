#include "Bat.h"
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>

int main(){

    //Create a video mode Object
    VideoMode vm(1920,1080);

    //Create and open a window for the game

    RenderWindow window(vm,"Pong",Style::Fullscreen);

    int score = 0;
    int lives = 3;

    //Create a bat at the bottom center of the screen
    Bat bat(1920/2,1080-20);

    //Ball

    //Create TextObject called HUD
    Text hud;

    //A cool retro-style font
    Font font;
    font.loadFromFile("../fonts/DS-DIGIT.ttf");

    //Set the font to our retro-style
    hud.setFont(font);

    //Make it nice and big
    hud.setCharacterSize(75);

    //Choose Color
    hud.setFillColor(Color::White);

    hud.setPosition(20,20);

    //Here is our clock for timing everything
    Clock clock;

    while(window.isOpen()){

         //Handle the player input
         Event event;
         while(window.pollEvent(event)){
             if(event.type == Event::Closed)
                 //Quit the game when the window is closed
                 window.close();
         }

         //Handle the player quitting
         if(Keyboard::isKeyPressed(Keyboard::Escape)){
             window.close();
         }

         //Handle the pressing and releasing of the arrow keys
         if(Keyboard::isKeyPressed(Keyboard::Left))
             bat.moveLeft();
         else
             bat.stopLeft();

         if(Keyboard::isKeyPressed(Keyboard::Right))
             bat.moveRight();
         else
             bat.stopRight();


        /*
         Update the bat, the ball and the HUD
         ****************************
         ****************************
         ****************************
        */

        /*
         Draw the bat, the ball and the HUD
         ****************************
         ****************************
         ****************************
        */

    }

    return 0;
}