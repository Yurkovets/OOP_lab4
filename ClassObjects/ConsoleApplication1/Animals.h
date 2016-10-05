#pragma once
#include<iostream>
using namespace std;
#include "AliveOrganisms.h"

class Instector;
class Animals;
class Curator;


class Animals:virtual public AliveOrganisms
{

private:
	static int objectCounter;
	int countOfMySecret;
	friend Instector;
	friend Curator;
	//friend  void Curator::iCanModify(Animals&);
public:
	int age;
	string gender;
	string breed, color, name;
	static int getObjectCounter();
	void toConsole()
	{
		cout<<"Количество объектов животных: "<<objectCounter<<endl;
	}


Animals(int, string, string, string, string);
	
~Animals();
void Eat();
void Sleep();
void setCountOfMySecret();
};

class Instector
{
public:
	void iKnowAllAboutYou(Animals& any)
	{
		any.setCountOfMySecret();
		cout<<"Количество секретов:"<<any.countOfMySecret<<" "<<endl;
    }

};

class Curator 
{
public:
	void iCanModify(Animals& every)
	{
		every.setCountOfMySecret();
		every.countOfMySecret=15;
		cout<<"Новое значение:"<<every.countOfMySecret<<endl;
	}
	
};



