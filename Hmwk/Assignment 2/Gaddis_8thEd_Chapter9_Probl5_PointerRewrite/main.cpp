/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 27, 2017
 Purpose: Pointer Rewrite: The following function uses reference variables as
 * parameters. Rewrite the function so it uses pointers instead of reference
 * variables, and then demonstrate the function in a complete program.
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
int doSomething(int *, int *);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
int *xptr,*yptr,value;
int x, y;
//Input Values
cout<<"\t--------------------------------"<<endl;
cout<<"\t\t  Pointer Rewrite"<<endl;
cout<<"\t--------------------------------"<<endl;
cout<<"\tpick an x and y (x y): ";
cin>>x>>y;
//Process by mapping inputs to outputs
xptr=&x;
yptr=&y;
value=doSomething(xptr,yptr);
//Output Values
cout<<"\t--------------------------------"<<endl;
cout<<"\t\t       "<<value<<endl;
cout<<"\t--------------------------------"<<endl;

//Exit stage right!

return 0;
}

int doSomething(int *x, int *y){
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

