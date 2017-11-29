/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 20, 2017
 * Purpose: Retail Item Class: Write a class named RetailItem that holds data
 * about an item in a retail store. The class should have the following member
 * variables: Write a constructor that accepts arguments for each member
 * variable, appropriate mutator functions that store values in these member
 * variables, and accessor functions that return the values in these member
 * variables. Once you have written the class, write a separate program that
 * creates three RetailItem objects and stores the following data in them.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "RetailItem.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void print(class RetailItem *show);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t      Retail Item Class"<<endl;
cout<<"\t============================"<<endl;

//Process by mapping inputs to outputs
RetailItem item1("Jacket", 12, 59.95);
RetailItem item2("Designer Jeans", 40, 34.95);
RetailItem item3("Shirt", 20, 24.95);	
//Output Values
cout<<"\tItem #1:"<<endl;
print(&item1);
cout<<"\t============================"<<endl;
cout<<"\tItem #2:"<<endl;
print(&item2);
cout<<"\t============================"<<endl;
cout<<"\tItem #3:"<<endl;
print(&item3);
cout<<"\t============================"<<endl;
//Exit stage right!
return 0;
}

void print(RetailItem *item)
{
    cout<<setw(22)<<"Description: "<<item->getItemN()<< endl;
    cout<<setw(24)<<"Units on Hand: " <<item->getUnits()<<endl;
    cout<<setw(17)<<"Price: $"<<item->getPrice()<<endl;
}