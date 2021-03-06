/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 11, 2017
 * Purpose: Day of the Year Class: Assuming that a year has 365 days, write a
 * class named DayOfYear that takes an inte- ger representing a day of the year
 * and translates it to a string consisting of the month followed by day of the
 * month. For example, Day 2 would be January 2.
 *                     Day 32 would be February 1.
 *                     Day 365 would be December 31.
 * The constructor for the class should take as parameter an integer
 * representing the day of the year, and the class should have a member function
 * print() that prints the day in the month–day format. The class should have an
 * integer member variable to repre- sent the day and should have static member
 * variables holding string objects that can be used to assist in the
 * translation from the integer format to the month-day format.
 * Test your class by inputting various integers representing days and printing
 * out their representation in the month–day format.
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
    int day;
//Title
    cout<<"======================================"<<endl;
    cout<<"         Day of the Year Class"<<endl;
    cout<<"======================================"<<endl;
//Input Values
    cout<<"Input a Day of the Year to Output: ";
    cin>>day;
    while(day <= 0 || day > 365){
        cout<<"Must enter a valid day (1-365): ";
        cin>>day;
    }
//Process by mapping inputs to outputs
    DayOfYear dYear;
//Output Values
    cout<<"  Day "<<day<<" is: ";
            dYear.print(day);
//Exit stage right!
return 0;
}