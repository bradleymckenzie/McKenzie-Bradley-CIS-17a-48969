/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 11, 2017
 * Purpose: Day of the Year Modification Class: Modify the DayOfYear class,
 * written in Programming Challenge 2, to add a constructor that takes two
 * parameters: a string object representing a month and an integer in the range
 * 0 through 31 representing the day of the month. The constructor should then
 * initialize the integer member of the class to represent the day specified by
 * the month and day of month parameters. The constructor should terminate the
 * program with an appropriate error message if the number entered for a day is
 * outside the range of days for the month given.
 * Add the following overloaded operators:
 *      ++ prefix and postfix increment operators. These operators should modify
 * the DayOfYear object so that it represents the next day. If the day is
 * already the end of the year, the new value of the object will represent the
 * first day of the year.
 *      −− prefix and postfix decrement operators . These operators should
 * modify the DayOfYear object so that it represents the previous day. If the
 * day is already the first day of the year, the new value of the object will
 * represent the last day of the year.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "doty.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    string month;
    int day;
//Title
    cout<<"==============================================="<<endl;
    cout<<"     Day of the Year Modification Class"<<endl;
    cout<<"==============================================="<<endl;
//Input Values
    cout<<"Input a Month of the Year to Output: ";
    cin>>month;
    
    cout<<"Input a Day of the Month to Output: ";
    cin>>day;
    
//Process by mapping inputs to outputs
     DayOfYear date1(month,day);
    DayOfYear date2;
    DayOfYear date3;
    date2 = date1++;
    date3 = date1--;
//Output Values
    cout<<"Month "<<month<<" and Day "<<day<<" is Equal to (++): ";
            date2.print();
    cout<<"Month "<<month<<" and Day "<<day<<" is Equal to (--): ";
            date3.print();
//Exit stage right!
return 0;
}