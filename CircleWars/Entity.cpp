#include "Entity.h"

Entity::Entity()
{
	health = 10;
	damage = 1;
	armour = 1;
}

Entity::~Entity()
{

}

int Entity::UnitAttack()
{
	damage = damage - armour;
}

bool Entity::IsAlive()
{
	if (health > 0)
	{
		return health;
	}
	else
	{
		health = 0;
		std::cout << "Unit has perished!" << std::endl;
	}
}