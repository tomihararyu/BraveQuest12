#include <iostream>
#include"brave.h"
using namespace std;

Brave::Brave()
{
	cout << "ゲームを開始します" << endl;
	name = "勇者";
	state[HP] = 30;
	state[NP] = 19;
	state[POW] = 15;
	state[INT] = 12;
	state[DF] = 20;
	state[DEX] = 32;

	SkillCheck[Taiatari] = true;
	SkillCheck[Hoim] = true;
	SkillCheck[Dein] = true;

}

int Brave::attac()
{
	cout <<name<<"の行動を選択してください。" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (SkillCheck[i] == true)
		{
			cout << i + 1 << "=" << skillCharNam[i]<<" ";
		}
	}
	cout << endl;
	int getdm = 0;;
	for (;;)
	{
		int timp;
		cin >> timp;
		if (timp-1 ==Taiatari)
		{
			getdm = taiatari();
			 break;
		}
		else if(timp-1==Hoim)
		{
			hoimi();
			break;
		}
		else if(timp-1==Dein)
		{
			getdm = dein();
			break;
		}
		else
		{
			cout << "間違ってます" << endl;
		}
	}
	return getdm;
	
	

}
