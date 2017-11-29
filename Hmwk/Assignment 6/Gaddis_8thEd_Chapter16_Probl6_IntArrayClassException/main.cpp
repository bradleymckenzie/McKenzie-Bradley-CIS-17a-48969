/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 25, 2017
 * Purpose: IntArray Class Exception: Chapter 14 presented an IntArray class
 * that dynamically creates an array of integers and performs bounds checking
 * on the array. If an invalid subscript is used with the class, it displays an
 * error message and aborts the program. Modify the class so it throws an
 * exception instead.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries
#include "IntArray.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int SIZE = 10;
//Input Values
cout<<"====================================="<<endl;//title
cout<<"       IntArray Class Exception"<<endl;
cout<<"====================================="<<endl;

IntArray table(SIZE);
try{
    for (int x = 0; x < SIZE; x++)
        table[x] = x;
    for (int x = 0; x < SIZE; x++)
        cout<<table[x]<<" ";
        cout<<endl;
}
catch (string excStr){
    cout<<excStr<<endl;
}
cout<<"ERROR: Subscript out of range."<<endl;
//Process by mapping inputs to outputs

//Output Values
cout<<"====================================="<<endl;
//Exit stage right!
return 0;
}
