#include<iostream>
#include"Person.h"
#include"Employee.h"
#include"HourlyEmployee.h"

using namespace std;


int main()
{
	/*Person p;
	p.setName("alaa");
	p.getName();
	p.setAge(36);
	p.getAge();
	p.printInfo();
	cout << endl;
	cout << "*************************\n";
	p.setData("breadan", 35);
	p.printInfo();
	cout << endl;
	cout << "************************\n";

	Employee e;
	e.setData(200.3, "asd", 45);
	e.printInfo();
	cout << endl;
	cout << "/////////////////////\n";
	cout << endl;*/

	HourlyEmployee h;
	h.setData("alaa", 35, 50, 100, 2000);
	h.printInfo();

	HourlyEmployee m;
	string name;
	cin >> name;
	m.setName(name);
	cout<<m.getName();
	//m.setData()
//كملها




}
