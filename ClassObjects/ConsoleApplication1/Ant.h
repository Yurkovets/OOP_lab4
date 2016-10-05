#pragma once
#include<iostream>
using namespace std;
#include "Insects.h"

class Ant:public Insects
{
public:
	Ant(int, int, int, string, string, string, string);
	~Ant();
	void getCountOfLegs();
	void getCountOfSegments();
};

