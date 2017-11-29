/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 9th, 2017, 1:50 PM
 * Purpose:  Sorting an array with a class
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Random number generator
#include <ctime>        //Time library for seed
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries
#include "Array.h"

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char *argv[]) {
    //Seed the random number function with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize Variables
    int aSize=100;
    int perLine=10;
    Array<short> array(aSize);
   
    //Print the initialized array
    array.print(perLine);
    
    //Sort the array
    array.sort();
    
     //Print the sorted array
    array.print(perLine);
    
    //Add an element to the array
    cout<<"Deleting the last element = "<<array.pop()<<endl;
    cout<<endl<<"The size of the new array = "<<array.getSize()<<endl;
    array.print(perLine);

    //Test the overloading []
    cout<<array[-100]<<endl;
    cout<<array[array.getSize()/2]<<endl;
    cout<<array[array.getSize()+1]<<endl;
    
    //Exit the program
    return 0;
}