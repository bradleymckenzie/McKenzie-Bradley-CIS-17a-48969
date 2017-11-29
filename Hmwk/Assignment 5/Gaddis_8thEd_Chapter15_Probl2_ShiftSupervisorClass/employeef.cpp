/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: Employee Class Function
 */

#include <iomanip>
#include <string>
#include "employee.h"
using namespace std;

Employee::Employee()
{
    eName="";
    eNumber = 0;
    hDate="";
}
Employee::Employee(string eName, int eNumber, string hDate)
{
    this->eName = eName;
    this->eNumber = eNumber;
    this->hDate = hDate;
}
void Employee::setName(string eName)
{
    this->eName = eName;
}
void Employee::setNumber(int eNumber)
{
    this->eNumber = eNumber;
}
void Employee::setDate(string hDate)
{
    this->hDate = hDate;
}
string Employee::getName()
{
    return eName;
}
int Employee::getNumber()
{
    return eNumber;
}
string Employee::getDate()
{
    return hDate;
}