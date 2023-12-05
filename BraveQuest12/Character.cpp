#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

#include"Character.h"
using namespace std;


Character::Character(const char* pName) {
	_pName = new char[strlen(pName) + 1];
	strcpy(_pName, pName);
}

Character::~Character()
{
	if (_pName != nullptr)
	{
		delete _pName;
		_pName = nullptr;
	}
}
const char* Character::getName() const
{
	return _pName;
}
void Character::DamageTrade(int Damege)
{
	if (Damege != 0)
	{
		if (0 != Damege - Damege / 100 * 100)
		{
			static int TurnContinuation = Damege - Damege / 100 * 100;
			if (0 != TurnContinuation)
			{

				static int DamegeContinuation = Damege / 100;
				cout << "継続ダメージで" << DamegeContinuation << "ダメージ入ります" << endl;
				state[HP] -= DamegeContinuation;
			}
		}
		state[HP] -= (Damege/100 - state[DF]);
		cout << Damege - state[DF] << " ダメージ!!  "<<_pName <<"のHPが" << Damege - state[DF] << "減った" << endl;
	}
	
}
int Character::SpeedCheck()
{
	return state[DEX] ;
}
int Character::taiatari()
{
	cout << _pName <<"の体当たり!! 衝撃で" << _pName <<"のHPが"<<2<<"減った" << endl;
	state[HP] -= 2;
	return 10 + state[POW]*100;
	
}
void Character::hoimi()
{
	state[HP] +=2 * state[INT] / 10;
	state[NP] -= skillChar[Hoim];
	cout << _pName <<"の回復!!" << endl;
	cout << _pName <<"の" << stateNam[HP] << "が" << 2 * state[INT] / 10 << "回復した" << endl;
}
void Character::haner()
{
	cout << _pName << "の跳ねる!!" << endl;

	cout << _pName <<"は元気に跳ねている!!!" << endl;
}
int Character::poison()
{
	cout << _pName <<"の毒霧!!\n毒霧を吐いた"<<endl;
	state[NP] - skillChar[Poizn];
	return 23*100+3;

}
int Character::dein()
{
	cout << _pName <<"のデイン!!" << endl;
	state[NP] - skillChar[Dein];
	return 12 + state[INT]*100;

}
int Character::GetHP()
{
	return state[HP];
}
void Character::stateOpen()
{
	for (int i = 0; i < 5; i++)
	{
		cout << stateNam[i] << "=" << state[i]<<" ";
	}
	cout << endl;
}

