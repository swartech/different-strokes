#include "Player.h"

Player::Player(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentFrame, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable) : AnimatedGameObject(spritesheet, sprite, width, height, currentFrame, position, velocity, alive, collidable)
{
    this->spritesheet = spritesheet;
    this->sprite = sprite;
    this->position = position;
    this->velocity = velocity;
    this->width = width;
    this->height = height;
    this->alive = alive;
    this->collidable = collidable;
    this->boundingBox = sprite.getGlobalBounds();
    this->sprite.setTexture(this->spritesheet);
    this->currentFrame = currentFrame;
    this->sprite.move(position.x, position.y);
    
}


Player::~Player(void)
{
}
