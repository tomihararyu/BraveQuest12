#include <iostream>
#include"Character.h"
using namespace std;

void Character::DamageTrade(int Damege)
{
	if (Damege != 0)
	{
		state[HP] -= (Damege - state[DF]);
		cout << Damege - state[DF] << " ダメージ!!  " <<name<<"のHPが" << Damege - state[DF] << "減った" << endl;
	}
	
}
int Character::SpeedCheck()
{
	return state[DEX] ;
}
int Character::taiatari()
{
	cout <<name<<"の体当たり!! 衝撃で"<<name<<"のHPが"<<2<<"減った" << endl;
	state[HP] -= 2;
	return 10 + state[POW];
	
}
void Character::hoimi()
{
	state[HP] +=2 * state[INT] / 10;
	state[NP] -= skillChar[Hoim];
	cout  <<name<<"の回復!!" << endl;
	cout  << name<<"の" << stateNam[HP] << "が" << 2 * state[INT] / 10 << "回復した" << endl;
}
void Character::haner()
{
	cout << name << "の跳ねる!!" << endl;

	cout << name <<"は元気に跳ねている!!!" << endl;
}
int Character::poison()
{
	cout<<name  <<"の毒霧!!\n毒霧を吐いた"<<endl;
	state[NP] - skillChar[Poizn];
	return 28;

}
int Character::dein()
{
	cout <<name<<"のデイン!!" << endl;
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

