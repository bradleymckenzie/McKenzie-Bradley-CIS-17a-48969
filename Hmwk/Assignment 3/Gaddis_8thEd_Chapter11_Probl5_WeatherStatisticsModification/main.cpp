/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 04, 2017
 Purpose: Weather Statistics Modification: Modify the program that you wrote for
 * Programming Challenge 4 so it defines an enumerated data type with
 * enumerators for the months (JANUARY, FEBRUARY, etc.). The program should use
 * the enumerated type to step through the elements of the array.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
struct Weather
{
    int totalRainfall;
    int highTemperature;
    int lowTemperature;
    int averageTemperature;
};
enum Months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER,
    OCTOBER, NOVEMBER, DECEMBER};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void display(Months);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int NUM_MONTH = 12;

Weather weatherData[NUM_MONTH];
Months index;
//Input Values
cout<<"-------------------------------------------------"<<endl;
cout<<"----------------Weather Statistics---------------"<<endl;
cout<<"-------------------------------------------------"<<endl;
for (index = JANUARY; index <= DECEMBER;
        index = static_cast<Months>(index + 1))
{
    cout<<"For ";
    display(index);
    cout<<","<<endl;
    cout<<"  Enter the total rainfall for the month: ";
    cin>>weatherData[index].totalRainfall;
    cout<<"  Enter the high temperature for the weather: ";
    cin>>weatherData[index].highTemperature;
    cout<<"  Enter the low temperature for the weather: ";
    cin>>weatherData[index].lowTemperature;
    cout<<"The monthly average temperature is ";
    weatherData[index].averageTemperature = (weatherData[index].highTemperature + weatherData[index].lowTemperature)/2;
    cout<<weatherData[index].averageTemperature;
    if(weatherData[index].lowTemperature < -100 && weatherData[index].highTemperature > 140){
        cout<<"The number is invalid";
    }
    cout<<endl<<endl;
}
//Process by mapping inputs to outputs

//Output Values
float annualRain, annualTemp;
for (index = JANUARY; index <= DECEMBER;
        index = static_cast<Months>(index + 1)){
    annualRain += weatherData[index].totalRainfall;
    annualTemp += weatherData[index].averageTemperature;
}
cout<<"-------------------------------------------------"<<endl;
cout<<"---------------------Results---------------------"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"                Total Rain: "<<annualRain<<" (Units)"<<endl;
cout<<"       Average Annual Rain: "<<annualRain/NUM_MONTH<<" (Units)"<<endl;
cout<<"Average Annual Temperature: "<<annualTemp/NUM_MONTH<<" (Units)"<<endl;
cout<<"-------------------------------------------------"<<endl;
//Exit stage right!
return 0;
}

void display(Months m){
    switch(m){
        case JANUARY : cout<<"January";
            break;
        case FEBRUARY : cout<<"February";
            break;
        case MARCH : cout<<"March";
            break;
        case APRIL : cout<<"April";
            break;
        case MAY : cout<<"May";
            break;
        case JUNE : cout<<"June";
            break;
        case JULY : cout<<"July";
            break;
        case AUGUST : cout<<"August";
            break;
        case SEPTEMBER : cout<<"September";
            break;
        case OCTOBER : cout<<"October";
            break;
        case NOVEMBER : cout<<"November";
            break;
        case DECEMBER : cout<<"December";
            break;
    }
}