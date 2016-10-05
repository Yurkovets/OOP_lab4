#include "stdafx.h"
#include "Bird.h"


Bird::Bird(int wingSize, int age, string name, string breed, string color, string gender):Animals(age,name, breed, color, gender)
{
	this->wingSize=wingSize;
	cout<<"Конструктор производного класса Bird";
}


Bird::~Bird()
{
	cout<<"Деструктор производного класса Bird"<<endl;
}

void Bird::fly()
{
	cout<<"Я лечу!"<<endl;
	
}