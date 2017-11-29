/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: Simple Vector Modification: Modify the SimpleVector class template
 * presented in this chapter to include the member functions push_back and
 * pop_back. These functions should emulate the STL vector class member
 * functions of the same name. (See Table 16-5.) The push_back function should
 * accept an argument and insert its value at the end of the array. The pop_back
 * function should accept no argument and remove the last element from the
 * array. Test the class with a driver program.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "SimpleVector.h"
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
cout<<"       SimpleVector Program"<<endl;
cout<<"====================================="<<endl;
//Process by mapping inputs to outputs
SimpleVector<int> v(SIZE);
for (int i = 0; i < SIZE + 2; i++){
    v.push_back(i);
}
//Output Values
cout<<"====================================="<<endl;
cout<<"              Results"<<endl;
cout<<"====================================="<<endl;
v.print();
cout<<"====================================="<<endl;
//Exit stage right!
return 0;
}