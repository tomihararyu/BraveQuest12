#pragma once
class Character
{

public:
	string name;//�ǂ����悤���Ȃ�����

protected:
	int state[6];
	const char* stateNam[6] = {
	"HP",//�̗�
	"NP",//�}�W�b�N�|�C���g
	"�p���[",//�ؓ�
	"INT"//���̂悳
	"�h���",
	"�q��"};//�h���

protected:

	const char* skillCharNam[5] = {"�̓�����","�z�C�~","���˂�","�Ŗ�","�f�C�\"};//�S�L�������ʂ̃X�L��
	const int skillChar[5] = { 0,5,3,2,5 };
	bool SkillCheck[5] = { false };

	const int HP=0, NP=1, POW=2, INT=3, DF=4, DEX=5;
	const int Taiatari=0, Hoim=1, Haner=2, Poizn=3, Dein=4;
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
	void stateOpen();


};
