/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 04, 2017
 Purpose: Soccer Scores: Write a program that stores the following data about a
 * soccer player in a structure: The program should keep an array of 12 of these
 * structures. Each element is for a different player on a team. When the
 * program runs it should ask the user to enter the data for each player. It
 * should then show a table that lists each player’s number, name, and points
 * scored. The program should also calculate and display the total points earned
 * by the team. The number and name of the player who has earned the most
 * points should also be displayed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Soccer
{
    string pname;
    int pnumber;
    int pscored;
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
bool validate(int);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
  const int PLAYERS = 13;
  Soccer soccerData[PLAYERS];
  int index;
  int num = 0, tscored = 0, mvp = 0;
//Input Values
  cout<<"-------------------------------------------------"<<endl;
  cout<<"------------------Soccer Scores------------------"<<endl;
  cout<<"-------------------------------------------------"<<endl;
  for (index = 1; index < PLAYERS; index++){
      cout<<"For Player "<<(index)<<","<<endl;
      cout<<"  Enter Player's Name: ";
      getline(cin, soccerData[index].pname);
      
      do{
      cout<<"  Enter Player's Number: ";
      cin>>soccerData[index].pnumber;
      }while(validate(soccerData[index].pnumber));
      
      do{
      cout<<"  Enter Points Soccer by Player: ";
      cin>>soccerData[index].pscored;
      }while(validate(soccerData[index].pscored));
      
      cin.ignore();
      tscored+=soccerData[index].pscored;
  }
//Process by mapping inputs to outputs

//Output Values
  cout<<endl;
  cout<<"-------------------------------------------------"<<endl;
  cout<<"------------------Session Stats------------------"<<endl;
  cout<<"-------------------------------------------------"<<endl;
  for(int i = 1; i < PLAYERS; i++){
    cout<<"#"<<setw(3)<<left<<soccerData[i].pnumber<<setw(24)<<left <<
            soccerData[i].pname<<" || Goals Scored: "<<soccerData[i].pscored<<endl;
    if(soccerData[i].pscored > soccerData[i+1].pscored)
    mvp = i;
  }
  cout<<"-------------------------------------------------"<<endl;
  cout<<"    The MVP - "<<soccerData[mvp].pname<<" #"<<soccerData[mvp].pnumber<<" With "<<soccerData[mvp].pscored<<" Goals Scored"<<endl;
  cout<<"             Team Total Goals: "<<tscored<<endl;
  cout<<"-------------------------------------------------"<<endl;
//Exit stage right!
return 0;
}

bool validate(int check)
{
    if(check >= 0)
        return false;
    cout<<"Error: Input Value Must Be Postive"<<endl;
	return true;
}