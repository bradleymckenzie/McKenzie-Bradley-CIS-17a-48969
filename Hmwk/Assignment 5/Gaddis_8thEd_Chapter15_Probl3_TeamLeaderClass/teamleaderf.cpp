/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 17th, 2017
 * Purpose: Team Leader Class
 */

#include <iomanip>
#include <string>
#include "teamleader.h"
#include "productionworker.h"

using namespace std;

TeamLeader::TeamLeader(int shiftf, float hpRate, float bonus, int training, int leader):ProductionWorker(shiftf, hpRate)
{
    bonusf = bonus;
    trainingf = training;
    leaderf = leader;
}
void TeamLeader::setBonus(float bonus)
{
    bonusf = bonus;
}
void TeamLeader::setTraining(int training)
{
    trainingf = training;
}
void TeamLeader::setLeader(int leader)
{
    leaderf = leader;
}
float TeamLeader::getBonus()
{
    return (bonusf);
}
int TeamLeader::getTraining()
{
    return (trainingf);
}
int TeamLeader::getLeader()
{
    return (leaderf);
}