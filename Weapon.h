#pragma once
#include "Item.h"

class Weapon:
	public Item {

private:
	int strength;
	
public:
	Weapon(int strength = 0, string name = "NONE", int value = 0);
	virtual~Weapon();
	//Pure virtual
	virtual Weapon* clone() const;

	//Functions
};


