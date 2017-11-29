/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15, 2017
 * Purpose: FeetInches Modification Class: Modify the FeetInches class discussed
 * in this chapter so it overloads the following operators:
 * <=, >=, !=.
 * Demonstrate the class’s capabilities in a simple program.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "feetinches.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    FeetInches one, two;
//Title
    cout<<"================================================="<<endl;
    cout<<"          FeetInches Modification Class"<<endl;
    cout<<"================================================="<<endl;
//Input Values
    cout<<"Enter a Distance in Feet and Inches: "<<endl;
	cin >> one;
    cout<<"================================================="<<endl;
    cout<<"Enter Another Distance in Feet and Inches: "<<endl;
	cin>>two;
//Process by mapping inputs to outputs
   
//Output Values
    cout<<"================================================="<<endl;
    if (one != two)
        cout<<"The two are not equal."<<endl;
    if (one >= two)
            cout<<one<<" is >= "<<two<<endl;
    if (one <= two)
        cout<<one<<" is <= "<<two<<endl;
    cout<<"================================================="<<endl;
//Exit stage right!
return 0;
}