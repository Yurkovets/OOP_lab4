#include "stdafx.h"
#include "Amphibia.h"


Amphibia::Amphibia(int bodyLength, int age, string name, string breed, string color, string gender):Animals(age, name, breed, color, gender)
{
	this->bodyLength=bodyLength;
	cout<<"Конструктор производного класса Amphibia";
}


Amphibia::~Amphibia()
{
	cout<<"Деструктор производного класса Amphibia"<<endl;
}

void Amphibia::crawl()
{
	cout<<"Я ползу!"<<endl;
	
}
