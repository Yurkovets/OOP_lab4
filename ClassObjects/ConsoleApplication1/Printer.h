#pragma once
#include<iostream>
using namespace std;
#include "Animals.h"

class Printer
{
public:
	void IAmPrinting(Animals *t){
		t->toConsole();
		cout << "��� " << typeid(t).name() << endl;
	}
	
};

