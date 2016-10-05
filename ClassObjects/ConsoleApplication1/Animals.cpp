#include "stdafx.h"
#include "Animals.h"

Animals::Animals(int age, string name, string breed, string color,string gender)
{
	this->age=age;
	this->name=name;
	this->breed=breed;
	this->color=color;
	this->gender=gender;
	cout<<"Конструктор производного класса Animals"<<endl;
	objectCounter++;
}


Animals::~Animals()
{
	cout<<"Деструктор производного класса Animals "<<endl;
	objectCounter--;
}


void Animals::Eat()
{
	cout<< "Я ем!\n";
}

void Animals::Sleep()
{
	cout<< "Я сплю!\n";
}

void Animals::setCountOfMySecret()
{
	this->countOfMySecret=10;
	
}

int Animals::getObjectCounter()
{
	return objectCounter;
}

int Animals::objectCounter=0;

