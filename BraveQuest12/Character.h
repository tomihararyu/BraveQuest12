#pragma once
#include"common.h"
class Character
{
public:
	Character(const char* pName); 
	virtual ~Character();

public:
	char* _pName;	// 名前

protected:
	int state[6];
	const char* stateNam[12] = {
	"HP",//体力
	"NP",//マジックポイント
	"筋肉",//筋肉
	"頭脳",//頭のよさ
	"防御力",
	"行動値"};
protected:
	int taiatari();
	int hoimi();
	int haner();
	int poison();
	int dein();
	int skillPush[5] = { taiatari(),hoimi(),haner(),poison(),dein() };
protected:

	const char* skillCharNam[5] = { "体当たり","ホイミ","跳ねる","毒霧","デイソ" };//全キャラ共通のスキル
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
