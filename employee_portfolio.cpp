// employee_portfolio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "employee.h"
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
	// Variables to hold Employee information.
	string name;
	string dept;
	string position;
	int id;
	
	// Manual input for employee #1.
	Employee emp1("Susan Meyers", "Accounting", "Vice President", 47899);
	
	// User input for employee #2.
	Employee emp2;

	cout << "Please enter the name of the employee: ";
	getline(cin, name);
	emp2.setName(name);

	cout << "Please enter the department of the employee: ";
	getline(cin, dept);
	emp2.setDeparment(dept);

	cout << "Please enter the position of the employee: ";
	getline(cin, position);
	emp2.setPosition(position);

	cout << "Please enter the ID number of the employee: ";
	cin >> id;
	emp2.setIdnum(id);
	
	// Name and ID number for employee #3 set during Employee object creation
	// then calling setDepartment and setPosition for the other data.
	Employee emp3("Joy Rogers", 81774);
	emp3.setDeparment("Manufacturing");
	emp3.setPosition("Engineer");

	// Display header
	cout << "Employee Information:\n";
	cout << "---------------------\n";

	// Display column headers
	cout << left << setw(20) << "Name";
	cout << left << setw(20) << "ID Number";
	cout << left << setw(20) << "Department";
	cout << left << setw(20) << "Position" << endl;

	cout << "---------------------------------------------------------------------------" << endl;

	// Display first employee
	cout << left << setw(20) << emp1.getName();
	cout << left << setw(20) << emp1.getIdnum();
	cout << left << setw(20) << emp1.getDepartment();
	cout << left << setw(20) << emp1.getPosition() << endl;

	// Display second employee
	cout << left << setw(20) << emp2.getName();
	cout << left << setw(20) << emp2.getIdnum();
	cout << left << setw(20) << emp2.getDepartment();
	cout << left << setw(20) << emp2.getPosition() << endl;

	// Display third employee
	cout << left << setw(20) << emp3.getName();
	cout << left << setw(20) << emp3.getIdnum();
	cout << left << setw(20) << emp3.getDepartment();
	cout << left << setw(20) << emp3.getPosition() << endl;

	return 0;
}


