/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Calculates the BMI and indicate whether the person has optimal weight,
          is under- weight, or is overweight.
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
    float bmi,weight,height;
    string optmlw,underw,overw;
    //Input Values
    cout<<"This is a program calculates you BMI and then identifies if"<<endl;
    cout<<"you have optimal weight, underweight, or overweight."<<endl;
    cout<<"Enter your weight in pounds."<<endl;
    cin>>weight;
    cout<<"Enter your height in inches."<<endl;
    cin>>height;
    //Process by mapping inputs to outputs
    bmi=weight*703/(height*height);
    if(bmi>18.5 && bmi<=25){
        optmlw="You have an optimal weight.";
    }
    else if(bmi<18.5){
        underw="You are underweight.";
    }
    else if(bmi>25){
        overw="You are overweight.";
    }
    //Output Values
    cout<<"\t-------------------------------"<<endl;
    cout<<"\t  "<<optmlw;
    cout<<"   "<<underw;
    cout<<" "<<overw<<endl;
    cout<<"\t-------------------------------"<<endl;
    
    //Exit stage right!
    return 0;
}

