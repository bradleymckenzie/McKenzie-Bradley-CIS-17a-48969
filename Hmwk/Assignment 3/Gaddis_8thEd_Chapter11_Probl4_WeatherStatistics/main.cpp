/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 02, 2017
 Purpose: Weather Statistics: Write a program that uses a structure to store the
 * following weather data for a particular month: The program should have an
 * array of 12 structures to hold weather data for an entire year. When the
 * program runs, it should ask the user to enter data for each month. (The
 * average temperature should be calculated.) Once the data are entered for all
 * the months, the program should calculate and display the average monthly 
 * rainfall, the total rainfall for the year, the highest and lowest
 * temperatures for the year (and the months they occurred in), and the average
 * of all the monthly average temperatures.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Weather
{
    int totalRainfall;
    int highTemperature;
    int lowTemperature;
    int averageTemperature;
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int MONTH = 12;
Weather weatherData[MONTH];
int index;
//Input Values
cout<<"-------------------------------------------------"<<endl;
cout<<"----------------Weather Statistics---------------"<<endl;
cout<<"-------------------------------------------------"<<endl;
for (index = 1; index < MONTH; index++){
    cout<<"For month "<<(index)<<","<<endl;
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
for(index = 1; index < MONTH; index++){
    annualRain += weatherData[index].totalRainfall;
    annualTemp += weatherData[index].averageTemperature;
}
cout<<"Total Rain: "<<annualRain<<endl;
cout<<"Average Annual Rain: "<<annualRain/MONTH<<endl;
cout<<"Average Annual Temperature: "<<annualTemp/MONTH<<endl;
//Exit stage right!
return 0;
}