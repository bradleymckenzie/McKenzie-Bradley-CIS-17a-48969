/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15, 2017
 * Purpose: Time Off Class Function
 */

#include <iostream>
#include "timeoff.h"

using namespace std;

TimeOff::TimeOff()
{
    name = "";
    IDNum = 0;
    maxSickDays = 0;
    sickTaken = 0;
    maxVacation = 0;
    vacTaken = 0;
    maxUnpaid = 0;
    unpaidTaken = 0;
}

TimeOff::TimeOff(string n, int ID)
{
    name = n;
    IDNum = ID;
}

void TimeOff::setName(string name)
{
    this->name = name;
}

void TimeOff::setID(int id)
{
    IDNum = id;
}

void TimeOff::setMaxSickDays(int msd)
{
    maxSickDays = msd;
}

void TimeOff::setSickTaken(int st)
{
    sickTaken = st;
}

void TimeOff::setMaxVacation(int mv)
{
    maxVacation = mv;
}

void TimeOff::setVacTaken(int vt)
{
    vacTaken = vt;
}

void TimeOff::setMaxUnpaid(int mu)
{
    maxUnpaid = mu;
}

void TimeOff::setUnpaidTaken(int ut)
{
    unpaidTaken = ut;
}

string TimeOff::getName() const
{
    return name;
}

int TimeOff::getID() const
{
    return IDNum;
}

int TimeOff::getMaxSickDays() const
{
    return maxSickDays;
}

int TimeOff::getSickTaken() const
{
    return sickTaken;
}

int TimeOff::getMaxVacation() const
{
    return maxVacation;
}

int TimeOff::getVacTaken() const
{
    return vacTaken;
}

int TimeOff::getMaxUnpaid() const
{
    return maxUnpaid;
}

int TimeOff::getUnpaidTaken() const
{
    return unpaidTaken;
}