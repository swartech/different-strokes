//
//  GameObject.cpp
//  different-strokes
//
//  Created by Sam Whelan on 09/08/2014.
//  Copyright (c) 2014 samwhelan. All rights reserved.
//

#include "GameObject.h"

    GameObject::GameObject(sf::Texture spritesheet, sf::Sprite sprite, sf::Vector2f position, sf::Vector2f velocity, int width, int height, bool alive, bool collidable)
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
        this->sprite.move(position.x, position.y);

    }
    GameObject::~GameObject()
    {}
    void GameObject::update()
    {
        
    }
    sf::Sprite GameObject::getSprite()
    {
        return this->sprite;
    }
    int GameObject::getWidth()
    {
        return this->width;
    }
    int GameObject::getHeight()
    {
        return this->height;
    }
    sf::Vector2f GameObject::getPosition()
    {
        return this->position;
    }
    sf::Vector2f GameObject::getVelocity()
    {
        return this->velocity;
    }
    void GameObject::move(sf::Vector2f offset)
    {
        this->position += offset;
    }
    bool GameObject::isAlive()
    {
        return this->alive;
    }
    void GameObject::kill()
    {
        this->alive= false;
    }
    bool GameObject::isCollidable()
    {
        return this->collidable;
    }
    sf::FloatRect GameObject::getBoundingBox()
    {
        return this->boundingBox;
    }
