/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Write a program that will convert U.S. dollar amounts to Japanese yen 
          and to euros, storing the conversion factors in the constants YEN_PER_DOLLAR 
          and EUROS_PER_ DOLLAR. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = 0.74;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float dollar;
    float dToYen;
    float dToEros;
    //Input Values
    cout<<"       Celsius to Fahrenheit Converter:"<<endl;
    cout<<"       Insert amount of U.S dollar: $";
    cin>>dollar; 
    //Process by mapping inputs to outputs
    dToYen = dollar * YEN_PER_DOLLAR;
    dToEros = dollar * EUROS_PER_DOLLAR;
    //Output Values
    cout<<"             -----------------"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"               Yen: "<<dToYen<<endl;
    cout<<"               Euros: "<< dToEros<<endl;
    cout<<"             -----------------"<<endl;
    
    //Exit stage right!
    return 0;
}

