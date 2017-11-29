/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: NumDays Class
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

#include <iomanip>
#include <string>
using namespace std;

class NumDays{
    private:
        int numHours;
        float numDays;
    public:
        NumDays();
        NumDays(int);
        NumDays(const NumDays& orig);
        int getNumHours();
        void setNumHours(int);
        float getNumDays();
        void setNumDays(float);

        NumDays operator+(const NumDays& n);
        NumDays operator-(const NumDays& n);
        NumDays& operator++(); //prefix
        NumDays& operator--();
        NumDays operator++(int); //postfix
        NumDays operator--(int);
};

#endif /* NUMDAYS_H */

