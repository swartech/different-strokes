#include "AnimatedGameObject.h"
#include <SFML/Graphics.hpp>

class AnimatedGameObject {

sf::Texture spriteSheet;
int frameCount;
int currentFrame;


AnimatedGameObject::AnimatedGameObject(sf::Texture spritesheet, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool collidable):GameObject(width,height,position,velocity,collidable)
{
 
 spriteSheet = spritesheet;
 currentFrame = currentframe;
}

 


AnimatedGameObject::~AnimatedGameObject(void)
{
}

}