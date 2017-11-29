/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 09, 2017
 Purpose: File Head Program: Write a program that asks the user for the name of
 * a file. The program should display the first 10 lines of the file on the
 * screen (the “head” of the file). If the file has fewer than 10 lines, the
 * entire file should be displayed, with a message indicating the entire file
 * has been displayed.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
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
cout<<"\t============================"<<endl;
cout<<"\t\tFile Program"<<endl;
cout<<"\t============================"<<endl;
cout<<"Enter the Name of the File (file.dat): ";
cin>>fileName;
cout<<endl;
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
    int lines = 10;
    
    if (lines<10){
        cout<<"Displaying "<<lines<<" lines from file!"<<endl<<endl;
        for (int i=0; i<lines; i++){
        getline(file, fileName);
        cout<<fileName<<endl;
        }
        cout<<endl;
        cout<<"The content has less than ten lines!"<<endl;
    }
    else{
        cout<<"Displaying 10 lines from file!"<<endl<<endl;
        for (int i=0; i<10; i++){
        getline(file, fileName);
        cout<<fileName<<endl;
        }
        cout<<endl;
        cout<<"The content has at least ten lines!"<<endl;
    }
}