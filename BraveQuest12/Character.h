#pragma once
#include"common.h"
class Character
{


public:
	char* _pName;	// ���O

	Character(const char* pName);
	virtual ~Character();

protected:
	int state[6];
	const char* stateNam[6] = {
	"HP",//�̗�
	"NP",//�}�W�b�N�|�C���g
	"�ؓ�",//�ؓ�
	"���]",//���̂悳
	"�h���",
	"�s���l"};

protected:

	const char* skillCharNam[5] = {"�̓�����","�z�C�~","���˂�","�Ŗ�","�f�C�\"};//�S�L�������ʂ̃X�L��
	const int skillChar[5] = { 0,5,3,2,5 };
	bool SkillCheck[5] = { false };
protected:
	int taiatari();
	void hoimi();
	void haner();
	int poison();
	int dein();

public:
	int GetHP();
	int SpeedCheck();
	void DamageTrade(int Damege);
	void AllstateOpen();
	void SubStateOpen();
	const char* getName() const;

};
