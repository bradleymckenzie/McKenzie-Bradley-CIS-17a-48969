/*
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Convert 0 to 20 Fahrenheit to Celsius
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
float celsius(float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float c=0.0f;
    //Input Values
    cout<<"\t\t  Celsius Temperature Table"<<endl;
    cout<<"\t\t\t   0 to 20"<<endl;
    cout<<"----------------------------------------------------------\n";
    for(int i=0; i<21; i++){
        c=celsius(i);
        cout<<" "<<setw(2)<<i<<" degrees Fahrenheit equals to "<<c
                <<" degrees Celsius"<<endl;
    }
    cout<<"----------------------------------------------------------\n";
    //Process by mapping inputs to outputs
    
    //Output Values
    
    //Exit stage right!
    return 0;
}

float celsius(float f){
    float c=0.0f;
    c=(5.0/9)*(f-32);
    return c;
}