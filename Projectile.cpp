#include "Projectile.h"


Projectile::Projectile(sf::Texture spritesheet, sf::Sprite sprite, int width, int height, int currentframe, sf::Vector2f position, sf::Vector2f velocity, bool alive, bool collidable): PowerUp(spritesheet, sprite, width, height, currentframe, position, velocity, alive, collidable)

{
}


Projectile::~Projectile(void)
{
}
