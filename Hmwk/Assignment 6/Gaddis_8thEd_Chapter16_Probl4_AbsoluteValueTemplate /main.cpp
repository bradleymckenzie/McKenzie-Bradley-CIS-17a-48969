/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Absolute Value Template: Write a function template that accepts an
 * argument and returns its absolute value. The absolute value of a number is
 * its value with no sign. For example, the absolute value of  5 is 5, and the
 * absolute value of 2 is 2. Test the template in a simple driver program.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "absolute.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
float num;
//Input Values
cout<<"====================================="<<endl;//title
cout<<"       Absolute Value Template"<<endl;
cout<<"====================================="<<endl;
//Process by mapping inputs to outputs
cout<<"Absolute value finder,"<<endl;
cout<<"    input a number: ";
cin>>num;
//Output Values
cout<<"====================================="<<endl;//title
cout<<"               Results"<<endl;
cout<<"====================================="<<endl;
cout<<"The absolute value of "<<num<<" is "<<absolute(num)<<endl;
cout<<"====================================="<<endl;
//Exit stage right!
return 0;
}