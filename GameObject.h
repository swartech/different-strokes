//
//  GameObject.h
//  different-strokes
//
//  Created by Sam Whelan on 09/08/2014.
//  Copyright (c) 2014 samwhelan. All rights reserved.
//

#ifndef __different_strokes__GameObject__
#define __different_strokes__GameObject__

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class GameObject
{
public:
    GameObject(sf::Texture spritesheet, sf::Sprite sprite, sf::Vector2f position, sf::Vector2f velocity, int width, int height, bool alive, bool collidable);
    GameObject();
    virtual ~GameObject();
    void update();
    sf::Sprite getSprite();
    int getWidth();
    int getHeight();
    sf::Vector2f getPosition();
    sf::Vector2f  getVelocity();
    void move(sf::Vector2f offset);
    bool isAlive();
    void kill();
    bool isCollidable();
    sf::FloatRect getBoundingBox();
    
protected:
private:
    sf::Sprite sprite;
    sf::Texture texture;
    sf::Vector2f position, velocity;
    bool alive, collidable;
    int width, height;
    sf::FloatRect boundingBox;
};

#endif /* defined(__different_strokes__GameObject__) */
