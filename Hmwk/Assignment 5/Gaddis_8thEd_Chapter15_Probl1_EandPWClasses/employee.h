/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: Employment Class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iomanip>
#include <string>
using namespace std;

class Employee{
    private:
        string eName;
        int eNumber;
        string hDate;
    public:
	void setName(string);
        void setNumber(int);
	void setDate(string);
	
	string getName();
	int getNumber();
	string getDate();
	
	Employee();
	Employee(string, int, string);
};

#endif /* EMPLOYEE_H */