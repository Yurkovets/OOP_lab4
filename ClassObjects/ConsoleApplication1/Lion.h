#pragma once
#include "Mammals.h"

class Lion:public Mammals
{
	public:

	int leghtOfMane; // ����� �����

	Lion(int, int, string, string, string, string, string );
	~Lion();
	void huntingForGazelles();
};

