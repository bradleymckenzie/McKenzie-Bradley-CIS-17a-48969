/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 27, 2017
 Purpose: Reserve Array: Write a function that accepts an int array and the 
 * array’s size as arguments. The func- tion should create a copy of the array,
 * except that the element values should be reversed in the copy. The function
 * should return a pointer to the new array. Demonstrate the function in a
 * complete program.
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
int *reverse(int *,int);
void prnt(int *,int);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
int n = 10;
int *arr = new int[n];
int *reversed;
//Input Values
cout<<"\t--------------------------------"<<endl;
cout<<"\t\t  Reverse Array"<<endl;
cout<<"\t--------------------------------"<<endl;
//Process by mapping inputs to outputs
for (int i = 0; i < n; i++)
    arr[i] = i + 1;

reversed = reverse(arr,n);

//Output Values
cout<<"\t--------------------------------"<<endl;
cout<<setw(23)<<"Original array:"<<endl;
prnt(arr,n);
cout<<setw(23)<<"Reversed array:"<<endl;
prnt(reversed,n);
cout<<"\t--------------------------------"<<endl;

//Exit stage right!
delete []arr;
delete []reversed;
return 0;
}

int *reverse(int *a,int n) {
  //Allocate memory
  int *r = new int[n];

  //Fill array
  for (int i = 0; i < n; i++)
    r[i] = a[i];

  //Reverse r array
  for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (r[i] < r[j]) {
                int temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }
  return r;
}

void prnt(int *a,int n){
    cout<<setw(15);
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}