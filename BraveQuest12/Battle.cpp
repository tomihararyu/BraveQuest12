#include <iostream>
#include"Battle.h"
using namespace std;

void next()
{
	int timp;
	cout << "『次へ』 >" ;
	cin >> timp;
}
void Battle::battleStart(Brave& brave, Zombie* pzombe)
{
	const int BasicPspeed = brave.SpeedCheck();
	const int BasicEspeed = pzombe->SpeedCheck();
	int Pspeed = BasicPspeed;
	int Espeed = BasicEspeed;
	bool ActionValue=true;//複数モンスターに対応できるように将来的にはint型にする
	cout << "バトル開始" << endl;
	cout << pzombe->getName() << "のステータス" << endl;
	pzombe->AllstateOpen();
	cout << endl;
	cout << brave.getName() << "のステータス" << endl;
	brave.AllstateOpen();
	for (;;)
	{
		if (ActionValue == false)
		{
			Pspeed -= 5;//マイナスの数字は考えてる途中
			if (Espeed < BasicEspeed)
			{
				Espeed = BasicEspeed;
			}
		}
		if (ActionValue == true)
		{
			Espeed -= 5;
			if (Pspeed < BasicPspeed)
			{
				Pspeed = BasicPspeed;
			}
		}
		cout << "\n\n現在の行動速度:" << brave.getName() << "=" << Pspeed << "　" << pzombe->getName() << "=" << Espeed << endl;
		if (Espeed<=Pspeed)
		{
			pzombe->DamageTrade(brave.attac());
			next();
			ActionValue = false;
		}
		else
		{
			brave.DamageTrade(pzombe->attac());
			next();
			ActionValue = true;
		}
		if (brave.GetHP() <= 0)
		{
			cout << brave.getName() << "の敗北" << endl;
			break;
		}
		else if(pzombe->GetHP() <=0)
		{
			cout << pzombe->getName() << "の勝利" << endl;
			break;
		}
		pzombe->SubStateOpen();
		cout << endl;
		brave.SubStateOpen();

	}
	cout << "戦闘終了" << endl;
	
}