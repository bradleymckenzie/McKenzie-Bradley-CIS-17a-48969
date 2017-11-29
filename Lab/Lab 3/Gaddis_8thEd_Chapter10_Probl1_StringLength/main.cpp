/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 12, 2017
 Purpose: String Length: Write a function that returns an integer and accepts a
 * pointer to a C-string as an argument. The function should count the number of
 * characters in the string and return that number. Demonstrate the function in
 * a simple program that asks the user to input a string, passes it to the
 * function, and then displays the function’s return value.
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
int cCount(char*);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int MAX = 256;
char input[MAX];
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t\tString Length"<<endl;
cout<<"\t============================"<<endl;
cout<<"Enter a string: ";
cin.getline(input, MAX);
//Process by mapping inputs to outputs

//Output Values
cout<<"\t============================"<<endl;
cout<<"\t    Character count: "<<cCount(input)<<endl;
cout<<"\t============================"<<endl;
//Exit stage right!
return 0;
}

int cCount(char* ptr){
    int count = 0;
    while (*ptr){
        count++;
        ptr++;
    }
    return count;
}