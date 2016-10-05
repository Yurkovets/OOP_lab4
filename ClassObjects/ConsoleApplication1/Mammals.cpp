#include "stdafx.h"
#include "Mammals.h"


Mammals::Mammals(int age, string name, string subKingdom, string color, string breed, string gender):Animals(age, name, color, breed, gender)
{
	this->subKingdom=subKingdom;
	cout<<"Конструктор производного класса Mammals";
}


Mammals::~Mammals()
{
	cout<<"Деструктор производного класса Mammals"<<endl;
}

void Mammals::run()
{
	cout<<"Я бегу!"<<endl;
}
