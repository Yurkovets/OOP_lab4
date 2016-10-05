#pragma once
#include<iostream>
using namespace std;

class AliveOrganisms
{
public:
	AliveOrganisms();
	~AliveOrganisms();
	virtual void Eat()=0;
	virtual void toConsole()=0;
};

