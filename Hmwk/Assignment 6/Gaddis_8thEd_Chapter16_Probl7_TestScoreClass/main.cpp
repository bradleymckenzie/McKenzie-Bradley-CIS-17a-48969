/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: Test Scores Class: Write a class named TestScores. The class
 * constructor should accept an array of test scores as its argument. The class
 * should have a member function that returns the aver- age of the test scores.
 * If any test score in the array is negative or greater than 100, the class
 * should throw an exception. Demonstrate the class in a program.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries
#include "testscores.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
int x = 10;
int *scores = new int[x];
scores[0] = 94;
scores[1] = 84;
scores[2] = 73;
scores[3] = -44;
scores[4] = 98;
scores[5] = 87;
scores[6] = 97;
scores[7] = 86;
scores[8] = 45;
scores[9] = 92;
//Input Values
cout<<"========================================================"<<endl;//title
cout<<"                   Test Scores Program"<<endl;
cout<<"========================================================"<<endl;
TestScores scoreSet(scores,x);
try{
    scoreSet.average();
}
catch (string excStr){
    cout<<excStr<<endl;
}
delete[] scores;
//Process by mapping inputs to outputs

//Output Values
cout<<"========================================================"<<endl;
cout<<"                         Results"<<endl;
cout<<"========================================================"<<endl;
scoreSet.print();
cout<<"========================================================"<<endl;
//Exit stage right!
return 0;
}