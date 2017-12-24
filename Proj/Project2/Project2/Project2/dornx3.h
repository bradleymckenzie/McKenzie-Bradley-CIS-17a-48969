/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on December 4, 2017
 Purpose: Project 2: Double or Nothing x 2: String Class
 */

#ifndef DORNX3_H
#define DORNX3_H

#include <string>
using namespace std;

//Constants for Class Inputs
const int SIZE2 = 8;
const int COLOR2 = 4;

using namespace std;

class Dornx3{//Dornx3 Inputs Class
    public:
        string respond;//Response to Game Option
        string bcolor;//Bet Color
        string rcolor;//Result Color
        string vcolor[SIZE2] = {"Red","red","RED","r","Blue","blue", "BLUE","b"};//Valid Color
        string red[COLOR2] = {"Red","red","RED","r"};//Land on Red
        string blue[COLOR2] = {"Blue","blue","BLUE","b"};//Land on Blue
};
#endif /* DORNX3_H */