#include "Person.h"

Person::Person()
{
	name = " ";
	age = 0;
}

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Person::setData(string name, int age)
{
	this->name = name;
	this->age = age;
}


void Person::setName(string name)
{
	this->name = name;
}

void Person::setAge(int age)
{	
		this->age = age;	
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

void Person::printInfo()
{
	cout << "The Name is:  " << getName() << endl;
	cout << "The Age = " << getAge() << endl;
}
