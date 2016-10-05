#pragma once
#include"Animals.h"

class Bird:public Animals
{
public:
	int wingSize; //размер крыла 

	Bird(int, int, string, string, string, string);
	~Bird();

	void fly();
};

 