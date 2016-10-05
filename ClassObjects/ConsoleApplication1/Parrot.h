#pragma once
#include"Bird.h"

class Parrot:public Bird
{
public:
	int numberOfWodsLearned;// количество выученных слов
	Parrot(int, int, int, string, string, string, string);
	~Parrot();
	void learnWods();

	class Zoo 
	{
		public:
		bool fromZoo;
		void setZoo(bool Kesha)
		{
			this->fromZoo=Kesha;
		}
		void CallOuterClass(Parrot a)// вызов метода внешнего класса
		{
			a.learnWods();
		}
	};
	
	Zoo Kesha;
	void checkFieldNestedClass() // проверить поле вложенного класса
	{
		if(Kesha.fromZoo) cout<<"Yes!"<<endl;
		else cout<<"No!"<<endl;
	}

};

