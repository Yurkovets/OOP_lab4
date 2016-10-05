#pragma once
#include"Animals.h"

class Fish: public Animals 
{
	public:

	int finLenght;// длина плавника 

	Fish(int, int, string, string, string,string );
	~Fish();
	void swim();
};

