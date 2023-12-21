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
	int state[6];//�X�e�[�^�X�̎���
	const char* stateNam[12]//�X�e�[�^�X�̖��O
	 = {
	"HP",//�̗�
	"NP",//�}�W�b�N�|�C���g
	"�ؓ�",//�ؓ�
	"���]",//���̂悳
	"�h���",
	"�s���l"};
protected:
	int taiatari();//�̓�����
	int hoimi();//�z�C�~
	int haner();//���˂�
	int poison();//��
	int dein();//�f�C��
	int (Character::* Skillpul[5])(); // https://www7b.biglobe.ne.jp/~robe/cpphtml/html03/cpp03057.html //���Q�l�ɍ��܂���
protected:

	const char* skillCharNam[5] = { "�̓�����","�z�C�~","���˂�","�Ŗ�","�f�C�\" };//�X�L���̖��O�\��
	const int skillCharNP[5] = { 0,5,3,2,5 };//�X�L���̎g�p�ɂ�����NP
	bool SkillCheck[5] = { false };//�L�����N�^�[���X�L�����������Ă��邩
	int* SkillProcess;//�����Ă���X�L���̃i���o�[   //������new���Ă��邪�X�L���𑝂₷�Ƃ��ɂǂ����邩�l���Ă�
	int skillMAXnum;//�����Ă���X�L���̐�

protected:
	void ChangeName();//���O��ύX����֐�
	void SkillConstructorLook();//�������Ă���X�L���̃i���o�[��SkillProcess�ɓ����

public://��ɐ퓬�Ŏg�p����֐�
	int GetHP();//HP��Ԃ��֐�
	int SpeedCheck();//�X�s�[�h��Ԃ��֐�
	void DamageTrade(int Damege);//�_���[�W�̔���

public://�\���֐�
	void AllstateOpen();//�S�ẴX�e�[�^�X��\������֐�
	void SubStateOpen();//HP��NP������\������֐�
	void SkillOpen();//�X�L����\������֐�(������)
	const char* getName();//���O��\�����邽�߂̊֐�
	

};
