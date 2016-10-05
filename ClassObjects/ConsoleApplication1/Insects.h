#pragma once
#include<iostream>
using namespace std;
#include "Animals.h"

class Insects:protected Animals
{
public:
	static const int countOfLegs=8;
	Insects( int, int, string, string, string, string);
	~Insects();
protected:
	int countOfSegments;

};

