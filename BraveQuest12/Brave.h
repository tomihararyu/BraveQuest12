#pragma once
#include"Character.h"
class Brave :public Character
{
public:
	Brave();
	Brave(const char* name);//�R���X�g���N�^�ŃX�e�[�^�X��ǉ��B
	virtual ~Brave();
public:
	int attac();

};