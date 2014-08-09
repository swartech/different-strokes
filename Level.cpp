#include "Level.h"


Level::Level(sf::Texture spritesheet, sf::Sprite sprite, sf::Vector2f position, sf::Vector2f velocity, int width, int height, bool alive, bool collidable) : GameObject(spritesheet, sprite, position, velocity, width, height, alive, collidable)
{
}


Level::~Level(void)
{
}
