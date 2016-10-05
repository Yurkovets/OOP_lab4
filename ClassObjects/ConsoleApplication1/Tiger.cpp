#include "stdafx.h"
#include "Tiger.h"


Tiger::Tiger(int numberOfBands, int age, string subKingdom, string name, string color
			 , string breed, string gender):Mammals(age, subKingdom, name, color, breed, gender)
{
	this->numberOfBands=numberOfBands;
	cout<<" онструктор производного класса Tiger";
}


Tiger::~Tiger(void)
{
	cout<<"ƒеструктор производного класса Tiger"<<endl;
}

void Tiger::huntingForZebras()
{
	cout<<"я охочусь на зебр!"<<endl;
}
