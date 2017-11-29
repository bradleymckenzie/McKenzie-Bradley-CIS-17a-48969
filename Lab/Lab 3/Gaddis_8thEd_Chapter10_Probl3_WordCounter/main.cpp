/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 12, 2017
 Purpose: Word Counter: Write a function that accepts a pointer to a C-string as
 * an argument and returns the number of words contained in the string. For
 * instance, if the string argument is “Four score and seven years ago” the
 * function should return the number 6. Demonstrate the function in a program
 * that asks the user to input a string and then passes it to the function. The
 * number of words in the string should be displayed on the screen.
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
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int MAX = 256;
char input[MAX];
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t\tWord Counter"<<endl;
cout<<"\t============================"<<endl;
cout<<"Enter a string: ";
cin.getline(input, MAX);
//Process by mapping inputs to outputs

//Output Values
cout<<"\t============================"<<endl;
cout<<"\t       Word Count: "<<wCount(input)<<endl;
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