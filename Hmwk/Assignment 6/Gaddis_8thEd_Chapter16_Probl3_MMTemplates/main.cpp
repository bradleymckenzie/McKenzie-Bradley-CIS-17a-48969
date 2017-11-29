/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Minimum/Maximum Templates: Write templates for the two functions
 * minimum and maximum. The minimum function should accept two arguments and
 * return the value of the argument that is the lesser of the two. The maximum
 * function should accept two arguments and return the value of the argument
 * that is the greater of the two. Design a simple driver program that
 * demonstrates the templates with various data types.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "templates.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
int x;
int y;
//Input Values
cout<<"====================================="<<endl;//title
cout<<"      Minimum/Maximum Templates"<<endl;
cout<<"====================================="<<endl;
//Process by mapping inputs to outputs
cout<<"Input a number for x: ";
cin>>x;
cout<<"Input a number for y: ";
cin>>y;
//Output Values
cout<<"====================================="<<endl;//title
cout<<"               Results"<<endl;
cout<<"====================================="<<endl;
cout<<"The minimum of "<<x<<" and "<<y<<" is "<<minimum(x, y)<<endl;
cout<<"The maximum of "<<x<<" and "<<y<<" is "<<maximum(x, y)<<endl;
cout<<"====================================="<<endl;
//Exit stage right!
return 0;
}