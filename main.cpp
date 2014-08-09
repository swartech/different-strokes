
//
// Disclamer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resource, use the helper
// method resourcePath() from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream> 
#include "Player.h"


// Here is a small helper for you ! Have a look.
#include "ResourcePath.hpp"

#ifndef __APPLE__
std::string resourcePath() {
    return "../";
}
#endif


int main(int, char const**)
{
    // Create the main window

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // Set the Icon
    sf::Image icon;

   
if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;

    if (!texture.loadFromFile(resourcePath() + "water.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
		return EXIT_FAILURE;
    }
    sf::Text text("Hello SFML", font, 50);
    text.setColor(sf::Color::Black);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();
    sf::Texture playerTexture;
    
    if (!playerTexture.loadFromFile(resourcePath() + "kayak.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite playerSprite(playerTexture);

    Player p1 = Player(playerTexture, playerSprite, 32, 100, 0, sf::Vector2f(200, 200), sf::Vector2f(40, 80), true, true);
    
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);
        window.draw(p1.getSprite());

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
