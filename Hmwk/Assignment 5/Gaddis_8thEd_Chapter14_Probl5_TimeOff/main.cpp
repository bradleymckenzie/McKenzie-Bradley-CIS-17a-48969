/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 11, 2017
 * Purpose: Day of the Year Class:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "timeoff.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    string inputName;
    int inputID;
    int sickTaken;
    int vacTaken;
    int unpaidTaken;
    const int MAX_SICK_DAYS = 20;
    const int MAX_VACATION = 10;
    const int MAX_UNPAID = 10;
//Title
    cout<<"===================================================="<<endl;
    cout<<"                    Time Off Class"<<endl;
    cout<<"===================================================="<<endl;
//Input Values
    cout<<"Input Name: ";
        cin>>inputName;
    cout<<"Enter ID Number: ";
        cin>>inputID;
    cout<<"Sicks Days Taken: ";
	cin>>sickTaken;
    cout<<"Vacations Days Taken: ";
	cin>>vacTaken;
    cout<<"Unpaid Vacation Days Taken: ";
	cin>>unpaidTaken;
    cout<<"===================================================="<<endl;
//Process by mapping inputs to outputs
    
//Output Values
    if(sickTaken > MAX_SICK_DAYS){
       cout<<"Number of sicks taken is exceeding the limit!"<<endl;
    }else{
       cout<<"Number of sicks taken haven't exceeded the limit."<<endl;
    }
    if(vacTaken > MAX_VACATION){
        cout<<"Number of vacation taken is exceeding the limit!"<<endl;
    }else{
        cout<<"Number of vacation hasn't exceeded the limit."<<endl;
    }
    if(unpaidTaken > MAX_UNPAID){
        cout<<"Number of unpaid vacation is exceeding the limit!"<<endl;
    }else{
        cout<<"Number of unpaid vacation hasn't exceeded the limit."<<endl;
    };
    cout<<"===================================================="<<endl;
//Exit stage right!
return 0;
}