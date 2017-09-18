/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Keep track of weather conditions during the past year’s three-month 
          summer season and has designated each day as either rainy, cloudy, or
          sunny.
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int month = 3,day = 30;
    char weather[month][day];
    int Sun,Rain,Cloudy,totSun = 0,totRain = 0,totCloudy = 0,lrgstRain = 0;
    //Open File
    ifstream in;
    in.open("RainOrShine.dat");
    if (!in)
        cout<<"Error: Opening Data File Fail.";
	else{
        for (int row = 0; row < month; row++){
            for (int col = 0; col < day; col++){
                in>>weather[row][col];
            }
        }
        }
    //Input Values
    cout<<" ----------------------------------------------"<<endl;
    cout<<"               Rain or Shine"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    //Process by mapping inputs to outputs
	cout << "         Three Month Weather Report"<<endl;
	cout<< "------------------------------------------------"<<endl;
	for (int row = 0; row < month; row++){
            Sun = Rain = Cloudy = 0;
            for (int col = 0; col < day; col++){
                switch (weather[row][col]){
                    case 'S' : Sun++;break;
                    case 'R' : Rain++;break;
                    case 'C' : Cloudy++;break;
                }
            }
            // Display month numbers
            cout<<"     ----------------------------------"<<endl;
            cout<<"      For the month of ";
            if (row == 0)
                cout << "June:"<<endl;
            else if (row == 1)
                cout << "July:"<<endl;
		else if (row == 2)
                    cout << "August:"<<endl;
		cout<<"      Rainy: "<<Rain<<endl;
                cout<<"      Sunny: "<<Sun<<endl;
		cout<<"      Cloudy: "<<Cloudy<<endl;
                cout<<"     ----------------------------------"<<endl;
		//totals
                totSun += Sun;
		totRain += Rain;
		totCloudy += Cloudy;
                //Month with Most Rain
		if(lrgstRain > Rain)
                    lrgstRain = row;
	}
    //Output Values
    cout<<"     ----------------------------------"<<endl;
	cout<<"      For the whole three-month period"<<endl;
        cout<<"       Rainy: "<<totRain<<endl;
        cout<<"       Sunny: "<<totSun<<endl;
        cout<<"      Cloudy: "<<totCloudy<<endl;
    cout<<"     ----------------------------------"<<endl;
    cout<< " ------------------------------------------"<<endl;
    cout<<"   Month with the Largest Number of Rainy"<<endl;
    if (lrgstRain == 0)
        cout<<"   Days is June."<<endl;
    else if (lrgstRain == 1)
        cout<<"   Days is July."<<endl;
    else if (lrgstRain == 2)
        cout<<"   Days is August."<<endl;
    cout<< " ------------------------------------------"<<endl;
    //Close and Exit stage right!
    in.close();
    return 0;
}

