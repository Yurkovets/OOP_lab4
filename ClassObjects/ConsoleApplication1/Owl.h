#pragma once
#include"Bird.h"

class Owl:public Bird
{
	public:
	int beakLenght;// ����� ����� 

	Owl(int, int, int, string, string, string, string);
	~Owl();
	void huntingForMice();// ����� �� �����
};

