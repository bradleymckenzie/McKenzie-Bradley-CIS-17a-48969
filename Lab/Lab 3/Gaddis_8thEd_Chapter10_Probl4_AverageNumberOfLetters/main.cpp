/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 12, 2017
 Purpose: Average Number of Letters: Modify the program you wrote for Problem 3
 * (Word Counter), so it also displays the average number of letters in each
 * word.
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
int wCount(char*);
int lCount(char*);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int MAX = 256;
char input[MAX];
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t Average Number of Letters."<<endl;
cout<<"\t============================"<<endl;
cout<<"Enter a string: ";
cin.getline(input, MAX);
//Process by mapping inputs to outputs
int wNumber = wCount(input), lNumber = lCount(input);
//Output Values
cout<<"\t============================"<<endl;
cout<<"\t       Word Count: "<<wNumber<<endl;
cout<<"\t     Letter Count: "<<lNumber/wNumber<<endl;
cout<<"\t============================"<<endl;
//Exit stage right!
return 0;
}

int wCount(char* ptr){
    int count = 1;
    while (*ptr){
        if (isspace(*ptr)){
            count++;
        }
        ptr++;
    }
    return count;
}

int lCount(char* ptr){
    int count = 1;
    while (*ptr){
        if (isalpha(*ptr)){
            count++;
        }
        ptr++;
    }
    return count;
}