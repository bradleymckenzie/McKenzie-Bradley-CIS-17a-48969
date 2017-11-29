/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 11th, 2017
 * Purpose: Day of the Year Class Modification Function
 */

#include "doty.h"
#include <iostream>
#include <stdlib.h>

const int DayOfYear::MonthDay[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const string DayOfYear::Month[] = {"January", "February", "March", "April", "May", 
                                      "June", "July", "August", "September", "October", "November", "December"};

DayOfYear::DayOfYear(string m, int d){
    month = m;
    day = d;
    for (int i=0; i<12; i++){
        if (m==Month[0]){
            numDays = 0;
            break;
        }            
        if (m==Month[i])
            numDays = MonthDay[i-1];
    }
    if (d <= 0 || d > 31)
        exit(0);
    numDays += d;    
}

DayOfYear::DayOfYear(){
    month = "January";
    day = 1;
    numDays =1;
}

void DayOfYear::setNumDays(int d)
{
    numDays = d;
}

int DayOfYear::getNumDays()
{
    return numDays;
}

void DayOfYear::print()
{
    int m = 0;
    while (MonthDay[m] < numDays)
        m = (m + 1) % 12;
    if (numDays < 32)
        cout<<Month[m]<<" "<<numDays<<endl; 
    else 
        cout<<Month[m]<<" "<<numDays - MonthDay[m - 1]<<endl;
}

DayOfYear& DayOfYear::operator ++(){
    ++numDays;
    if (numDays>365)
        numDays = 1;
    return *this;
}

DayOfYear DayOfYear::operator ++(int){
    DayOfYear temp;
    temp.numDays++;
    if (temp.numDays>365)
        temp.numDays = 1;
    return temp;
}

DayOfYear& DayOfYear::operator --(){
    --numDays;
    if (numDays==0)
        numDays = 365;
    return *this;
}

DayOfYear DayOfYear::operator --(int){
    DayOfYear temp;
    temp.numDays--;
    if (temp.numDays==0)
        temp.numDays = 365;
    return temp;
}