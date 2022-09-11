#include "Employee.h"

Employee::Employee()
{
	salary = 0;
}

Employee::Employee(float salary, string name, int age):Person(name,age)
{
	this->salary = salary;
	
}

void Employee::setData(float salary, string name, int age)
{
	this->salary = salary;
	this->name = name;
	this->age = age;
}

void Employee::setSalary(float salary)
{
	this->salary = salary;
}

float Employee::getSalary()
{
	return salary;
} 

void Employee::printInfo()
{
	/*cout << "The Name is:  " << getName() << endl;
	cout << "The Age = " << getAge() << endl;*/
	//another way to access 
	Person::printInfo();
	cout << "The Salary = " << getSalary();
}


