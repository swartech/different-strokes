#pragma once
#include "powerup.h"
class Boost :
	public PowerUp
{
public:
	Boost(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable);
	virtual ~Boost(void);
};

