#include "stdafx.h"
#include "Amphibia.h"


Amphibia::Amphibia(int bodyLength, int age, string name, string breed, string color, string gender):Animals(age, name, breed, color, gender)
{
	this->bodyLength=bodyLength;
	cout<<"����������� ������������ ������ Amphibia";
}


Amphibia::~Amphibia()
{
	cout<<"���������� ������������ ������ Amphibia"<<endl;
}

void Amphibia::crawl()
{
	cout<<"� �����!"<<endl;
	
}
