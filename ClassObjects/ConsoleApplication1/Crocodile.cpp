#include "stdafx.h"
#include "Crocodile.h"


Crocodile::Crocodile(int tailLenght, int bodyLenght, int age, string name, string color, string breed,
					                string gender):Amphibia(bodyLenght,  age, name, breed, color, gender)
{
	this->tailLenght=tailLenght;
	cout<<" онструктор производного класса Crocodile";
}


Crocodile::~Crocodile()
{
	cout<<"ƒеструктор производного класса Crocodile"<<endl;
}

void Crocodile::huntingForFish()
{
	cout<<"я охочусь на рыб!"<<endl;
	
}
