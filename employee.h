#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
	// Private variabls to hold Employee data
	string name;
	string department;
	string position;
	int idNumber;

public:
	// Default constructor
	Employee()
	{
		name = "";
		department = "";
		position = "";
		idNumber = 0;
	}
	// Constructor #2
	Employee(string n, string d, string p, int i)
	{
		name = n;
		department = d;
		position = p;
		idNumber = i;
	}
	// Constructor #3
	Employee(string n, int i)
	{
		name = n;
		idNumber = i;
		department = "";
		position = "";
	}
	// Destructor
	~Employee()
	{}

	void setName(string n)
	{
		name = n;
	}

	void setIdnum(int i)
	{
		idNumber = i;
	}

	void setDeparment(string d)
	{
		department = d;
	}

	void setPosition(string p)
	{
		position = p;
	}

	string getName()
	{
		return name;
	}

	int getIdnum()
	{
		return idNumber;
	}

	string getPosition()
	{
		return position;
	}

	string getDepartment()
	{
		return department;
	}
};

#endif
