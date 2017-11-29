/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 16, 2017
 * Purpose: Date: Design a class called Date. The class should store a date in
 * three integers: month, day, and year. There should be member functions to
 * print the date in the following forms:
 *                                        12/25/2014
 *                                        December 25, 2014
 *                                        25 December 2014
 * Demonstrate the class by writing a complete program implementing it.
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
cout<<"Enter the Day of the Month"<<endl;//input day
do{
cout<<"   Must Enter a Number Between 1 and 31: ";//must be a number 1-31
cin>>theDay;
}while(theDay < 1 || theDay > 31);
cout<<"Enter a Month (Ex: For November, input 11)"<<endl;//input month
do{
  cout<<"   Must Enter a Number Between 1 and 12: ";//must be 1-12
  cin>>theMonth;
}while(theMonth < 1 || theMonth > 12);
cout<<"Enter a Year (Ex: 2017)"<<endl;//input year
do{
  cout<<"   Must Enter a For Digit Number: ";//must be 1000-9999
  cin>>theYear;
}while(theYear < 1000 || theYear > 9999);
//Process by mapping inputs to outputs
theDate.setDay(theDay);//setDay
theDate.setYear(theYear);//setYear
theDate.setMonth(theMonth);//setMonth
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