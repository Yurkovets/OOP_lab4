#include "stdafx.h"
#include "Fish.h"


Fish::Fish(int finLenght, int age, string name , string color, string breed, string gender ):Animals(age, name, color, breed, gender)
{
	this->finLenght=finLenght;
	cout<<"����������� ������������ ������ Fish";
}


Fish::~Fish()
{
	cout<<"���������� ������������ ������ Fish"<<endl;
}

void Fish::swim()
{
	cout<<"� �����!"<<endl;
	
}
