/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Modify the binarySearch function presented in this chapter so it 
          searches an array of strings instead of an array of ints. Test the 
          function with a driver program. Use Program 8-8 as a skeleton to 
          complete.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
    
//Function Prototypes
int binarySearch(string[], int, string);
void selectionSort(string[], int);
string getValue();
void prnSAry(string [], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int NUMNAME = 20;
    string value;
    int result;
    string names[NUMNAME] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri",
    "Johnson, Jill", "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
    "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
    "Javens, Renee", "Harrison, Rose", "Setzer, Cathy","Pike, Gordon",
    "Holland, Beth" };
    //Input Values
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\t\tBinary String Search"<<endl;
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    prnSAry(names, NUMNAME);
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    //Process by mapping inputs to outputs
    selectionSort(names, NUMNAME);
    value = getValue();
    result = binarySearch(names, NUMNAME, value);
    //Output Values
    if (result == -1)
        cout<<"Name is not in the list."<<endl;
    else
        cout<<names[result]<<" was found in subscript #"<<result<<"."<<endl; 
    //Exit
    return 0;
}

void selectionSort(string array[], int size)
{
    int sScan, mIndex;
    string mValue;
    for (int sScan = 0; sScan < (size - 1); sScan++)
    {
        mIndex = sScan;
        mValue = array[sScan];
        for (int index = 0; index < size; index++)
        {
            mValue = array[index];
            mIndex = index;
        }
        array[mIndex] = array[sScan];
        array[sScan] = mValue;
    }
}

string getValue()
{
    string input;
    cout << "Enter the name you would like to search for: ";
    getline(cin, input);
    return input;
}

int binarySearch(string array[], int size, string value)
{
    int first = 0,
            last = size - 1,
            middle,
            position = -1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
	}
    return position;	
}

void prnSAry (string name[], int size){
    cout<<"\t\tNum:     Name:"<<endl;
    for (int i=0;i<size;i++){
        cout<<setw(18)<<i+1<<"    "<<name[i]<<endl;
    }
    cout<<endl;
}