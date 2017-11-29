/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 11th, 2017
 * Purpose: Day of the Year Class Modification
 */

#ifndef DOTY_H
#define DOTY_H

#include <iomanip>
#include <string>
using namespace std;

class DayOfYear{
    private:
        int numDays;
        string month;
        int day;
    public:
        DayOfYear();
        DayOfYear(string, int);
        void setNumDays(int);
        int getNumDays();
        void print();
        static const string Month[];
        static const int MonthDay[];

        DayOfYear& operator++();
        DayOfYear& operator--();
        DayOfYear operator++(int);
        DayOfYear operator--(int);
};

#endif /* DOTY_H */