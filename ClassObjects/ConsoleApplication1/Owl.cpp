#include "stdafx.h"
#include "Owl.h"


Owl::Owl(int beakLenght, int wingSize, int age, string name, string breed, string color, string gender):Bird(wingSize, age, name, breed, color, gender)
{
	this->beakLenght;
	cout<<"����������� ������������ ������ Owl";
}


Owl::~Owl(void)
{
	cout<<"���������� ������������ ������ Owl"<<endl;
}

void Owl::huntingForMice()
{
	cout<<"� ������� �� �����"<<endl;
}
