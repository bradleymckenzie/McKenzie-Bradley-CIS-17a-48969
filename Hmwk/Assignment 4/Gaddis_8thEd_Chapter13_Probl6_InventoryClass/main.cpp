/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 20, 2017
 * Purpose: Inventory Class: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "Inventory.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void print(class Inventory *show);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
Inventory inventorY;
int itemN = 0;
int quantity = 0;
float cost = 0;
float totalCost = 0;
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t      Inventory Class"<<endl;
cout<<"\t============================"<<endl;
cout<<"\tEnter Item Number: ";
cin>>itemN;
while (itemN < 0){
    cout<<"Only enter positive values for the Item Number: ";
    cin>>itemN;
}
cout<<"\tEnter Item Quantity: ";
cin>>quantity;
while (quantity < 0){
    cout<<"Only enter positive values for the Item Quantity: ";
    cin>>quantity;
}
cout<<"\tEnter Item Cost: $";
cin>>cost;
while (cost < 0){
    cout<<"Only enter positive values for the Item Cost: ";
    cin>>cost;
}
//Process by mapping inputs to outputs
inventorY.setItemN(itemN);
inventorY.setQuantity(quantity);
inventorY.setCost(cost);
inventorY.setTotalCost(totalCost);
//Output Values
cout<<"\t============================"<<endl;
print(&inventorY);
cout<<"\t============================"<<endl;
//Exit stage right!
return 0;
}

void print(Inventory *item)
{
    cout<<setw(21)<<"Item Number: "<<item->getItemN()<< endl;
    cout<<setw(23)<<"Item Quantity: "<<item->getQuantity()<<endl;
    cout<<setw(20)<<"Item Cost: $"<<item->getCost()<<endl;
    cout<<setw(21)<<"Total Cost: $"<<item->getTotalCost()<<endl;
}