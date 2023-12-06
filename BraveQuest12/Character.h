#pragma once
#include"common.h"
class Character
{


public:
	char* _pName;	// 名前

	Character(const char* pName);
	virtual ~Character();

protected:
	int state[6];
	const char* stateNam[6] = {
	"HP",//体力
	"NP",//マジックポイント
	"筋肉",//筋肉
	"頭脳",//頭のよさ
	"防御力",
	"行動値"};

protected:

	const char* skillCharNam[5] = {"体当たり","ホイミ","跳ねる","毒霧","デイソ"};//全キャラ共通のスキル
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
