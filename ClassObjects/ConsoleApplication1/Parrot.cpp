#include "stdafx.h"
#include "Parrot.h"


Parrot::Parrot(int numberOfWodsLearned, int wingSize, int age, string name, string color, 
			   string  breed, string gender):Bird(wingSize, age, name, color, breed, gender)
{
	this->numberOfWodsLearned=numberOfWodsLearned;
	cout<<"Конструктор производного класса Parrot";
}


Parrot::~Parrot(void)
{
	cout<<"Деструктор производного класса Parrot"<<endl;
}

void Parrot::learnWods()
{
	cout<<"Я учу слова!"<<endl;
}
