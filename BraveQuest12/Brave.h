#pragma once
#include"Character.h"
class Brave :public Character
{
public:
	Brave();
	Brave(const char* name);//コンストラクタでステータスを追加。
	virtual ~Brave();
public:
	int attac();

};