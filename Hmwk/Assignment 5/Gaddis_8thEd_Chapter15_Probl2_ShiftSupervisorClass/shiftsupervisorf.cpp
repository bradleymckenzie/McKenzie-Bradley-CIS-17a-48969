/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 17th, 2017
 * Purpose: Shift Supervisor Class Function
 */

#include <iomanip>
#include <string>
#include "shiftsupervisor.h"
#include "employee.h"
using namespace std;

ShiftSupervisor::ShiftSupervisor(string eName, int eNumber, string hDate, float salary, float bonus):Employee (eName, eNumber, hDate)
{
    Salary = salary;
    Bonus = bonus;
}

void ShiftSupervisor::setSalary(float salary)
{
    Salary = salary;
}
void ShiftSupervisor::setBonus(float bonus)
{
    Bonus = bonus;
}

float ShiftSupervisor::getSalary()
{
    return (Salary);
}

float ShiftSupervisor::getBonus()
{
    return (Bonus);
}