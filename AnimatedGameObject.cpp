#include "AnimatedGameObject.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
class AnimatedGameObject {

sf::Texture spriteSheet;
int frameCount;
int currentFrame;


AnimatedGameObject::AnimatedGameObject(sf::Texture spriteSheet, int width, int height, int currentFrame, sf::Vector2f position, sf::Vector2f velocity, bool collidable)
{

}

 


AnimatedGameObject::~AnimatedGameObject(void)
{
}

}