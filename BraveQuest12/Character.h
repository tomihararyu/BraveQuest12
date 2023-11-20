#pragma once
class Character
{

public:
	string name;//どうしようもなかった

protected:
	int state[6];
	const char* stateNam[6] = {
	"HP",//体力
	"NP",//マジックポイント
	"パワー",//筋肉
	"INT"//頭のよさ
	"防御力",
	"敏捷"};//防御力

protected:

	const char* skillCharNam[5] = {"体当たり","ホイミ","跳ねる","毒霧","デイソ"};//全キャラ共通のスキル
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
