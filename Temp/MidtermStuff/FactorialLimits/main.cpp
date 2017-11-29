/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 4, 2014, 2:09 PM
 */

//System Libraries
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Function Prototypes
double logSum(int);
void display(double,ofstream &);
void display2(double,ofstream &);

int main(int argc, char** argv) {
    //Declare variables
    ofstream out;
    out.open("FactorialLimits.dat");
    cout<<setprecision(7)<<fixed<<showpoint;
    out<<setprecision(7)<<fixed<<showpoint;
    for(int i=1;i<200;i++){
        double result=logSum(i);
        cout<<setw(3)<<i<<"! = 10^("<<setw(11)<<result<<")  = ";
        out<<setw(3)<<i<<"! = 10^("<<setw(11)<<result<<")  = ";
        display(result,out);
        display2(result,out);
    }
    //Exit stage right
    out.close();
    return 0;
}

void display2(double log10Sum,ofstream &out){
    double log2base=log10Sum/log10(2);
    int int2LgSm=log2base;
    double frac=pow(2,log2base-int2LgSm);
    cout<<setw(3)<<"  =    "<<frac<<" x 2^"<<setw(4)<<int2LgSm<<endl;
    out<<setw(3)<<"  =    "<<frac<<" x 2^"<<setw(4)<<int2LgSm<<endl;
}

void display(double log10Sum,ofstream &out){
    int intLgSm=log10Sum;
    double frac=pow(10,log10Sum-intLgSm);
    cout<<setw(11)<<frac<<" x 10^"<<setw(3)<<intLgSm;
    out<<setw(11)<<frac<<" x 10^"<<setw(3)<<intLgSm;
}

double logSum(int range){
    //Declare sum variable
    double sum=0;
    //Take sum of all the logs
    for(int i=1;i<=range;i++){
        sum+=log10(i);
    }
    return sum;
}


