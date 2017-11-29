/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: Searchable Vector Modification: Modify the SearchableVector class
 * template presented in this chapter so that it performs a binary search
 * instead of a linear search. Test the template in a driver program.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "SimpleVector.h"
#include "SearchableVector.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int SIZE = 10;
SearchableVector<int> intTable(SIZE);
SearchableVector<float> doubleTable(SIZE);
//Input Values
cout<<"=================================================="<<endl;//title
cout<<"              SearchableVector Program"<<endl;
cout<<"=================================================="<<endl;
//Process by mapping inputs to outputs
for (int x = 0; x < SIZE; x++){
    intTable[x] = (x * 2);
    doubleTable[x] = (x * 2.14);
}
cout<<"These values are in intTable:"<<endl;
for (int x = 0; x < SIZE; x++)
    cout<<intTable[x]<<" ";
    cout<<endl<<endl;
cout<<"These values are in doubleTable:"<<endl;
for (int x = 0; x < SIZE; x++)
    cout<<doubleTable[x]<<" ";
    cout<<endl;
cout<<"=================================================="<<endl;
cout<<"                    Results"<<endl;
cout<<"=================================================="<<endl;
int result;
cout<<"Searching for 6 in intTable."<<endl;
    result = intTable.findItem(6);
    if (result == -1)
        cout<<"6 was not found in intTable."<<endl;
	else
        cout<<"6 was found at subscript "<<result<<endl;
cout<<"=================================================="<<endl;
cout<<"Searching for 12.84 in doubleTable."<<endl;
    result = doubleTable.findItem(12.84);
    if (result == -1)
        cout<<"12.84 was not found in doubleTable."<<endl;
	else
        cout<<"12.84 was found at subscript "<<result<<endl;
cout<<"=================================================="<<endl;
//Exit stage right!
return 0;
}