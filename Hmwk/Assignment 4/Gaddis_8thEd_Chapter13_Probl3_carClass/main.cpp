/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 18, 2017
 * Purpose: car Class: Write a class named Car that has the following member
 * variables:...In addition, the class should have the following constructor and
 * other member functions. Demonstrate the class in a program that creates a Car
 * object, and then calls the accelerate function five times. After each call to
 * the accelerate function, get the current speed of the car and display it.
 * Then, call the brake function five times. After each call to the brake
 * function, get the current speed of the car and display it.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "Car.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
int year;
string make;
//Input Values
cout<<"========================================"<<endl;
cout<<"\t   Car Class Program"<<endl;
cout<<"========================================"<<endl;
cout<<"Enter the Year of Model: ";
    cin>>year;
    cin.ignore();
cout<<"Enter the Make: ";
    getline(cin,make);
//Process by mapping inputs to outputs
Car car(year, make);
//Output Values
cout<<"======================================="<<endl;
cout<<"\t\tResults"<<endl;
cout<<"========================================"<<endl;
cout<<"Your "<<car.getYear()<<" "<<car.getMake()<<" is going "<<car.getSpeed()<<" MPH."<<endl;
    for (int i=0;i<5;i++) {
        car.accelerate();
    }
    cout<<"Your Car is Now Traveling at: "<<car.getSpeed()<<" MPH."<<endl;
    for (int i=0;i<5;i++) {
        car.brake();
    }
    cout<<"Your Car is Now Traveling at: "<<car.getSpeed()<<" MPH."<<endl;
cout<<"========================================"<<endl;
//Exit stage right!
return 0;
}