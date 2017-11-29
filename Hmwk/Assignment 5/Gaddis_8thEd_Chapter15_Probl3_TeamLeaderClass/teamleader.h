/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 17th, 2017
 * Purpose: Team Leader Class
 */

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include <iomanip>
#include <string>
#include "productionworker.h"

using namespace std;

class TeamLeader:public ProductionWorker{
    private:
        float bonusf;
	int trainingf;
	int leaderf;
    public:
        TeamLeader(int, float, float, int, int);
        void setBonus(float);
        void setTraining(int);
        void setLeader(int);
        float getBonus();
        int getTraining();
        int getLeader();
};

#endif /* TEAMLEADER_H */

