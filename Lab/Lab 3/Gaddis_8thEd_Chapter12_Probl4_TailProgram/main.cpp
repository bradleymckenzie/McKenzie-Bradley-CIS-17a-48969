/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 11, 2017
 Purpose: Tail Program: Write a program that asks the user for the name of a
 * file. The program should display the last 10 lines of the file on the screen
 * (the “tail” of the file). If the file has fewer than 10 lines, the entire
 * file should be displayed, with a message indicating the entire file has been
 * displayed.
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
cout<<"\t\tFile Program"<<endl;
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
   char ch;
   bool ten = true;
   
   file.seekg(0L, ios::end);
   do{
       file.seekg(-2L, ios::cur);
       if(file.tellg() == 0){
            cout<<"File Has Less Than 10 Lines."<<endl;
            ten = false;
            file.seekg(0L, ios::cur); //Set cursor at end of file
        }
        file.get(ch);
        if (ch == '\n') count++;
    } while(count != 10 && ten);
    file.seekg(-1L, ios::cur);
    while(getline(file, data)) cout<<data<<endl;
}