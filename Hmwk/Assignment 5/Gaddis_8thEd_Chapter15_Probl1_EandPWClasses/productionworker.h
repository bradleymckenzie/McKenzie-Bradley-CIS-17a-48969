/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: Production Worker Class
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include <iomanip>
#include <string>
#include "employee.h"

using namespace std;

class ProductionWorker:public Employee{
    private:
        int shift;
        float hpRate;
    public:
        ProductionWorker();
        ProductionWorker(string, int, string , int, float);
        void setShift(int);
        int getShift();
        void setRate(float);
        float getRate();
};

#endif /* PRODUCTIONWORKER_H */

