#pragma once
#include "AnimatedGameObject.h"
class Player :
	public AnimatedGameObject
{
public:
	Player(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable);
	virtual ~Player(void);
};

