#include "stdafx.h"
#include "Animals.h"

Animals::Animals(int age, string name, string breed, string color,string gender)
{
	this->age=age;
	this->name=name;
	this->breed=breed;
	this->color=color;
	this->gender=gender;
	cout<<"����������� ������������ ������ Animals"<<endl;
	objectCounter++;
}


Animals::~Animals()
{
	cout<<"���������� ������������ ������ Animals "<<endl;
	objectCounter--;
}


void Animals::Eat()
{
	cout<< "� ��!\n";
}

void Animals::Sleep()
{
	cout<< "� ����!\n";
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

