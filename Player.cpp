#include "Player.h"

Player::Player(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable) : AnimatedGameObject(spritesheet, sprite, width, height, currentframe, position, velocity, alive, collidable)
{
}


Player::~Player(void)
{
}
