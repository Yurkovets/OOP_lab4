#pragma once
#include"Animals.h"

class Fish: public Animals 
{
	public:

	int finLenght;// ����� �������� 

	Fish(int, int, string, string, string,string );
	~Fish();
	void swim();
};

