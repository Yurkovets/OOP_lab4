#pragma once
#include"Animals.h"


class Mammals:public Animals
{
	public:

	string subKingdom;

	Mammals(int, string, string, string, string, string);
	~Mammals();
	void run();
};

