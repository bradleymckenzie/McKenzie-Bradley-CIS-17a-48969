/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on August 29, 2017
 * Purpose: Write a program that asks the user to enter the month 
   (letting the user enter an integer in the range of 1 through 12) and the 
   year. The program should then display the number of days in that month. 
   Use the following criteria to identify leap years: 
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int month;
    int year;
    //Input Values
    cout<<"\t    Days in a Month:"<<endl;
    do{
        cout<<"Enter the Number of the Month (1-12): ";
        cin>>month;
	}while (!(month >= 1 && month <= 12));

	cout<<"Enter the Year: ";
	cin>>year;
    //Process by mapping inputs to outputs
    
    //Output Values
    if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8
           ||month == 10 || month == 12){
        cout<<"Number of Days in that Month is: 31 days";
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        cout<<"Number of Days in that Month is: 30 days";
    }
    else if(month == 2){
        if(year%400 == 0){
            cout<<"Number of Days in that Month is: 29 days";
        }
        else if(year%4 == 0){
            cout<<"Number of Days in that Month is: 29 days";
        }
        else{
            cout<<"Number of Days in that Month is: 28 days";
        } 
    }
    //Exit stage right!
    return 0;
}