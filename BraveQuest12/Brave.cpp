#include <iostream>
#include"brave.h"
using namespace std;

Brave::Brave() : Character("�E��")
{
	
}
Brave::Brave(const char* name):Character(name)
{
	state[HP] = 30;
	state[NP] = 19;
	state[POW] = 15;
	state[INT] = 12;
	state[DF] = 20;
	state[DEX] = 32;

	SkillCheck[TAIATARI] = true;
	SkillCheck[HOIM] = true;
	SkillCheck[DEIN] = true;
	SkillConstructorLook();
	
}
Brave::~Brave()
{

}

int Brave::attac()
{
	cout << endl;
	cout <<_pName<<"�̍s����I�����Ă��������B�@>" ;
	for (int i = 0; i < skillMAXnum; i++)
	{
			cout << i + 1 << "=" << skillCharNam[SkillProcess[i]] << ":NP=" << skillCharNP[SkillProcess[i]] << "   ";
	}
	int timp;
	for (;;)
	{
		cout << endl << "cin>>";
		cin >> timp;
		if (timp <= 0)
		{
			cout << "������x���͂��Ă��������B" << endl;
		}
		else if (timp <= skillMAXnum)
		{
			break;
		}
		else
		{
			cout << "������x���͂��Ă��������B" << endl;
		}
	}
	int dm = (this->*Skillpul[SkillProcess[timp-1]])();//this���ĂȂ񂾂�//�B�������炵��
	return dm;

}
