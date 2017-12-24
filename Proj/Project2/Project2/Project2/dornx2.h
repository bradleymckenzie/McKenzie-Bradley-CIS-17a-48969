/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on December 4, 2017
 Purpose: Project 2: Double or Nothing x 2 Class
 */

#ifndef DORNX2_H
#define DORNX2_H

#include <iostream>
#include <string>
#include "dornx3.h"

using namespace std;

class Dornx2 : public Dornx3{//Dornx2 Input Class Inherit Dornx3
    public:
        float bet;//Bet Amount
        float payout;//Pay Out Result
        float sum = 0;//Total Winnings
        float pwings = 0;//Possible Wins
        float wins = 0;//Number of Wins
        float losses = 0;//Number of Losses
        virtual void show(){cout<<" Play Again?";}//Polymorphism Function
        void dornx2(float);//Double or Nothing x 2 Function
        void dornx1(float);//Double or Nothing Free Spin
        bool findCol(string [], int , string);//Test Color
};

class Play{//Polymorphism
    public:
        virtual void show(){
            cout<<"\t  Play Again?"<<endl;
        }
};
  
class Again : public Play{//Polymorphism
    public:
        void show(){
            cout<<"\t  Play Again?"<<endl;
        }
};

template <class T>
void response(T num){//Spin Wheel Land Prize
    if (num == 1){//Wheel Land on 1
        cout<<"  You Landed on Number "<<num<<", You Win a Pen."<<endl;
    }
    if (num == 2){//Wheel Land on 2
        cout<<"  You Landed on Number "<<num<<", You Win a Bike."<<endl;
    }
    if (num == 3){//Wheel Land on 3
        cout<<"  You Landed on Number "<<num<<", You Win a Pizza."<<endl;
    }
    if (num == 4){//Wheel Land on 4
        cout<<"  You Landed on Number "<<num<<", You Win a Hat."<<endl;
    }
    if (num == 5){//Wheel Land on 5
        cout<<"  You Landed on Number "<<num<<", You Win a Tesla Model X."<<endl;
    }
    if (num == 6){//Wheel Land on 6
        cout<<"  You Landed on Number "<<num<<", You Win a Shirt."<<endl;
    }
    if (num == 7){//Wheel Land on 7
        cout<<"  You Landed on Number "<<num<<", You Win a Baseball Bat."<<endl;
    }
    if (num == 8){//Wheel Land on 8
        cout<<"  You Landed on Number "<<num<<", You Win a McDonalds' Coupon."<<endl;
    }
    if (num == 9){//Wheel Land on 9
        cout<<"  You Landed on Number "<<num<<", You Win a Fake iPhone X."<<endl;
    }
    if (num == 10){//Wheel Land on 10
        cout<<"  You Landed on Number "<<num<<", You Win a Scooter."<<endl;
    }
}
#endif /* DORNX2_H */