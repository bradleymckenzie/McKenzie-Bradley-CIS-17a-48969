/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Write a program that will predict the size of a population of 
          organisms. The program should ask the user for the starting number of 
          organisms, their average daily population increase (as a percentage),
          and the number of days they will multiply. A loop should display the
          size of the population for each day.
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
    //Declare Variables
    float startO, avgIncr, dayIncr, finishO;
    //Input Values
    cout<<"Predict the Size of a Population of Organisms:"<<endl;
    cout<<"\tInput the starting number of organisms: ";
    cin>>startO;
    while(startO <= 2){
        cout<<"Enter a number greater than 2: ";
        cin>>startO;
    }
    cout<<"\tInput the average daily population increase (%): ";
    cin>>avgIncr;
    while(avgIncr < 0){
        cout<<"Enter a non-negative number: ";
        cin>>avgIncr;
    }
    cout<<"\tInput the number of days of increase: ";
    cin>>dayIncr;
    while(dayIncr <= 0){
        cout<<"Enter a number greater than 0: ";
        cin>>dayIncr;
    }
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<"     ---------------------Results---------------------"<<endl;
    for (int i = 1; i <= dayIncr; i++)
    {
        // increase population size by the percentage of population increase
        finishO += startO * avgIncr;
        cout<<setw(20)<<"Day "<<setw(2)<<i<<": Population is: "<<finishO<<endl;
    }
    //Exit stage right!
    return 0;
}

