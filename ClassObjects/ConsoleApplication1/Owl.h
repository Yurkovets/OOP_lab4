#pragma once
#include"Bird.h"

class Owl:public Bird
{
	public:
	int beakLenght;// длина клюва 

	Owl(int, int, int, string, string, string, string);
	~Owl();
	void huntingForMice();// охота на мышей
};

