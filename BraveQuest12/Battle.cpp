#include <iostream>
#include"Battle.h"
using namespace std;

void next()
{
	int timp;
	cout << "�w���ցx" << endl;
	cin >> timp;
}
void Battle::battleStart(Brave& brave, Zombie& zombe)
{
	for (;;)
	{
		cout << zombe.getName() << "�̃X�e�[�^�X" << endl;
		zombe.stateOpen();
		cout << endl;
		cout << brave.getName() << "�̃X�e�[�^�X" << endl;
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
			cout << zombe.getName() << "�̏���" << endl;
			break;
		}
		else if(zombe.GetHP() <=0)
		{
			cout << brave.getName() << "�̏���" << endl;
			break;
		}
	}
	cout << "�퓬�I��" << endl;
	
}