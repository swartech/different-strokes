#pragma once
#include "GameObject.h"
class AnimatedGameObject :
	public GameObject
{
public:
	AnimatedGameObject(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable);
	virtual ~AnimatedGameObject(void);
private:
    int frameCount;
    int currentFrame;

};








