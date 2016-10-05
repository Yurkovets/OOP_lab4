#include "stdafx.h"
#include "Lion.h"


Lion::Lion(int lenghtOfMane, int age, string subKingdom, string name, string color, string breed, 
		                        string gender):Mammals(age, subKingdom, name, color, breed, gender)
{
	this->leghtOfMane=leghtOfMane;
	cout<<" онструктор производного класса Lion";
}


Lion::~Lion(void)
{
	cout<<"ƒеструктор производного класса Lion"<<endl;
}

void Lion::huntingForGazelles()
{
	cout<<"я охочусь на газелей"<<endl;

}
