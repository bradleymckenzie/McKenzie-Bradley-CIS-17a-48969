/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Date Exceptions: Modify the Date class you wrote for Programming
 * Challenge 1 of Chapter 13. The class should implement the following exception
 * classes: InvalidDay Throw when an invalid day (< 1 or > 31) is passed to the
 * class. InvalidMonth Throw when an invalid month (< 1 or > 12) is passed to
 * the class. Demonstrate the class in a driver program.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries
#include "Date.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
 Date theDate;//class set
 int theMonth= 0;//set variables to 0
 int theDay=0;
 int theYear=0;
//Input Values
cout<<"\t============================"<<endl;//title
cout<<"\t    Date Format Program."<<endl;
cout<<"\t============================"<<endl;
try
{
    cout<<"Enter the Day of the Month: ";
    cin>>theDay;//input day
        if(theDay < 1 || theDay > 31)
            throw InvalidDay();//invalid input
    cout<<"Enter a Month (Ex: For November, input 11): ";
    cin>>theMonth;//input month
        if(theMonth < 1 || theMonth > 12)
            throw InvalidMonth();//invalid input
    cout<<"Enter a Year (Ex: 2017): ";
    cin>>theYear;//input year
        if(theYear < 1000 || theYear > 9999)
            throw InvalidYear();//invalid input

        theDate.setDay(theDay);//setDay
        theDate.setYear(theYear);//setYear
        theDate.setMonth(theMonth);//setMonth
}

catch(InvalidDay){
    cout<<"  Invalid: Must Enter a Number Between 1 and 31"<<endl;
}
catch(InvalidMonth){
    cout<<" Invalid: Must Enter a Number Between 1 and 12"<<endl;
}
catch(InvalidYear){
    cout<<"     Invalid: Must Enter a For Digit Year"<<endl;
}
//Process by mapping inputs to outputs

//Output Values
cout<<"\t============================"<<endl;//title
cout<<"\t\t  Results"<<endl;
cout<<"\t============================"<<endl;
theDate.display();//display output
cout<<"\t============================"<<endl;
//Exit stage right!
return 0;
}

void Date::setDay(int d){//setDay
    day = d;
}
void Date::setMonth(int m){//setMonth
    month = m;
}
void Date::setYear(int y){//setYear
    year = y; 
}
int Date::getDay() const{//getDay
    return day;
}
int Date::getMonth() const{//getMonth
    return month;
}
int Date::getYear() const{//getYear
    return year;
}
void Date::display(){//display output
    string sMonth[] = {"January","February","March","April","May","June","July",
                        "August","September","October","November","December"};
    for(int i = 0; i<12;i++){
        if (i == month-1){
            cout<<"\t"<<month<<"/"<<day<<"/"<<year;
            cout<<endl;
            cout<<"\t"<<sMonth[i]<<" "<<day<<", "<<year;
            cout<<endl;
            cout<<"\t"<<day<<" "<<sMonth[i]<<" "<<year;
            cout<<endl;
        }
    }
}