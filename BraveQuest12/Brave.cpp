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

}
Brave::~Brave()
{

}

int Brave::attac()
{
	cout << endl;
	cout <<_pName<<"�̍s����I�����Ă��������B�@>" ;
	for (int i = 0; i < 5; i++)
	{
		if (SkillCheck[i] == true)
		{
			cout << i + 1 << "=" << skillCharNam[i] << ":NP=" << skillChar[i] << "   ";
		}
	}
	cout << endl << "cin>>";
	int getdm = 0;;
	for (;;)
	{
		int timp;
		cin >> timp;
		cout << endl;
		if (timp-1 ==TAIATARI)
		{
			getdm = taiatari();
			 break;
		}
		else if(timp-1==HOIM)
		{
			hoimi();
			break;
		}
		else if(timp-1==DEIN)
		{
			getdm = dein();
			break;
		}
		else
		{
			cout << "�Ԉ�����ԍ����w�肵�Ă��܂�" << endl;
		}
	}
	return getdm;
	
	

}
