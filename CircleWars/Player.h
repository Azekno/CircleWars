#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	

	void PlayerName(std::string playerInput);
	void PlayerHealth();
	int UnitAttack();
};
