#pragma once
#include"Mammals.h"

class Tiger:public Mammals
{
	public:

	int numberOfBands;// ���������� ����� 

	Tiger(int, int, string, string, string, string, string);
	~Tiger();
	void huntingForZebras();
};



