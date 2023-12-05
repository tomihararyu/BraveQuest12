#pragma once
#include"Character.h"
class Zombie : public Character
{
public:
	Zombie();
	Zombie(const char* name);
	virtual ~Zombie();
public:
	int attac();
};