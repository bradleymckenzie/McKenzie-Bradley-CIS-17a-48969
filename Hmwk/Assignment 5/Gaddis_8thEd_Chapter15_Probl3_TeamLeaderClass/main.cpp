/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 17, 2017
 * Purpose: Team Leader Class: In a particular factory, a team leader is an
 * hourly paid production worker who leads a small team. In addition to hourly
 * pay, team leaders earn a fixed monthly bonus. Team leaders are required to
 * attend a minimum number of hours of training per year. Design a TeamLeader
 * class that extends the ProductionWorker class you designed in Programming
 * Challenge 1. The TeamLeader class should have member variables for the
 * monthly bonus amount, the required number of training hours, and the number
 * of training hours that the team leader has attended. Write one or more
 * constructors and the appropriate accessor and mutator functions for the
 * class. Demonstrate the class by writing a program that uses a TeamLeader
 * object.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "teamleader.h"
#include "productionworker.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void print(class TeamLeader *);
void print2(class ProductionWorker *);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    TeamLeader out(1, 22.05, 1.05, 5, 6);
    int shift;
    float rate;
    float bonus;
    int training;
    int leader;
//Title
    cout<<"============================================"<<endl;
    cout<<"            Team Leader Class"<<endl;
    cout<<"============================================"<<endl;
//Input Values
    cout<<"Input Team Leader Shift Worked: ";
    cin>>shift;
    cout<<"Input Team Leader Pay Rate: ";
    cin>>rate;
    cout<<"Input Team Leader Monthly Bonus: ";
    cin>>bonus;
    cout<<"Input Team Leader Training Hours: ";
    cin>>training;
    cout<<"Input Team Leader Number of Hours Trains: ";
    cin>>leader;
    cout<<"============================================"<<endl;
//Process by mapping inputs to outputs
    out.setShift(shift);
    out.setRate(rate);
    out.setBonus(bonus);
    out.setTraining(training);
    out.setLeader(leader);
//Output Values
   print(&out);
   cout<<"============================================"<<endl;
//Exit stage right!
return 0;
}

void print(TeamLeader *out)
{
    cout<<"Team Leader Shift Worked: "<<out->getShift()<<endl;
    cout<<"Team Leader Pay Rate: $"<<out->getRate()<<endl;
    cout<<"Team Leader Monthly Bonus: "<<out->getBonus()<<endl;
    cout<<"Team Leader Training Hours: "<<out->getTraining()<<endl;
    cout<<"Team Leader Number of Hours Trains: "<<out->getLeader()<<endl;
}