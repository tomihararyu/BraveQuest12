#include <iostream>
#include"Battle.h"
using namespace std;

void next()
{
	int timp;
	cout << "�w���ցx >" ;
	cin >> timp;
}
void Battle::battleStart(Brave& brave, Zombie* pzombe)
{
	const int BasicPspeed = brave.SpeedCheck();
	const int BasicEspeed = pzombe->SpeedCheck();
	int Pspeed = BasicPspeed;
	int Espeed = BasicEspeed;
	bool ActionValue=true;//���������X�^�[�ɑΉ��ł���悤�ɏ����I�ɂ�int�^�ɂ���
	cout << "�o�g���J�n" << endl;
	cout << pzombe->getName() << "�̃X�e�[�^�X" << endl;
	pzombe->AllstateOpen();
	cout << endl;
	cout << brave.getName() << "�̃X�e�[�^�X" << endl;
	brave.AllstateOpen();
	for (;;)
	{
		if (ActionValue == false)
		{
			Pspeed -= 5;//�}�C�i�X�̐����͍l���Ă�r��
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
		cout << "\n\n���݂̍s�����x:" << brave.getName() << "=" << Pspeed << "�@" << pzombe->getName() << "=" << Espeed << endl;
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
			cout << brave.getName() << "�̔s�k" << endl;
			break;
		}
		else if(pzombe->GetHP() <=0)
		{
			cout << pzombe->getName() << "�̏���" << endl;
			break;
		}
		pzombe->SubStateOpen();
		cout << endl;
		brave.SubStateOpen();

	}
	cout << "�퓬�I��" << endl;
	
}