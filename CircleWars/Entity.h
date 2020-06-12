#pragma once
#include <string>
#include <iostream>

class Entity
{
public: 
	Entity();
	~Entity();

	char name[15];
	int health;
	int damage;
	int armour;

	virtual int UnitAttack();
	//virtual void
	bool IsAlive();

	
};
