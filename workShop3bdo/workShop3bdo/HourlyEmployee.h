#pragma once
#include "Employee.h"
class HourlyEmployee :
    public Employee
{
private:
    int numH;
    float hourRat;
public:
    HourlyEmployee();
    HourlyEmployee(string name, int age, int numH, float hourRat, float salary);
    void setData(string name, int age, int numH, float hourRat, float salary);
    void setnumH(int numH);
    void setRat(float hourRat);
    int getNumH();          
    float getRat();
    void printInfo();
       
    
};

