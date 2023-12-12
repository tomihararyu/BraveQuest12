#include <iostream>
#include"brave.h"
using namespace std;

Brave::Brave() : Character("勇者")
{
	cout << "呼ばれた" << endl;
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
Brave::Brave(const char* name):Character(name)
{
	cout << "呼ばれた" << endl;
}
Brave::~Brave()
{

}

int Brave::attac()
{
	cout << endl;
	cout <<_pName<<"の行動を選択してください。　>" ;
	for (int i = 0; i <= skillMAXnum; i++)
	{
			cout << i + 1 << "=" << skillCharNam[SkillProcess[i]] << ":NP=" << skillCharNP[SkillProcess[i]] << "   ";
	}
	cout << endl << "cin>>";
	int getdm = 0;;
	for (;;)
	{
		int timp;
		cin >> timp;
		cout << endl;
		bool check = false;
		for (int i = 0; i <= skillMAXnum; i++)
		{
			if (timp == i + 1)
			{
				getdm = skillPush[SkillProcess[timp]];
				check = true;
			}
		}
		if (true == check)
		{
			break;
		}
		else if (false == check)
		{
			cout << "番号が不一致です。" << endl;
			continue;
		}
		else
		{
			cout << "バグが発生" << endl;
		}
	}
	return getdm;
	
	

}
