#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdio>

using namespace sf;

int main()
{

    sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");     // Create the main window - window.isOpen is now set to True
    sf::Texture gameboard;      //loads the gameboard image
    sf::Font font;              //font
    sf::Music music;            // Load a music to play

    //loads all files
    if (!gameboard.loadFromFile("tictactoe.png"))
        return EXIT_FAILURE;
    if (!font.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;
    if (!music.openFromFile("swapj.ogg"))
        return EXIT_FAILURE;

    //renders the use of the files
    sf::Sprite background(gameboard);       //puts background in window
    music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;

        while (window.pollEvent(event))
        {
            // Close window : exit
            window.display();
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window.close();
            switch(event.key.code){
                case '1':
                    window.close();
                    break;
                case '2':
                    window.close();
                    break;
                case '3':
                    window.close();
                    break;
                case '4':
                    window.close();
                    break;
                case '5':
                    window.close();
                    break;
                case '6':
                    window.close();
                    break;
                case '7':
                    window.close();
                    break;
                case '8':
                    window.close();
                    break;
                case '9':
                    window.close();
                    break;
                default:
                    break;
            }


        }





    // Draw the sprite aka background
    window.draw(background);
    window.display();  // Update the window
    }
    return 0;
}

