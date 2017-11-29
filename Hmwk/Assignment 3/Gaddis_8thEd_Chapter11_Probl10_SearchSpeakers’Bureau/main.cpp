/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 06, 2017
 Purpose: Search Function for the Speakers’ Bureau Program:Add a function to
 * Programming Challenge 9 that allows the user to search for a speaker on a
 * particular topic. It should accept a key word as an argument and then search
 * the array for a structure with that key word in the Speaking Topic field. All
 * structures that match should be displayed. If no structure matches, a message
 * saying so should be displayed.
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
void searchS(Speaker** , string, const int);
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
      cout<<"  3. Search Speakers by Topic."<<endl;
      cout<<"  4. Exit."<<endl;
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
          case 3:{
              string topic;
              cout<<"-------------------------------------------------"<<endl;
              cout<<"Enter Topic: ";
              cin>>topic;
              searchS(speakers, topic, SPEAKERS);
              cout<<"-------------------------------------------------"<<endl;
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

void searchS(Speaker** speakers, string topic, const int numS){
    cout<<"Speakers with Such Topic are:"<<endl;
    for (int i = 0; i< numS; i++ ){
        if(speakers[i]->topic.compare(topic) == 0){
            cout<<"  "<<speakers[i]->name<<endl;
        }
    }
}