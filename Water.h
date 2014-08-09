#pragma once
#include "AnimatedGameObject.h"
class Water :
	public AnimatedGameObject
{
public:
	Water(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable);
	virtual ~Water();
};

