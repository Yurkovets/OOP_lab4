#pragma once
#include"Animals.h"

class Amphibia:public Animals
{
	public:
	int  bodyLength;// длина туловища

	Amphibia(int, int, string, string, string, string);
	~Amphibia();
	void crawl();
};

