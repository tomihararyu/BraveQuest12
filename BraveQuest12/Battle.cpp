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
		cout << "�]���r�̃X�e�[�^�X" << endl;
		zombe.stateOpen();
		cout << endl;
		cout << "�E�҂̃X�e�[�^�X" << endl;
		brave.stateOpen();

		
		if (brave.SpeedCheck() >= zombe.SpeedCheck());
		{
			
			zombe.DamageTrade(brave.attac());
			next();
			cout << endl;
			cout << "�]���r��" << endl;
			brave.DamageTrade(zombe.attac());
			next();
		}
		if (brave.SpeedCheck() <= zombe.SpeedCheck())
		{
			cout << "�]���r��" << endl;
			brave.DamageTrade(zombe.attac());
			next();
			cout << endl;
			cout << "�E�҂̃^�[��" << endl;
			zombe.DamageTrade(brave.attac());
		}


		if (brave.GetHP() <= 0)
		{
			cout << "�]���r�̏���" << endl;
			break;
		}
		else if(zombe.GetHP() <=0)
		{
			cout << "�E�҂̏���" << endl;
			break;
		}
	}
	cout << "�퓬�I��" << endl;
	
}