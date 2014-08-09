#pragma once
#include "GameObject.h"

class Level :
	public GameObject
{
public:
	Level(sf::Texture spritesheet, sf::Sprite sprite, sf::Vector2f position, sf::Vector2f velocity, int width, int height, bool alive, bool collidable);
	virtual ~Level();
};

