/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Total Template: Write a template for a function called total. The
 * function should keep a running total of values entered by the user, then
 * return the total. The argument sent into the function should be the number of
 * values the function is to read. Test the template in a simple driver program
 * that sends values of various types as arguments and displays the results.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "total.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
int size;
//Input Values
cout<<"====================================="<<endl;//title
cout<<"           Total Template"<<endl;
cout<<"====================================="<<endl;
cout<<"Enter Size of Array of Numbers: ";
cin>>size;
//Process by mapping inputs to outputs
total<float>(size);
//Output Values
cout<<"====================================="<<endl;
//Exit stage right!
return 0;
}