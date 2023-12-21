#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

#include"Character.h"
using namespace std;


Character::Character(const char* pName) {
	_pName = new char[strlen(pName) + 1];
	strcpy(_pName, pName);

	Skillpul[0] = &Character::taiatari;
	Skillpul[1] = &Character::hoimi;
	Skillpul[2] = &Character::haner;
	Skillpul[3] = &Character::poison;
	Skillpul[4] = &Character::dein;


}
Character::~Character()
{
	if (_pName != nullptr)
	{
		delete _pName;
		_pName = nullptr;
	}
	if (SkillProcess != nullptr)
	{
		delete SkillProcess;
		SkillProcess = nullptr;
	}
}
void Character::SkillConstructorLook()
{
	int timp = 0;
	for (int i = 0; i < 5; i++)
	{
		if (SkillCheck[i] == true)
		{
			timp++;
		}
	}

	skillMAXnum = timp;

	SkillProcess = new int[skillMAXnum];
	int j = 0;
	for (int i = 0; i < 5; i++)
	{
		if (SkillCheck[i] == true)
		{
			SkillProcess[j] = i;
			j++;
		}
	}
}
const char* Character::getName() 
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
int Character::hoimi()
{
	state[HP] += 2 * state[INT] / 10;
	state[NP] -= skillCharNP[HOIM];
	cout << _pName <<"�̉�!!" << endl;
	cout << _pName <<"��" << stateNam[HP] << "��" << 2 * state[INT] / 10 << "�񕜂���" << endl;
	return 0;
}
int Character::haner()
{
	cout << _pName << "�̒��˂�!!" << endl;

	cout << _pName <<"�͌��C�ɒ��˂Ă���!!!" << endl;
	return 0;
}
int Character::poison()
{
	cout << _pName <<"�̓Ŗ�!!\n�Ŗ���f����"<<endl;
	state[NP] -= skillCharNP[POIZN];
	return 23;

}
int Character::dein()
{
	cout << _pName <<"�̃f�C��!!" << endl;
	state[NP] -= skillCharNP[DEIN];
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
void Character::ChangeName()
{
	char* TimpName;
	TimpName = new char[50];
	cout << "�ύX�O�̖��O >" << _pName << endl << endl;
	cout << "�ύX��̖��O >";
	for (;;)
	{
		cin >> TimpName;
		int timp;
		cout << TimpName << "�ŗǂ��ł����H ����=1 �@������x=1�ȊO" << endl;
		cout << ">";
		cin >> timp;
		if (timp == 1)
		{
			break;
		}
	}
	delete _pName;

	_pName = new char[strlen(TimpName)+1];
	_pName = TimpName;

	cout << "���O���w" << _pName << "�x�ɂȂ�܂����B" << endl;
	

}


