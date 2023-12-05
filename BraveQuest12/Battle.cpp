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
		cout << zombe.getName() << "のステータス" << endl;
		zombe.stateOpen();
		cout << endl;
		cout << brave.getName() << "のステータス" << endl;
		brave.stateOpen();
		
		if (brave.SpeedCheck() >= zombe.SpeedCheck());
		{
			
			zombe.DamageTrade(brave.attac());
			next();
			cout << endl;
			brave.DamageTrade(zombe.attac());
			next();
		}
		if (brave.SpeedCheck() <= zombe.SpeedCheck())
		{

			brave.DamageTrade(zombe.attac());
			next();
			cout << endl;
			zombe.DamageTrade(brave.attac());
		}


		if (brave.GetHP() <= 0)
		{
			cout << zombe.getName() << "の勝利" << endl;
			break;
		}
		else if(zombe.GetHP() <=0)
		{
			cout << brave.getName() << "の勝利" << endl;
			break;
		}
	}
	cout << "戦闘終了" << endl;
	
}