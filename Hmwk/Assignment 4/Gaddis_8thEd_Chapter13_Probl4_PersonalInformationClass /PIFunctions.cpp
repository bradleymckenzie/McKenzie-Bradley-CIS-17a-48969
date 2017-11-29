/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 18th, 2017
 * Purpose: Personal Information Functions
 */

#include <iostream>
#include <string>
#include "PIClass.h"
using namespace std;

PIClass::PIClass() {
    name = "";
    address = "";
    age = 0;
    phone = "(000)000-0000";
}
string PIClass::getAddress(){
    return address;
}
string PIClass::getName(){
    return name;
}
string PIClass::getPhone(){
    return phone;
}
int PIClass::getAge(){
    return age;
}
void PIClass::setAddress(string a){
    address = a;
}
void PIClass::setName(string n){
    name = n;
}
void PIClass::setAge(int a){
    age = a;
}
void PIClass::setPhone(string p){
    phone = p;
}