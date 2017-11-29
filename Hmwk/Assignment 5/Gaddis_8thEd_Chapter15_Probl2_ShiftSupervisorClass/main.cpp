/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 17, 2017
 * Purpose: Shift Supervisor Class: In a particular factory a shift supervisor
 * is a salaried employee who supervises a shift. In addition to a salary, the
 * shift supervisor earns a yearly bonus when his or her shift meets production
 * goals. Design a ShiftSupervisor class that is derived from the Employee class
 * you created in Programming Challenge 1. The ShiftSupervisor class should have
 * a member variable that holds the annual salary and a member variable that
 * holds the annual production bonus that a shift supervisor has earned. Write
 * one or more constructors and the appropriate accessor and mutator functions
 * for the class. Demonstrate the class by writing a program that uses a
 * ShiftSupervisor object.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "employee.h"
#include "shiftsupervisor.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void print(class Employee *);
void print2(class ShiftSupervisor *);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    Employee out;
    ShiftSupervisor ss("Bradley",111797, "11-20-17", 30000, 4000);
    string eName;//Employee Name
    int eNumber;//Employee Number
    string hDate;//Employee Hired Date
    float salary;
    float bonus;
//Title
    cout<<"======================================"<<endl;
    cout<<"       Shift Supervisor Class"<<endl;
    cout<<"======================================"<<endl;
//Input Values
    cout<<"Input a Employee Name: ";
    getline(cin, eName);
    
    cout<<"Input a Employee Number: ";
    cin>>eNumber;
    cin.ignore();
    
    cout<<"Input a Employee Hire Date: ";
    getline(cin, hDate);
    
    cout<<"Input a Employee Annual Salary: ";
    cin>>salary;
    
    cout<<"Input a Employee Annual Bonus: ";
    cin>>bonus;
    cout<<"======================================"<<endl;
//Process by mapping inputs to outputs
    out.setName(eName);
    out.setNumber(eNumber);
    out.setDate(hDate);
    
    ss.setSalary(salary);
    ss.setBonus(bonus);
//Output Values
   print(&out);
   print2(&ss);
   cout<<"======================================"<<endl;
//Exit stage right!
return 0;
}

void print(Employee *out)
{
    cout<<"Employee: "<<out->getName()<<endl;
    cout<<"Employee Number: "<<out->getNumber()<<endl;
    cout<<"Employee Hire Date: "<<out->getDate()<<endl;
}
void print2(ShiftSupervisor *out)
{
    cout<<"Employee Annual Salary: $"<<out->getSalary()<<endl;
    cout<<"Employee Annual Bonus: $"<<out->getBonus()<<endl;
}