/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 12, 2017
 Purpose: Backward String: Write a function that accepts a pointer to a C-string
 * as an argument and displays its contents backward. For instance, if the
 * string argument is “Gravity” the function should display “ytivarG”.
 * Demonstrate the function in a program that asks the user to input a string
 * and then passes it to the function.
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
void cReverse(char*);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int MAX = 256;
char input[MAX];
//Input Values
cout<<"============================"<<endl;
cout<<"  Backward String Program."<<endl;
cout<<"============================"<<endl;
cout<<"Enter a string: ";
cin.getline(input, MAX);
//Process by mapping inputs to outputs

//Output Values
cout<<"============================"<<endl;
cout<<"Backward String: "<<endl;
cReverse(input);
cout<<"============================"<<endl;
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

void cReverse(char* ptr){
    int size = cCount(ptr);
    for (int i = size-1; i >= 0; i--){
        cout<<ptr[i];
    }
    cout<<endl;
}