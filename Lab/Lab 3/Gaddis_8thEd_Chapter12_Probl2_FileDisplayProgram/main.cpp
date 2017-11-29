/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 09, 2017
 Purpose: File Display Program: Write a program that asks the user for the name
 * of a file. The program should display the contents of the file on the screen.
 * If the file’s contents won’t fit on a single screen, the pro- gram should
 * display 24 lines of output at a time, and then pause. Each time the program
 * pauses, it should wait for the user to strike a key before the next 24 lines
 * are displayed.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void show(fstream &);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
string fileName;
fstream file;
//Input Values
cout<<setw(75)<<"============================"<<endl;
cout<<setw(67)<<"File Program"<<endl;
cout<<setw(75)<<"============================"<<endl;
cout<<"Enter the Name of the File (file.dat): ";
cin>>fileName;
cout<<"File Output:"<<endl;
//Open File
file.open(fileName, ios::in);
//Check if file exists
if(file.fail()){
    cout<<"Error, File Not Found!"<<endl;    
}
else{
    show(file);
}    
file.close();
//Exit stage right!
return 0;
}

void show (fstream &file){
    string fileName;
    int count = 1;
    while (getline(file, fileName))
    {
        cout<<fileName<<endl;
        count++;
        if (count % 24 == 0)
        cin.get();
    }
    cin.get();
    system("pause");
}