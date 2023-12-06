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
		const int timp = (Damege - state[DF]) + rand() % 3;
		cout <<timp << " ダメージ!!  "<<_pName <<"のHPが" << state[HP] << "が"<<timp<<"減って"<<state[HP]-timp<<"になった" << endl;
		state[HP] -= timp;
	}
	
}
int Character::SpeedCheck()
{
	return state[DEX] ;
}
int Character::taiatari()
{
	cout << _pName <<"の体当たり!! 衝撃で" << _pName <<"のHPが"<<2<<"減った\n" << endl;
	state[HP] -= 2;
	return 6 + state[POW];
	
}
void Character::hoimi()
{
	state[HP] += 2 * state[INT] / 10;
	state[NP] -= skillChar[HOIM];
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
	state[NP] -= skillChar[POIZN];
	return 23;

}
int Character::dein()
{
	cout << _pName <<"のデイン!!" << endl;
	state[NP] -= skillChar[DEIN];
	return 10 + state[INT];

}
int Character::GetHP()
{
	return state[HP];
}
void Character::AllstateOpen()
{
	cout << "====================" << endl;
	cout << _pName<<":: ";
	for (int i = 0; i <= 5; i++)
	{
		cout << stateNam[i] << "=" << state[i] << " ";
	}
	cout << "\n====================" << endl;
}
void Character::SubStateOpen()
{
	cout << "====================" << endl;
	cout << _pName << ":: ";
	for (int i = 0; i <= 1; i++)
	{
		cout << stateNam[i] << "=" << state[i] << " ";
	}
	cout << "\n====================" << endl;
}

