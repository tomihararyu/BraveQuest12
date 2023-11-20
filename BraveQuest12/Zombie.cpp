#include <iostream>
#include"Zombie.h"
using namespace std;

Zombie::Zombie()
{
	cout << "ƒ]ƒ“ƒr‚Ì¶¬" << endl;
	name = "ƒ]ƒ“ƒr" ;
	state[HP] = 60;
	state[NP] = 10;
	state[POW] = 20;
	state[INT] = 5;
	state[DF] = 15;
	state[DEX] = 20;

	SkillCheck[Taiatari] = true;
	SkillCheck[Haner] = true;
	SkillCheck[Poizn] = true;

}
int Zombie::attac()
{
	int move = rand() % 3;
	int timp=0;
	if (move+1 == 1)
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
	return timp;

}