#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

//beta tic tac toe

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("tictactoe.png"))
        return EXIT_FAILURE;

    //puts background
    sf::Sprite sprite(texture);
    // Create a graphical text to display
   sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;
    sf::Text text("Hello SFML", font, 50);
    /*
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile("swapj.ogg"))
        return EXIT_FAILURE;
    // Play the music
        music.play();
    */
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window.close();
        }
        // Clear screen
        window.clear();
        // Draw the sprite aka background
        window.draw(sprite);
        // Draw the string

        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}
