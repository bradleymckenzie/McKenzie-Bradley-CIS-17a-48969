/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on January 17, 2017
 Purpose: Menu Sample for Homework
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <cstdlib>//Random number generator
#include <ctime> //Set seed time
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Loop on the menu
    do{
        //Input Values
        cout<<"Choice from the list"<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem wit For"<<endl;
        cin>>choice;
        //Switch to determine the Problem
        switch(choice){
            case '1':{
                break;
            }
            case '2':{
                break;
            }
            case '3':{
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }//end of switch
    }while(choice>='1'&& choice<='3');
    //Output Values
    
    //Exit stage right!
    return 0;
    }

