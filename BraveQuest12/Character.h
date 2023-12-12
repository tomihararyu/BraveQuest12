#pragma once
#include"common.h"
class Character
{
public:
	Character(const char* pName); 
	virtual ~Character();

public:
	char* _pName;	// ���O

protected:
	int state[6];
	const char* stateNam[12] = {
	"HP",//�̗�
	"NP",//�}�W�b�N�|�C���g
	"�ؓ�",//�ؓ�
	"���]",//���̂悳
	"�h���",
	"�s���l"};
protected:
	int taiatari();
	int hoimi();
	int haner();
	int poison();
	int dein();
	int skillPush[5] = { taiatari(),hoimi(),haner(),poison(),dein() };
protected:

	const char* skillCharNam[5] = { "�̓�����","�z�C�~","���˂�","�Ŗ�","�f�C�\" };//�S�L�������ʂ̃X�L��
	const int skillCharNP[5] = { 0,5,3,2,5 };
	bool SkillCheck[5] = { false };
	int* SkillProcess;
	int skillMAXnum;

protected:
	void ChangeName();
	void SkillConstructorLook();

public:
	int GetHP();
	int SpeedCheck();
	void DamageTrade(int Damege);
	void AllstateOpen();
	void SubStateOpen();
	const char* getName() const;
	

};
