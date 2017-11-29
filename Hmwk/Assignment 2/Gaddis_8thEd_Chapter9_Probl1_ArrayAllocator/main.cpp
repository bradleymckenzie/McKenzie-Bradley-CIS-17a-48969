/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 26, 2017
 Purpose: Array Allocator: Write a function that dynamically allocates an array
 * of integers. The function should accept an integer argument indicating the 
 * number of elements to allocate. The function should return a pointer to the 
 * array.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
int* allocates (int);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
 int number=0;
 int *array;
//Input Values
 
//Process by mapping inputs to outputs
 cout<<"Enter in array size: ";
 cin>>number;
 array=allocates(number);
//Output Values
 for(int i=0;i<number;i++){
     cout<<array[i]<<endl;
 }
//Exit stage right!
  return 0;
}

int* allocates (int num){
    int *array=new int(num);
    for(int i=0;i<num;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>array[i];
    }
    return array;
}