#pragma once
#include<iostream>
#include <string>
using namespace std;



class Person
{
protected:
	string name;
	int age;
public:
	Person();	
	Person(string name, int age);	
	void setData(string name, int age);
	void setName(string name);	
	void setAge(int age);
	string getName();	
	int getAge();
	//to overrid at class Employee
	virtual void printInfo();		
};

