/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 02, 2017
 Purpose: Corporate Sales Data: Write a program that uses a structure to store
 * the following data on a company division: Division Name
 * (such as East, West, North, or South), First-Quarter Sales,
 * Second-Quarter Sales, Third-Quarter Sales, Fourth-Quarter Sales, 
 * Total Annual Sales, Average Quarterly Sales. The program should use four 
 * variables of this structure. Each variable should represent one of the
 * following corporate divisions: East, West, North, and South. The user should
 * be asked for the four quarters’ sales figures for each division. Each
 * division’s total and average sales should be calculated and stored in the
 * appropriate member of each structure variable. These figures should then be
 * displayed on the screen.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
struct CorporateSalesData{
    string division;//division names
    float firstq;//first-quarter sales
    float secondq;//second-quarter sales
    float thirdq;//third-quarter sales
    float forthq;//forth-quarter sales
    float totals;//total annual sales
    float averages;//average quarterly sales
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void showSales(CorporateSalesData *csd);
void input (CorporateSalesData* csd);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
CorporateSalesData north, east, south, west;
//Input Values
north.division = "North";
east.division = "East";
south.division = "South";
west.division = "West";
//Process by mapping inputs to outputs
cout<<"================================"<<endl;
cout<<"      Corporate Sales Data"<<endl;
cout<<"================================"<<endl;
input(&north);
cout<<endl;
input(&east);
cout<<endl;
input(&south);
cout<<endl;
input(&west);
cout<<endl;
//Output Values
cout<<"================================"<<endl;
cout<<"            Results"<<endl;
cout<<"================================"<<endl;
showSales(&north);
showSales(&east);
showSales(&south);
showSales(&west);
//Exit stage right!
return 0;
}

void input (CorporateSalesData* csd){
cout<<"Input Sales for Division "<<csd->division<<":"<<endl;//division name

do{//first quarter
    cout<<"  Enter First Quarter Sales: $";
    cin>>csd->firstq;
    if (csd->firstq < 0)
        cout<<"Please Enter a Positive Number:";
}while(csd->firstq < 0);

do{//second quarter
    cout<<"  Enter Second Quarter Sales: $";
    cin>>csd->secondq;
    if (csd->secondq < 0)
        cout<<"Please Enter a Positive Number:";
}while(csd->secondq < 0);

do{//third quarter
    cout<<"  Enter Third Quarter Sales: $";
    cin>>csd->thirdq;
    if (csd->thirdq < 0)
        cout<<"Please Enter a Positive Number:";
}while(csd->thirdq < 0);

do{//forth quarter
    cout<<"  Enter Forth Quarter Sales: $";
    cin>>csd->forthq;
    if (csd->forthq < 0)
        cout<<"Please Enter a Positive Number:";
}while(csd->forthq < 0);
//total sales
csd->totals += csd->firstq;
csd->totals += csd->secondq;
csd->totals += csd->thirdq;
csd->totals += csd->forthq;
//average quarter sales
csd->averages = csd->totals/4;
}
//calculates average of each quarter sales


void showSales(CorporateSalesData *csd){
cout<<"================================"<<endl;
cout<<fixed<<showpoint<<setprecision(2);
cout<<"Company Division: "<<csd->division<<endl;
cout<<"Total Annual Sales: $"<<csd->totals<<endl;
cout<<"Average Quarterly Sales: $"<<csd->averages<<endl;
cout<<"================================"<<endl;
}