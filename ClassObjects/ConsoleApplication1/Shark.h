#pragma once
#include"Fish.h"

class Shark:public Fish
{
	public:

	int numberOfTeeth; // количество зубов

	Shark(int, int, int, string, string, string,string);
	~Shark();
	void huntingForMollusks();
};

