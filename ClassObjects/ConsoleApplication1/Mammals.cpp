#include "stdafx.h"
#include "Mammals.h"


Mammals::Mammals(int age, string name, string subKingdom, string color, string breed, string gender):Animals(age, name, color, breed, gender)
{
	this->subKingdom=subKingdom;
	cout<<"����������� ������������ ������ Mammals";
}


Mammals::~Mammals()
{
	cout<<"���������� ������������ ������ Mammals"<<endl;
}

void Mammals::run()
{
	cout<<"� ����!"<<endl;
}
