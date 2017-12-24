/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on December 4, 2017
 Purpose: Project 2: Double or Nothing x 2 Function
 */

#include <iostream>
#include <string>
#include <iomanip>

#include "dornx2.h"
using namespace std;

bool findColo(string c[], int cSize, string test){//Test Color
    bool result = false;
    for (int i = 0; i  < cSize ; i++){
        if (c[i] == test) result = true;
    }
    return result;
}

void Dornx2::dornx1(float n){//Free Spin Function
//Set the random number seed for wheel spin
srand(static_cast<unsigned int>(time(0)));
//if pay out is negative run free spin wheel
if (n<=0){
    cout<<"      Double or Nothing"<<endl;
    cout<<"    Free Spin for a Prize"<<endl;
    cout<<" -----------------------------"<<endl;
    cout<<"Hit Enter to Spin Wheel...";
    cin.ignore();
    while (cin.get()!='\n');//Get Key Input
    int lcolor=rand()%10+1;//Value from 1 to 10 //Spin Wheel
    response(lcolor);//Run Response Function for Wheel Spin
    }
}

void Dornx2::dornx2(float n){//Double or Nothing x 2 Function
//Set the random number seed for wheel spin
srand(static_cast<unsigned int>(time(0)));
//if pay out is positive ask to pay double or nothing x 2
if (n>0){
    cout<<"     Double or Nothing x 2"<<endl;
    cout<<"    Would you like to play?"<<endl;
    cout<<"     Enter Yes or No: ";
    cin>>respond;//get response
    cout<<" -----------------------------"<<endl;
    bet=n;//set n(sum) to bet
    if(respond=="Yes" || respond=="yes" || respond=="Y" || respond=="y"){
        cout<<"Entering Your Bet: $"<<bet<<endl;
 //Input validation loop
 cout<<"Place Bet On (Red or Blue): ";
 cin>>bcolor;//Bet color input
 bool valid = false;
 for(int i=0;i<8 && !valid ;i++){//Check if bet color is valid
     if (bcolor == vcolor[i]) valid = true;
 }
 //if !valid, then output invalid message
 if(!valid){//If not valid ask for bet color again
     cout<<" Invalid: Bet Color Must be (Red or Blue)"<<endl;
     cout<<" Place Bet On (Red or Blue): ";
     cin>>bcolor;//Bet color input
 }
//end input validation loop
//Process by mapping inputs to outputs
//Last line will be number of games from file
//Call random number generator for the color landed on
 int lcolor=rand()%26+1;//Value from 1 to 26 //Spin Wheel
  if(lcolor % 2 == 0){//Land on Red
      if(findColo(red, 4, bcolor))
      {//Bet Won
           rcolor="Red";
           payout=bet*2;//Double Bet
           wins++;//Add plus one win
      }
      else if(findColo(blue, 4, bcolor))
      {//Bet Loss
           rcolor="Red";
           payout=-bet;//Minus Bet
           losses++;//Add plus one loss
      }
      else{//Invalid Input
           rcolor="Invalid: Bet Color";
           payout=0;
      }
      //Output Game Result for Land on Red
      cout<<fixed<<setprecision(2);
      cout<<"  The spinner landed on: "<<rcolor<<endl;
      cout<<"  Your pay out is: $"<<payout<<endl;
  }
  else{//Land on Blue
      if(findColo(blue, 4, bcolor)){//Bet Won
          rcolor="Blue";
          payout=bet*2;//Double bet
          wins++;//Add plus one win
      }
      else if(findColo(red, 4, bcolor)){//Bet Loss
          rcolor="Blue";
          payout=-bet;//Minus Bet
          losses++;//Add plus one loss
      }
      else{//Invalid Input
          rcolor="Invalid Bet Color";
          payout=0;
      }

      //Output Game Result For Land on Blue
      cout<<fixed<<setprecision(2);
      cout<<"  The spinner landed on: "<<rcolor<<endl;
      cout<<"  Your pay out is: $"<<payout<<endl;
  }
 sum += payout;//Get Sum of Pay Out
 pwings += bet*2;//Get Sum of Bet
 cout<<"  Total Winning: $"<<sum<<endl;//Display Total Winnings 
        }
    }
}