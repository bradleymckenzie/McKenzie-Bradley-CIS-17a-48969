/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 17th, 2017
 * Purpose: Shift Supervisor Class
 */

#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include <iomanip>
#include <string>
#include "employee.h"
#include "shiftsupervisor.h"

using namespace std;

class ShiftSupervisor:public Employee{
    private:
        float Salary;
        float Bonus;
    public:
        ShiftSupervisor(string, int, string , float, float);
        void setSalary(float);
        void setBonus(float);
        float getSalary();
        float getBonus();
};
#endif /* SHIFTSUPERVISOR_H */

