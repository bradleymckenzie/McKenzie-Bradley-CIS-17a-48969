/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on August 29, 2017
 * Purpose: Write a program that asks the user to enter the month 
   (letting the user enter an integer in the range of 1 through 12) and the 
   year. The program should then display the number of days in that month. 
   Use the following criteria to identify leap years: 
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int month;
    unsigned int year;
    //Input Values
    cout<<"Enter the Number of the Month: ";
    cin>>month;
    
    if (month >= 1 && month <= 12)
    {
        cout<<"Value out of range."<<endl;
        cin>>month;
    }
    else cin>>month;
    
    cout<<"Enter the Year: ";
    cin>>year;
    //Process by mapping inputs to outputs
    
    //Output Values
    
    //Exit stage right!
    return 0;
}