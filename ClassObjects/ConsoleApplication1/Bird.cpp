#include "stdafx.h"
#include "Bird.h"


Bird::Bird(int wingSize, int age, string name, string breed, string color, string gender):Animals(age,name, breed, color, gender)
{
	this->wingSize=wingSize;
	cout<<"����������� ������������ ������ Bird";
}


Bird::~Bird()
{
	cout<<"���������� ������������ ������ Bird"<<endl;
}

void Bird::fly()
{
	cout<<"� ����!"<<endl;
	
}