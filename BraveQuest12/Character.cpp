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
		cout <<timp << " �_���[�W!!  "<<_pName <<"��HP��" << state[HP] << "��"<<timp<<"������"<<state[HP]-timp<<"�ɂȂ���" << endl;
		state[HP] -= timp;
	}
	
}
int Character::SpeedCheck()
{
	return state[DEX] ;
}
int Character::taiatari()
{
	cout << _pName <<"�̑̓�����!! �Ռ���" << _pName <<"��HP��"<<2<<"������\n" << endl;
	state[HP] -= 2;
	return 6 + state[POW];
	
}
void Character::hoimi()
{
	state[HP] += 2 * state[INT] / 10;
	state[NP] -= skillChar[HOIM];
	cout << _pName <<"�̉�!!" << endl;
	cout << _pName <<"��" << stateNam[HP] << "��" << 2 * state[INT] / 10 << "�񕜂���" << endl;
}
void Character::haner()
{
	cout << _pName << "�̒��˂�!!" << endl;

	cout << _pName <<"�͌��C�ɒ��˂Ă���!!!" << endl;
}
int Character::poison()
{
	cout << _pName <<"�̓Ŗ�!!\n�Ŗ���f����"<<endl;
	state[NP] -= skillChar[POIZN];
	return 23;

}
int Character::dein()
{
	cout << _pName <<"�̃f�C��!!" << endl;
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

