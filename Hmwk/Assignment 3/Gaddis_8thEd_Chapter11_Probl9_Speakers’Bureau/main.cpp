/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 05, 2017
 Purpose: Speakers’ Bureau: Write a program that keeps track of a speakers’
 * bureau. The program should use a structure to store the following data about
 * a speaker: The program should use an array of at least 10 structures. It
 * should let the user enter data into the array, change the contents of any
 * element, and display all the data stored in the array. The program should
 * have a menu-driven user interface.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
struct Speaker{
    string name; 
    string phone;
    string topic;
    float fee;
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void inData(Speaker *);
void showData(Speaker **, const int);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Title
  cout<<"-------------------------------------------------"<<endl;
  cout<<"----------------Speakers’ Bureau-----------------"<<endl;
  cout<<"-------------------------------------------------"<<endl;
//Declare Variables
  int SPEAKERS;
  cout<<"How many speakers are there? ";
  cin>>SPEAKERS;
  Speaker *speakers[SPEAKERS];
  int option;
//Input Values
  for (int i = 0; i< SPEAKERS; i++){
      cout<<"Enter Data for Speaker #"<<i+1<<endl;
      speakers[i] = new Speaker;
      cin.ignore();
      inData(speakers[i]);
    }
//Process by mapping inputs to outputs

//Output Values
  cout<<"-------------------------------------------------"<<endl;
  cout<<"--------------Speakers' Bureau Menu--------------"<<endl;
  cout<<"-------------------------------------------------"<<endl;
  do{
      cout<<"Please Choose One of the Following Options:"<<endl;
      cout<<"  1. Show Data of All Speakers."<<endl;
      cout<<"  2. Edit Data."<<endl;
      cout<<"  3. Exit."<<endl;
      cout<<"Enter Option: ";
      cin>>option;
      switch (option){
          case 1:{
              showData(speakers, SPEAKERS);
              break;
          }
          case 2:{
              cout<<"Enter Speaker Number You Want to Edit: ";
              cin>>option;
              cin.ignore();
              cin.clear();
              if(option <=0 || option > SPEAKERS){
                  option = -1;
                }else{
                  cout<<"Editing Speaker #"<<option<<":"<<endl;
                  inData(speakers[option-1]);
                  cout<<"-------------------------------------------------"<<endl;
                }
              break;
          }
          default:{
              option = -1;
              break;
            }
        }
    }while (option != -1);
//Exit stage right!
return 0;
}

void inData(Speaker* speaker){
    cout<<"  Enter Speaker's Name: ";
    getline(cin, speaker->name);
    cout<<"  Enter the Speaker's Telephone Number: ";
    getline(cin, speaker->phone);
    cout<<"  Enter the Speaker's Speaking Topic: ";
    getline(cin, speaker->topic);
    do{
        cout<<"  Enter a Required Fee: $";
        cin>>speaker->fee;        
    }while (speaker->fee < 0);  
}

void showData(Speaker** speaker, const int numS){
    for (int i = 0; i < numS; i++){
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Speaker: #"<<i + 1 << endl;
        cout<<"Speaker's Name: "<<speaker[i]->name<<endl;
        cout<<"Telephone Number: "<<speaker[i]->phone<<endl;
        cout<<"Speaking Topic: "<<speaker[i]->topic<<endl;
        cout<<"Required Fee: "<<speaker[i]->fee<<endl;
        cout<<"-------------------------------------------------"<<endl;
    }
}