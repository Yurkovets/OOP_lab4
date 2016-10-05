// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include"Animals.h"
#include"Amphibia.h"
#include"Bird.h"
#include"Mammals.h"
#include"Fish.h"
#include"Crocodile.h"
#include"Lion.h"
#include"Owl.h"
#include"Parrot.h"
#include"Shark.h"
#include"Tiger.h"
#include"Insects.h"
#include "Ant.h"
#include "Printer.h"

using namespace std;

float del(float *f)
{
	return *f/4;
}

int main()
{
	
	setlocale(LC_ALL,"rus");
	system("chcp 866");
	Animals Cat(5, "Barsick", "Britan", "Gray", "Male");
	Cat.Eat();
	Cat.Sleep();
	/*printf("\nИмя животного: %s",Cat.name); 
	printf("\nПол животного: %s",Cat.gender);
	printf("\nЦвет животного: %s",Cat.color);*/

	Amphibia lizard(12, 2,"Volodya","China","Green","Female");
	lizard.crawl();

	Bird eagle(12,10, "Inokkentij", "Belorus", "Black", "Male");
	eagle.Eat();
	eagle.fly();

	Mammals man(21, "eumetazoa", "Vasya", "Russian", "beige", "Male");
	man.run();

	Fish perch(13, 4,"Vova", "Belorus", "Blue", "Female");

	Crocodile oligator(12, 20, 10, "Petr", "India", "Green", "Male");
	oligator.huntingForFish();

	Lion aziaticLion(12,10, "Cat", "Leva", "Azia", "Yelow", "Male");
	aziaticLion.huntingForGazelles();

	Owl scopsOwl(12, 10, 5, "Sonya", "Belorus", "Gray", "Female");
	scopsOwl.huntingForMice();

	Parrot carell(100,10,12, "Kesha", "carell", "Red", "Male");
	carell.learnWods();
	carell.Eat();
	carell.fly();

	carell.checkFieldNestedClass();// проверяем поле вложенного класса
	
	Insects butterfly( 16, 1, "Alisa", "cabbage","White" , "Female");// методы из Animals недоступны из за protected наследования
	
	Ant Red(6, 4, 1, "Kostya", "Red", "Red", "Male");

	Red.getCountOfLegs();
	Red.getCountOfSegments();

	Animals Dog(5, "Bool", "German", "Gray", "Male");
	Instector wisGuy;
	wisGuy.iKnowAllAboutYou(Dog);// проверяем дружественный класс
	Curator change;
	change.iCanModify(Dog);

	cout<<"Количество объектов "<<Dog.getObjectCounter()<<endl;

	Animals *Kitty=new Animals(5, "Bool", "German", "Gray", "Male");//проверяем тип обекта
	Printer check;
	check.IAmPrinting(Kitty);

	int i1 = 7;
	const float i3 = 6;
	float i2;
	i2 = static_cast<float>(i1);
	cout << "\n" <<i2/2 << endl;
	cout << del(const_cast<float *>(&i3));

	Animals *pt;
	Bird *pc = new Bird(12,10, "Inokkentij", "Belorus", "Black", "Male");
	pt = dynamic_cast<Bird *>(pc);
	pt->toConsole();

	system("pause");

	return 0;
}

