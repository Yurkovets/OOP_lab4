#include "stdafx.h"
#include "Crocodile.h"


Crocodile::Crocodile(int tailLenght, int bodyLenght, int age, string name, string color, string breed,
					                string gender):Amphibia(bodyLenght,  age, name, breed, color, gender)
{
	this->tailLenght=tailLenght;
	cout<<"����������� ������������ ������ Crocodile";
}


Crocodile::~Crocodile()
{
	cout<<"���������� ������������ ������ Crocodile"<<endl;
}

void Crocodile::huntingForFish()
{
	cout<<"� ������� �� ���!"<<endl;
	
}
