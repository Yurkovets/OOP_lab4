#include "stdafx.h"
#include "Ant.h"


Ant::Ant(int countOfLegs, int countOfSegments, int age, string name, string breed, string color, string gender)
			:Insects(countOfSegments, age, name, breed,  color, gender)
{
	cout<<"����������� ������������ ������ Ant"<<endl;
}


Ant::~Ant()
{
	cout<<"���������� ������������ ������ Ant"<<endl;
}

void Ant::getCountOfLegs()
{
	cout<<"���������� ��� "<<this->countOfLegs<<endl;
}

void Ant::getCountOfSegments()
{
	cout<<"���������� ��������� "<<this->countOfSegments<<endl;
}