/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 17th, 2017
 * Purpose: Employ Functions
 */

#include <iomanip>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee()
{
    name="";
    idNumber = 0;
    department="";
    position = "";
}

Employee::Employee(string name, string department, string position, int idNumber)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}

void Employee::setID(int idNumber)
{
    this->idNumber = idNumber;
}
void Employee::setName(string name)
{
    this->name = name;
}
void Employee::setDepartment(string department)
{
    this->department = department;
}
void Employee::setPosition(string position)
{
    this->position = position;
}
int Employee::getID()
{
    return idNumber;
}
string Employee::getName()
{
    return name;
}
string Employee::getDepartment()
{
    return department;
}
string Employee::getPosition()
{
    return position;
}
