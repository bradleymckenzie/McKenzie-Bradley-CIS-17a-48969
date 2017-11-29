/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: Employee Class Function
 */

#include <iomanip>
#include <string>
#include "productionworker.h"
using namespace std;

ProductionWorker::ProductionWorker(int shift, float rate)
{
    shiftf=shift;
    hpRate=rate;
}
void ProductionWorker::setShift(int shift)
{
    shiftf=shift;
}
void ProductionWorker::setRate(float rate)
{
    hpRate=rate;
}
int ProductionWorker::getShift()
{
    return shiftf;
}
float ProductionWorker::getRate()
{
    return hpRate;
}