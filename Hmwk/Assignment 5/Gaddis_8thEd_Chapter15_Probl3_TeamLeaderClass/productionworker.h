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

using namespace std;

class ProductionWorker{
    private:
        int shiftf;
        float hpRate;
    public:
        ProductionWorker();
        ProductionWorker(int, float);
        void setShift(int);
        int getShift();
        void setRate(float);
        float getRate();
};

#endif /* PRODUCTIONWORKER_H */

