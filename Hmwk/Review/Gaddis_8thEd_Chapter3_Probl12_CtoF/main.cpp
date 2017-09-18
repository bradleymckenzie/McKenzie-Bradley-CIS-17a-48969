/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Write a program that converts Celsius temperatures to Fahrenheit 
          temperatures.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
     float celsius, fahrenheit;
    //Input Values
     cout<<"       Celsius to Fahrenheit Converter:"<<endl;
     cout<<"What is the temperature measured in Celsius? ";
     cin>>celsius;
    //Process by mapping inputs to outputs
    fahrenheit = (9/5 * celsius) + 32;
    //Output Values
    cout<<"    --------------------------------------"<<endl;
    cout<<"     That would make the temperature: "<<fahrenheit<<endl;
    cout<<"     Fahrenheit."<<endl;
    cout<<"    -------------------------------------"<<endl;
    
    //Exit stage right!
    return 0;
}

