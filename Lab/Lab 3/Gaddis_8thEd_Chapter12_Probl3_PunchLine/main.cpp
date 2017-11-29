/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 11, 2017
 Purpose: Punch Line: Write a program that reads and prints a joke and its
 * punch line from two different files. The first file contains a joke, but not
 * its punch line. The second file has the punch line as its last line, preceded
 * by “garbage.” The main function of your program should open the two files and
 * then call two functions, passing each one the file it needs. The first
 * function should read and display each line in the file it is passed
 * (the joke file). The second function should display only the last line of the
 * file it is passed (the punch line file). It should find this line by seeking
 * to the end of the file and then backing up to the beginning of the last line.
 * Data to test your program can be found in the joke.txt and punchline.txt
 * files.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void showJ(fstream &);
void showP(fstream &);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
fstream joke("joke.txt", ios::in), punch("punchline.txt", ios::in);
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t\t Punch Line"<<endl;
cout<<"\t============================"<<endl;
//Open File
//Check if file exists
if(joke.fail() || !punch.fail()){
    showJ(joke);
    showP(punch);
}
else{
    cout<<"Error, File Not Found!"<<endl;   
}
//Exit stage right!
joke.close(); joke.clear();
punch.close(); punch.clear();
return 0;
}

void showJ(fstream &inFile){
    string data = "";
    while(getline(inFile, data)) cout<<data<<endl;
}

void showP(fstream &inFile){
    string data = "";
    char ch;
    
    inFile.seekg(0L, ios::end);
    do{
        inFile.seekg(-2L, ios::cur);
        inFile.get(ch);
    }while(ch != '\n');
    
    getline(inFile, data);
    cout<<data;
}