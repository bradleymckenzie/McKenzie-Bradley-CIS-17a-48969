/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 27, 2017
 Purpose: Midterm Problem 5: Using a byte variable, what is the largest
 * factorial that can be calculated. A factorial is simply 
 * n! = 1 * 2 * 3 * 4 ... * (n-2) * (n-1) * n
 * For instance, 1! = 1,  2! = 2,  3! = 6,  4! = 24,  5! = 120 etc....
 * 
 * What would be the largest factorial using short, int, long, float, 
 * double, etc...  Use all the primitive data types that you are familiar 
 * with signed as well as unsigned.
 * Note:  I want you to investigate this and the program you 
 * turn in should just print "cout" the final results.  You don't know 
 * how to capture errors yet so run each till it overflows then back off by 1.
 * Don't need the program that tests for this.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Title
cout<<"===================================="<<endl;
cout<<"         Data Type Program"<<endl;
cout<<"===================================="<<endl;

//Output Values
cout<<"Signed short Largest Factorial is 7 "<<endl;
cout<<"Signed int Largest Factorial is 12"<<endl;
cout<<"Signed long Largest Factorial is 12"<<endl;
cout<<"===================================="<<endl;
cout<<"Unigned short Largest Factorial is 8"<<endl;
cout<<"Unigned int Largest Factorial is 12"<<endl;
cout<<"Unigned long Largest Factorial is 12"<<endl;
cout<<"===================================="<<endl;
cout<<"float Largest Factorial is 34"<<endl;
cout<<"double Largest Factorial is 171"<<endl;
cout<<"===================================="<<endl;
//Exit stage right/free memory!

return 0;
}