/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 16th, 2017
 * Purpose: Class Date
 */

#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int month;
        int day;
        int year;
    public:
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void display();
        int getDay() const;
        int getMonth() const;
        int getYear() const;
};

#endif /* DATE_H */