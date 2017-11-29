/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 16, 2017
 * Purpose: Employee Class: Write a class named Employee that has the following
 * member variables:
 * ...
 * Write appropriate mutator functions that store values in these member
 * variables and accessor functions that return the values in these member
 * variables. Once you have written the class, write a separate program that
 * creates three Employee objects to hold the following data.
 * ...
 * The program should store this data in the three objects and then display the
 * data for each employee on the screen.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "Employee.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void print(class Employee *show);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t       Employee Class"<<endl;
cout<<"\t============================"<<endl;

//Process by mapping inputs to outputs
Employee E1("Susan Meyers", "Accounting", "Vice President", 47899);
Employee E2("Mark Jones", "IT", "Programmer", 39119);
Employee E3("Joy Rogers", "Manufacturing", "Engineer", 81774);	
//Output Values
print(&E1);
cout<<endl;
print(&E2);
cout<<endl;
print(&E3);
//Exit stage right!
return 0;
}

void print(Employee *E)
{
    cout<<setw(21)<<"Name: "<<E->getName()<< endl;
    cout<<setw(21)<<"ID: " <<E->getID()<<endl;
    cout<<setw(21)<<"Department: "<<E->getDepartment()<<endl;
    cout<<setw(21)<<"Position: "<<E->getPosition()<<endl;
    cout<<"\t============================";
}