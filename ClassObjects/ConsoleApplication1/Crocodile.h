#pragma once
#include"Amphibia.h"

class Crocodile:public Amphibia
{
	public:

	int tailLenght;

	Crocodile(int, int, int, string, string, string, string);
	~Crocodile();
	void huntingForFish();//охота на рыб
	
};

