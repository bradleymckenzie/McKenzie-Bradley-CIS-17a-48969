/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15, 2017
 * Purpose: Time Off Class
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef TIMEOFF_H
#define TIMEOFF_H

class TimeOff{
    private:
        string name;
        int IDNum;
        int maxSickDays;
        int sickTaken;
        int maxVacation;
        int vacTaken;
        int maxUnpaid;
        int unpaidTaken;
    public:
        TimeOff();
        TimeOff(string, int);
        void setName(string);
        void setID(int);
        void setMaxSickDays(int);
        void setSickTaken(int);
        void setMaxVacation(int);
        void setVacTaken(int);
        void setMaxUnpaid(int);
        void setUnpaidTaken(int);
        string getName() const;
        int getID() const;
        int getMaxSickDays() const;
        int getSickTaken() const;
        int getMaxVacation() const;
        int getVacTaken() const;
        int getMaxUnpaid() const;
        int getUnpaidTaken() const;
};
#endif /* TIMEOFF_H */

