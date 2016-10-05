#pragma once
#include"Mammals.h"

class Tiger:public Mammals
{
	public:

	int numberOfBands;// количество полос 

	Tiger(int, int, string, string, string, string, string);
	~Tiger();
	void huntingForZebras();
};



