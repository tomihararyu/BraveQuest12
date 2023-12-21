#include <iostream>
#include"Zombie.h"
using namespace std;

Zombie::Zombie() : Character("ƒ]ƒ“ƒr")
{
	cout << "ŒÄ‚Î‚ê‚½1Z" << endl;
	state[HP] = (rand() % 11) + 50;
	state[NP] = (rand() % 6) +5;
	state[POW] = (rand() % 6) + 5;
	state[INT] = (rand() % 4) + 2;
	state[DF] = (rand() % 7) + 8;
	state[DEX] = (rand() % 15)+18 ;

	SkillCheck[TAIATARI] = true;
	SkillCheck[HANER] = true;
	SkillCheck[POIZN] = true;
	
	SkillConstructorLook();
}

Zombie::Zombie(const char* name) : Character(name)
{
	cout << "ŒÄ‚Î‚ê‚½2Z" << endl;
}
Zombie::~Zombie()
{

}
int Zombie::attac()
{
	int move = rand() % skillMAXnum;
	cout << "====================" << endl;
	return (this->*Skillpul[SkillProcess[move]])();;
}