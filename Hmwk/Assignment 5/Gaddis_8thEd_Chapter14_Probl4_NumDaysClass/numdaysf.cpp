/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: NumDays Function
 */

#include "numdays.h"
#include <iostream>
#include <stdlib.h>

NumDays::NumDays(){
    numHours = 0;
    numDays = 0.0;
}

NumDays::NumDays(int hours) {
    numHours = hours;
    numDays = hours/8.0;
}

NumDays::NumDays(const NumDays& orig) {
}

int NumDays::getNumHours(){
    return numHours;
}

void NumDays::setNumHours(int hours){
    numHours = hours;
    setNumDays(hours/8.0);
}

float NumDays::getNumDays(){
    return numDays;
}

void NumDays::setNumDays(float days){
    numDays = days;
}

NumDays NumDays::operator+(const NumDays& n)
{
    NumDays temp;
    temp.numHours = numHours + n.numHours;
    temp.numDays = temp.numHours/8.0;
    return temp; 
}

NumDays NumDays::operator-(const NumDays& n)
{
    NumDays temp;
    temp.numHours = abs(numHours - n.numHours);
    temp.numDays = temp.numHours/8.0;
    return temp;
}

NumDays& NumDays::operator++()
{
    ++numHours;
    numDays = numHours/8.0;
    return *this;
}

NumDays NumDays::operator++(int)
{
    NumDays temp(numHours);
    numHours++;
    temp.setNumDays(numHours/8.0);
    return temp;
}

NumDays& NumDays::operator--(){
    --numHours;
    numDays = numHours/8.0;
    return *this;
}

NumDays NumDays::operator--(int){
    NumDays temp(numHours);
    numHours--;
    temp.setNumDays(numHours/8.0);
    return temp;
}