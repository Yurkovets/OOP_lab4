#include "stdafx.h"
#include "Ant.h"


Ant::Ant(int countOfLegs, int countOfSegments, int age, string name, string breed, string color, string gender)
			:Insects(countOfSegments, age, name, breed,  color, gender)
{
	cout<<"Конструктор производного класса Ant"<<endl;
}


Ant::~Ant()
{
	cout<<"Деструктор производного класса Ant"<<endl;
}

void Ant::getCountOfLegs()
{
	cout<<"Количество ног "<<this->countOfLegs<<endl;
}

void Ant::getCountOfSegments()
{
	cout<<"Количество сегментов "<<this->countOfSegments<<endl;
}