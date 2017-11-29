/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 11th, 2017
 * Purpose: Day of the Year Class
 */

#ifndef DOTY_H
#define DOTY_H

#include <iomanip>
#include <string>
using namespace std;

class DayOfYear{
    private:
        
    public:
        static const int MonthDays[];
	static const string MonthName[];
	void print(int);
};

void DayOfYear::print(int day){
    int month = 0;
    while (DayOfYear::MonthDays[month] < day)
        month = (month + 1) %12;
    cout << DayOfYear::MonthName[month]<<" "<<day - DayOfYear::MonthDays[month-1];
};

const int DayOfYear::MonthDays[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

const string DayOfYear::MonthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

#endif /* DOTY_H */