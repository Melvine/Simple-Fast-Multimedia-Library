#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdio>
#include "game.h"


int main()
{

    sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");     // Create the main window - window.isOpen is now set to True
    sf::Texture gameboard;      //loads the gameboard image
    sf::Texture pieces;
    sf::Font font;              //font
    sf::Music music;            // Load a music to play

    //loads all files
    if (!gameboard.loadFromFile("tictactoe.png"))
        return EXIT_FAILURE;
    if (!pieces.loadFromFile("pieces.png"))
        return EXIT_FAILURE;
    if (!font.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;
    if (!music.openFromFile("swapj.ogg"))
        return EXIT_FAILURE;

    //renders the use of the files
    sf::Sprite background(gameboard);       //puts background in window
    sf::Sprite O(pieces, sf::IntRect(0,0,280,280));
    sf::Sprite X(pieces, sf::IntRect(290,0,270,250));
    //music.play();
    Game match;
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;

        window.draw(background); // Draw the sprite aka background
        window.display();  // Update the window

        while (window.pollEvent(event) && match.referee())
        {
            // Close window : exit
            window.display();
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window .close();

            switch(event.key.code){
                case '1':
                    if(match.checkData(0,0) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(0,0);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(0,0);
                            window.draw(O);
                        }
                    }
                    break;
                case '2':
                     if(match.checkData(0,1) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(300,0);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(300,0);
                            window.draw(O);
                        }
                    }
                    break;
                case '3':
                    if(match.checkData(0,2) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(600,0);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(600,0);
                            window.draw(O);
                        }
                    }
                    break;
                case '4':
                    if(match.checkData(1,0) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(0,300);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(0,300);
                            window.draw(O);
                        }
                    }
                    break;
                case '5':
                    if(match.checkData(1,1) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(300,300);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(300,300);
                            window.draw(O);
                        }
                    }
                    break;
                case '6':
                    if(match.checkData(1,2) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(600,300);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(600,300);
                            window.draw(O);
                        }
                    }
                    break;
                case '7':
                    if(match.checkData(2,0) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(0,600);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(0,600);
                            window.draw(O);
                        }
                    }
                    break;
                case '8':
                    if(match.checkData(2,1) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(300,600);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(300,600);
                            window.draw(O);
                        }
                    }
                    break;
                case '9':
                    if(match.checkData(2,2) == 0){
                        if(match.switchXO() == 0){
                            X.setPosition(600,600);
                            window.draw(X);
                        }
                        else{
                            O.setPosition(600,600);
                            window.draw(O);
                        }
                    }
                    break;
                default:
                    break;
            }

        }
    }

    return 0;
}
