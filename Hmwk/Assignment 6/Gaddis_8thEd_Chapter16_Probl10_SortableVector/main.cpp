/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: SortableVector Class: Write a class template named SortableVector.
 * The class should be derived from the SimpleVector class presented in this
 * chapter. It should have a member function that sorts the array elements in
 * ascending order. (Use the sorting algorithm of your choice.) Test the
 * template in a driver program.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "SimpleVector.h"
#include "SortableVector.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int SIZE = 10;
SortableVector<int> intTable(SIZE);
SortableVector<float> doubleTable(SIZE);
int intArray[SIZE] = {18, 2, 10, 4, 12, 14, 0, 6, 16, 8};
float doubleArray[SIZE] = {17.12, 12.84, 6.42, 0, 14.98, 8.56, 19.26, 4.28, 2.14, 10.7};

//Input Values
cout<<"=================================================="<<endl;//title
cout<<"              SortableVector Program"<<endl;
cout<<"=================================================="<<endl;
//Process by mapping inputs to outputs
for (int x = 0; x < SIZE; x++)
{
    intTable[x] = intArray[x];
    doubleTable[x] = doubleArray[x];
}
cout<<"These values are in intTable:"<<endl;
    for (int x = 0; x < SIZE; x++)
        cout<<intTable[x]<<" ";
	cout<<endl<<endl;
cout<<"These values are in doubleTable:"<<endl;
    for (int x = 0; x < SIZE; x++)
        cout<<doubleTable[x]<<" ";
        cout<<endl;
intTable.sortAscending();
doubleTable.sortAscending();
cout<<"=================================================="<<endl;
cout<<"                  Sorted Tables"<<endl;
cout<<"=================================================="<<endl;
cout<<"These values are in intTable:"<<endl;
	for (int x = 0; x < SIZE; x++)
            cout<<intTable[x]<< " ";
	    cout<<endl<<endl;
cout<<"These values are in doubleTable:"<<endl;
	for (int x = 0; x < SIZE; x++)
            cout<<doubleTable[x]<<" ";
            cout<<endl;
cout<<"=================================================="<<endl;
//Exit stage right!
return 0;
}