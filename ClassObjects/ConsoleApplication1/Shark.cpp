#include "stdafx.h"
#include "Shark.h"


Shark::Shark(int numberOfTeeth, int finLenght, int age, string name, string color,
			 string breed,string gender):Fish(finLenght, age, name, color, breed, gender)

{
	this->numberOfTeeth=numberOfTeeth;
	cout<<"����������� ������������ ������ Shark";
}


Shark::~Shark()
{
	cout<<"���������� ������������ ������ Shark"<<endl;
}

void Shark::huntingForMollusks()
{
	cout<<"� ������� �� ���������"<<endl;
}
