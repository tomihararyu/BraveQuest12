#include <iostream>
#include"Zombie.h"
using namespace std;

Zombie::Zombie() : Character("ƒ]ƒ“ƒr")
{
	state[HP] = (rand() % 11) + 50;
	state[NP] = (rand() % 6) +5;
	state[POW] = (rand() % 6) + 5;
	state[INT] = (rand() % 4) + 2;
	state[DF] = (rand() % 7) + 8;
	state[DEX] = (rand() % 15)+18 ;

	SkillCheck[TAIATARI] = true;
	SkillCheck[HANER] = true;
	SkillCheck[POIZN] = true;
}

Zombie::Zombie(const char* name) : Character(name)
{


}
Zombie::~Zombie()
{

}
int Zombie::attac()
{
	int move = rand() % 3;
	int timp=0;
	if (move + 1 == 1)
	{
		timp = taiatari();
	}
	else if(move+1 == 2)
	{
		haner();
	}
	else if(move+1 == 3)
	{
		timp = poison();
	}
	else
	{
		cout << "—áŠO‚ª”­¶" << endl;
	}
	cout << "====================" << endl;
	return timp;

}