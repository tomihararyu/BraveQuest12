#include <iostream>
#include"Battle.h"
using namespace std;

void next()
{
	int timp;
	cout << "『次へ』" << endl;
	cin >> timp;
}
void Battle::battleStart(Brave& brave, Zombie& zombe)
{
	for (;;)
	{
		cout << "ゾンビのステータス" << endl;
		zombe.stateOpen();
		cout << endl;
		cout << "勇者のステータス" << endl;
		brave.stateOpen();

		
		if (brave.SpeedCheck() >= zombe.SpeedCheck());
		{
			
			zombe.DamageTrade(brave.attac());
			next();
			cout << endl;
			cout << "ゾンビの" << endl;
			brave.DamageTrade(zombe.attac());
			next();
		}
		if (brave.SpeedCheck() <= zombe.SpeedCheck())
		{
			cout << "ゾンビの" << endl;
			brave.DamageTrade(zombe.attac());
			next();
			cout << endl;
			cout << "勇者のターン" << endl;
			zombe.DamageTrade(brave.attac());
		}


		if (brave.GetHP() <= 0)
		{
			cout << "ゾンビの勝利" << endl;
			break;
		}
		else if(zombe.GetHP() <=0)
		{
			cout << "勇者の勝利" << endl;
			break;
		}
	}
	cout << "戦闘終了" << endl;
	
}