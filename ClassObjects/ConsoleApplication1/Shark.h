#pragma once
#include"Fish.h"

class Shark:public Fish
{
	public:

	int numberOfTeeth; // ���������� �����

	Shark(int, int, int, string, string, string,string);
	~Shark();
	void huntingForMollusks();
};

