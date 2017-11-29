/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 18th, 2017
 * Purpose: Personal Information Class
 */

#ifndef PICLASS_H
#define PICLASS_H

#include <iostream>
#include <string>
using namespace std;

class PIClass{
    private:
        string name;
        string address;
        int age;
        string phone;
    
    public:
        PIClass();

        void setName(string);
        void setAddress(string);
        void setAge(int);
        void setPhone(string);
        
        string getName();
        string getAddress();
        int getAge();
        string getPhone();
};

#endif /* PICLASS_H */

