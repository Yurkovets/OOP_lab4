#include "stdafx.h"
#include "Tiger.h"


Tiger::Tiger(int numberOfBands, int age, string subKingdom, string name, string color
			 , string breed, string gender):Mammals(age, subKingdom, name, color, breed, gender)
{
	this->numberOfBands=numberOfBands;
	cout<<"����������� ������������ ������ Tiger";
}


Tiger::~Tiger(void)
{
	cout<<"���������� ������������ ������ Tiger"<<endl;
}

void Tiger::huntingForZebras()
{
	cout<<"� ������� �� ����!"<<endl;
}
