#include "stdafx.h"
#include "Fish.h"


Fish::Fish(int finLenght, int age, string name , string color, string breed, string gender ):Animals(age, name, color, breed, gender)
{
	this->finLenght=finLenght;
	cout<<" онструктор производного класса Fish";
}


Fish::~Fish()
{
	cout<<"ƒеструктор производного класса Fish"<<endl;
}

void Fish::swim()
{
	cout<<"я плыву!"<<endl;
	
}
