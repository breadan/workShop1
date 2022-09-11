#include "HourlyEmployee.h"



HourlyEmployee::HourlyEmployee()
{
	numH = 0;
	hourRat = 0;
}



HourlyEmployee::HourlyEmployee(string name, int age, int numH, float hourRat, float salary):Employee(salary,name,age)
{
	this->numH = numH;
	this->hourRat = hourRat;
}


void HourlyEmployee::setData(string name, int age, int numH, float hourRat, float salary)
{
	this->name = name;
	this->age = age;
	this->numH = numH;
	this->hourRat = hourRat;
	this->salary = salary;
}

void HourlyEmployee::setnumH(int numH)
{
	this->numH = numH;
}

void HourlyEmployee::setRat(float hourRat)
{
	this->hourRat = hourRat;

}

int HourlyEmployee::getNumH()
{
	return numH;
}

float HourlyEmployee::getRat()
{
	return hourRat;
}


void HourlyEmployee::printInfo()
{
	//Person::printInfo();لا تناديها لانها داخل كلاس الموظف
	Employee::printInfo();
	cout << endl;
	cout << "The numH is " << getNumH() << endl;
	cout << "The Hour Rat = " << getRat() << endl;
	

}
