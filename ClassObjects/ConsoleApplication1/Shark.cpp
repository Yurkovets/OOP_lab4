#include "stdafx.h"
#include "Shark.h"


Shark::Shark(int numberOfTeeth, int finLenght, int age, string name, string color,
			 string breed,string gender):Fish(finLenght, age, name, color, breed, gender)

{
	this->numberOfTeeth=numberOfTeeth;
	cout<<" онструктор производного класса Shark";
}


Shark::~Shark()
{
	cout<<"ƒеструктор производного класса Shark"<<endl;
}

void Shark::huntingForMollusks()
{
	cout<<"я охочусь на моллюсков"<<endl;
}
