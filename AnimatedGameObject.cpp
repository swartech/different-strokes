#include "AnimatedGameObject.h"
#include <SFML/Graphics.hpp>


AnimatedGameObject::AnimatedGameObject(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable):GameObject(spritesheet, sprite, position, velocity, width, height, alive, collidable)
{
 
 spritesheet = spritesheet;
 currentFrame = currentframe;
}

 


AnimatedGameObject::~AnimatedGameObject(void)
{
}
