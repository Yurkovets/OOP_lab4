#include "stdafx.h"
#include "Insects.h"


Insects::Insects(int countOfSegments, int age, string name, string breed, string color, string gender)
											:Animals(age,name, breed, color, gender)
{
	this->countOfSegments=countOfSegments;
	cout<<"Конструктор производного класса Insects"<<endl;
}


Insects::~Insects()
{
	cout<<"Деструктор производного класса Insects"<<endl;
}
