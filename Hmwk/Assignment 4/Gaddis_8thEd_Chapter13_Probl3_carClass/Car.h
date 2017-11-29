/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 18th, 2017
 * Purpose: car Class
 */

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        int year;
        string make;
        int speed;
    public:
	Car(int, string);
        
	int getYear();
	string getMake();
	int getSpeed();

	void accelerate();
	void brake();
};

Car::Car(int y, string m){
    year=y;
    make=m;
    speed=0;
}

int Car::getYear(){
    return year;
}

string Car::getMake(){
    return make;
}

int Car::getSpeed(){
    return speed;
}

void Car::accelerate(){
    speed += 5;
}

void Car::brake(){
    speed -= 5;
}

#endif /* CAR_H */

