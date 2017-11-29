/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 12, 2017
 Purpose: String Search: Write a program that asks the user for a file name and
 * a string to search for. The program should search the file for every
 * occurrence of a specified string. When the string is found, the line that
 * contains it should be displayed. After all the occurrences have been located,
 * the program should report the number of times the string appeared in the
 * file.
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
cout<<"\t============================"<<endl;
cout<<"\t\tString Search"<<endl;
cout<<"\t============================"<<endl;
cout<<"Enter the Name of the File (file.txt): ";
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
file.close(); file.clear();
//Exit stage right!
return 0;
}

void show (fstream &file){
string data = "";
int count = 0;
string search;
cout<<"Enter a String to Search for in the File: ";
    cin>>search;
cout<<"   String: "<<search<<endl;
cout<<"      All Lines in File that Contain the String: "<<endl;
file.seekg(0, ios::beg);
while (!file.fail()){
    getline(file, data);
    if (data.find(search,0) < data.length()){
        cout<<"         "<<data<<endl;
        count++;
    }
}
cout<<"   String appeared in file: "<<count<<" times"<<endl;
}