#include <iostream>
#include"Character.h"
using namespace std;

void Character::DamageTrade(int Damege)
{
	if (Damege != 0)
	{
		state[HP] -= (Damege - state[DF]);
		cout << Damege - state[DF] << " �_���[�W!!  " <<name<<"��HP��" << Damege - state[DF] << "������" << endl;
	}
	
}
int Character::SpeedCheck()
{
	return state[DEX] ;
}
int Character::taiatari()
{
	cout <<name<<"�̑̓�����!! �Ռ���"<<name<<"��HP��"<<2<<"������" << endl;
	state[HP] -= 2;
	return 10 + state[POW];
	
}
void Character::hoimi()
{
	state[HP] +=2 * state[INT] / 10;
	state[NP] -= skillChar[Hoim];
	cout  <<name<<"�̉�!!" << endl;
	cout  << name<<"��" << stateNam[HP] << "��" << 2 * state[INT] / 10 << "�񕜂���" << endl;
}
void Character::haner()
{
	cout << name << "�̒��˂�!!" << endl;

	cout << name <<"�͌��C�ɒ��˂Ă���!!!" << endl;
}
int Character::poison()
{
	cout<<name  <<"�̓Ŗ�!!\n�Ŗ���f����"<<endl;
	state[NP] - skillChar[Poizn];
	return 28;

}
int Character::dein()
{
	cout <<name<<"�̃f�C��!!" << endl;
	state[NP] - skillChar[Dein];
	return 12 + state[INT];

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

