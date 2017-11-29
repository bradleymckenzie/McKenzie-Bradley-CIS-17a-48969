/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15, 2017
 * Purpose: Employee and ProductionWorker Classes: Design a class named
 * Employee. The class should keep the following information in Employee name, 
 * Employee number, Hire date.
 * Write one or more constructors and the appropriate accessor and mutator
 * functions for the class.
 * Next, write a class named ProductionWorker that is derived from the Employee
 * class. The ProductionWorker class should have member variables to hold the
 * following information: Shift (an integer), Hourly pay rate (a double).
 * The workday is divided into two shifts: day and night. The shift variable
 * will hold an integer value representing the shift that the employee works.
 * The day shift is shift 1, and the night shift is shift 2. Write one or more
 * constructors and the appropriate accessor and mutator functions for the
 * class. Demonstrate the classes by writing a program that uses a
 * ProductionWorker object.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "employee.h"
#include "productionworker.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void print(class Employee *);
void print2(class ProductionWorker *);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    Employee out;
    ProductionWorker pw("Bradley",111797, "11-20-17", 1, 12.25);
    string eName;//Employee Name
    int eNumber;//Employee Number
    string hDate;//Employee Hired Date
    int shift;
    float rate;
//Title
    cout<<"======================================"<<endl;
    cout<<"Employee and ProductionWorker Classes"<<endl;
    cout<<"======================================"<<endl;
//Input Values
    cout<<"Input a Employee Name: ";
    getline(cin, eName);
    
    cout<<"Input a Employee Number: ";
    cin>>eNumber;
    cin.ignore();
    
    cout<<"Input a Employee Hire Date: ";
    getline(cin, hDate);
    
    cout<<"Input a Employee Shift Worked: ";
    cin>>shift;
    
    cout<<"Input a Employee Pay Rate: ";
    cin>>rate;
    cout<<"======================================"<<endl;
//Process by mapping inputs to outputs
    out.setName(eName);
    out.setNumber(eNumber);
    out.setDate(hDate);
    
    pw.setShift(shift);
    pw.setRate(rate);
//Output Values
   print(&out);
   print2(&pw);
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
void print2(ProductionWorker *out)
{
    cout<<"Shift: "<<out->getShift()<<endl;
    cout<<"Pay Rate: $"<<out->getRate()<<endl;
}