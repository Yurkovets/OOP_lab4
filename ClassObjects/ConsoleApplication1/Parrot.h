#pragma once
#include"Bird.h"

class Parrot:public Bird
{
public:
	int numberOfWodsLearned;// ���������� ��������� ����
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
		void CallOuterClass(Parrot a)// ����� ������ �������� ������
		{
			a.learnWods();
		}
	};
	
	Zoo Kesha;
	void checkFieldNestedClass() // ��������� ���� ���������� ������
	{
		if(Kesha.fromZoo) cout<<"Yes!"<<endl;
		else cout<<"No!"<<endl;
	}

};

