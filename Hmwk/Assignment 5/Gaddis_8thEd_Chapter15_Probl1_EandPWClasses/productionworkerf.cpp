/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 15th, 2017
 * Purpose: Employee Class Function
 */

#include <iomanip>
#include <string>
#include "productionworker.h"
#include "employee.h"
using namespace std;

ProductionWorker::ProductionWorker(string eName, int eNumber, string hDate , int shift, float rate):Employee (eName, eNumber, hDate)
{
    eName = eName;
    eNumber = eNumber;
    hDate = hDate;
    shift=shift;
    hpRate=rate;
}
void ProductionWorker::setShift(int shift)
{
    shift=shift;
}
int ProductionWorker::getShift()
{
    return shift;
}
void ProductionWorker::setRate(float rate)
{
    hpRate=rate;
}
float ProductionWorker::getRate()
{
    return hpRate;
}