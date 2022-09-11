#pragma once
#include "Person.h"
class Employee :
    public Person
{
protected:
    float salary;
public:
    Employee();
    Employee(float salary, string name, int age);
    void setData(float salary, string name, int age);
    void setSalary(float salary);
    virtual float getSalary();
    void printInfo();

};