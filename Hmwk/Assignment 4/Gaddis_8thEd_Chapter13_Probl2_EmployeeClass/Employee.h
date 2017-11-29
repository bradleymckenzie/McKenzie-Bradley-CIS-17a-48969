/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 16th, 2017
 * Purpose: Employment Class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iomanip>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        int idNumber;
        string department;
        string position;
    public:
	void setName(string);
        void setID(int);
	void setPosition(string);
        void setDepartment(string);
		
	int getID();
	string getName();
	string getDepartment();
	string getPosition();
	
	Employee();
	Employee(string, string, string, int);
};

#endif /* EMPLOYEE_H */

