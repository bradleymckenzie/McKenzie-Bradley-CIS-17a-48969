/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on November 2, 2017
 Purpose: Project 1
 */

//System Libraries
#include <iostream> //Standard library
#include <cstdlib>  //Random Numbers/Exit
#include <ctime>    //Time to set the seed
#include <fstream>  //File stream library
#include <iomanip>  //Format library
#include <string>   //String library
#include <vector>   //Vector library
#include <cstring>  //Character string

using namespace std;
//User Libraries

//Global Constants
const int PERCENT=100;//Calculate Wins and Losses Percentages
const int HUNDRDS=100;//Limit Number of Games 100's
const int TENS=10;//Limit to 10's
//Constants for Structure Inputs
const int IN = 1;
const int SIZE = 8;
const int COLOR = 4;
const int SIZE_1 = 28;
const int SIZE_2 = 29;
struct Inputs{
    string passwrd;//Password
    string usrname;//Username
    string bcolor;//Bet Color
    string rcolor;//Result Color
    float bet;//Bet Amount
    float payout;//Pay Out Result
    float sum = 0;//Total Winnings
    float pwings = 0;//Possible Wins
    float wins = 0;//Number of Wins
    float losses = 0;//Number of Losses
    string vcolor[SIZE] = {"Red","red","RED","r","Blue","blue", "BLUE","b"};//Valid Color
    string red[COLOR] = {"Red","red","RED","r"};//Land on Red
    string blue[COLOR] = {"Blue","blue","BLUE","b"};//Land on Blue
    char endcard1[SIZE_1] = {"    Thank You, for Playing."};//Character string
    char endcard2[SIZE_2] = {"  A Game By Bradley McKenzie"};//Character string
    int nGames[COLOR] = {3, 5, 8, 10};//Standard Number of Games
};

//Function Prototypes
int percRes(float, float);//Calculate Wins and Loss Percentage
void respond(float);//Output a respond based on Winnings
bool wnta(float = 0);//Respond if player losses money
void disHi();//Display High Score Yes or No
void getUser();//Search for a username
bool findCol(string [], int , string);//Test Color
//Executable code begins here!!!
int main(int argc, char** argv) {
//Set the random number seed for wheel spin
 srand(static_cast<unsigned int>(time(0)));
//Structure setup
 Inputs input[IN];
//Instantiate and Open files
 ifstream in;
 ofstream out;
 ofstream hi;
 in.open("NumberOfGames.txt");//Input Number of Games
 out.open("ResultsOfGames.txt");//Output Result of Games
 hi.open("HighScoreOfGames.txt");//Output Score if Winnings > 0
//Input Values//Structure in Use
 for (int index = 0; index < IN; index++){
 //Declare Variables-Pointer Array
  int *ptr = nullptr;
  ptr = &input[index].nGames[0];//Select Standard Number of Games
 //Title
 cout<<"       Double or Nothing"<<endl;
 cout<<"   A Game By Bradley McKenzie"<<endl<<endl;
 cout<<"Enter Username: ";
 getline(cin,input[index].usrname);//Get Username
 do{
     cout<<"Enter Password: ";
     getline(cin,input[index].passwrd);//Get Correct Password
     if(input[index].passwrd!="password")//If password is wrong ask for it again
       cout<<" Incorrect Password, Please Try Again: ";
 }while(input[index].passwrd!="password");cout<<endl;

 while(in>>*ptr);//Loop to end
 *ptr=*ptr>HUNDRDS?TENS:*ptr;//Limit the number of games

 for(int game=1;game<=*ptr;game++){//Loop the Game
     cout<<"Enter the Amount of Your Bet: $";
     cin>>input[index].bet;//Bet amount input
    while(input[index].bet<=0){//Not allow bet to negative or 0
         cout<<" Invalid: Bet Must be Greater Than $0."<<endl;
         cout<<" Enter the Amount of Your Bet: $";
         cin>>input[index].bet;//Bet amount input
     }
     //Input validation loop
     cout<<"Place Bet On (Red or Blue): ";
     cin>>input[index].bcolor;//Bet color input
     bool valid = false;
     for(int i=0;i<SIZE && !valid ;i++){//Check if bet color is valid
         if (input[index].bcolor == input[index].vcolor[i]) valid = true;
     }
     //if !valid, then output invalid message
     if(!valid){//If not valid ask for bet color again
         cout<<" Invalid: Bet Color Must be (Red or Blue)"<<endl;
         cout<<" Place Bet On (Red or Blue): ";
         cin>>input[index].bcolor;//Bet color input
     }
    //end input validation loop
    //Process by mapping inputs to outputs
    //Last line will be number of games from file
    //Call random number generator for the color landed on
     int lcolor=rand()%26+1;//Value from 1 to 26 //Spin Wheel
      if(lcolor % 2 == 0){//Land on Red
          if(findCol(input[index].red, COLOR, input[index].bcolor))
          {//Bet Won
               input[index].rcolor="Red";
               input[index].payout=input[index].bet*2;//Double Bet
               input[index].wins++;//Add plus one win
          }
          else if(findCol(input[index].blue, COLOR, input[index].bcolor))
          {//Bet Loss
               input[index].rcolor="Red";
               input[index].payout=-input[index].bet;//Minus Bet
               input[index].losses++;//Add plus one loss
          }
          else{//Invalid Input
               input[index].rcolor="Invalid: Bet Color";
               input[index].payout=0;
          }
          //Output Game Result for Land on Red
          cout<<fixed<<setprecision(2);
          cout<<"  The spinner landed on: "<<input[index].rcolor<<endl;
          cout<<"  Your pay out is: $"<<input[index].payout<<endl;
          
          out<<"  The spinner landed on: "<<input[index].rcolor<<endl;
          out<<"  Your pay out is: $"<<input[index].payout<<endl;
      }
      else{//Land on Blue
          if(findCol(input[index].blue, COLOR, input[index].bcolor)){//Bet Won
              input[index].rcolor="Blue";
              input[index].payout=input[index].bet*2;//Double bet
              input[index].wins++;//Add plus one win
          }
          else if(findCol(input[index].red, COLOR, input[index].bcolor)){//Bet Loss
              input[index].rcolor="Blue";
              input[index].payout=-input[index].bet;//Minus Bet
              input[index].losses++;//Add plus one loss
          }
          else{//Invalid Input
              input[index].rcolor="Invalid Bet Color";
              input[index].payout=0;
          }

          //Output Game Result For Land on Blue
          cout<<fixed<<setprecision(2);
          cout<<"  The spinner landed on: "<<input[index].rcolor<<endl;
          cout<<"  Your pay out is: $"<<input[index].payout<<endl;
          
          out<<"  The spinner landed on: "<<input[index].rcolor<<endl;
          out<<"  Your pay out is: $"<<input[index].payout<<endl;
      }
     input[index].sum += input[index].payout;//Get Sum of Pay Out
     input[index].pwings += input[index].bet*2;//Get Sum of Bet
     cout<<"  Current Winning: $"<<input[index].sum<<endl<<endl;//Display Current Winnings 
 }
 if(input[index].sum>=0){//Output Username and Total Winnings if Winnings is > 0
     hi<<"Username: "<<input[index].usrname<<" || Total Winnings: $"<<input[index].sum<<"\r\n";
 }
 hi.close();//Close High Score File

//Output Percentage of Wins and Losses
 cout<<fixed<<setprecision(2);
 out<<fixed<<setprecision(2);
 cout<<" -----------------------------"<<endl;
 cout<<"  Percentage Wins of = "<<percRes(input[index].wins,*ptr)<<"%"<<endl;//Percent Wins
 cout<<"  Percentage of Losses = "<<percRes(input[index].losses,*ptr)<<"%"<<endl;//Percent Losses
 cout<<"  Possible Winnings: $"<<input[index].pwings<<endl;//Possible Winnings
 cout<<"  Total Winning: $"<<input[index].sum<<endl;//Actual Winnings
 cout<<" -----------------------------"<<endl;
 respond(input[index].sum);//Output Result Based on Winnings
 wnta(input[index].sum);//Respond if player losses money
 out<<" -----------------------------"<<endl;
 out<<"  Percentage of Wins = "<<percRes(input[index].wins,*ptr)<<"%"<<endl;//Percent Wins
 out<<"  Percentage of Losses = "<<percRes(input[index].losses,*ptr)<<"%"<<endl;//Percent Losses
 out<<"  Possible Winnings: $"<<input[index].pwings<<endl;//Possible Winnings
 out<<"  Total Winning: $"<<input[index].sum<<endl;//Actual Winnings
 out<<" -----------------------------"<<endl;
 cout<<input[index].endcard1<<endl;
 cout<<input[index].endcard2<<endl;
 cout<<endl;
 cout<<"  Show High Scores (Y or N): ";//Display High Score From File
 disHi();//Get Y or N input then show high scores or exit

//Find a username in high score file
 getUser();
//Close Files and Exit stage right!
 in.close();
 out.close();
 return 0;
 }
}

int percRes(float wl, float nGames){//Calculate Wins and Loss Percentage
    return (int)(((float)PERCENT)*wl/nGames);
    }

void respond(float n){//Output a respond based on Winnings
    if(n<=0){//Loss money respond
        cout<<"     Better Luck Next Time."<<endl;
    }
    else if(5000000>n && n>0){//Won money respond
        cout<<"\t   Nice Job!"<<endl;
    }
    else if(n>=5000000){//Won a lot of money respond
        cout<<"      Quitting Your Job?"<<endl;
    }
}

bool wnta(float n){//Respond if player losses money
    if(n<=0){
        cout<<"      Why Not Try Again?"<<endl;
    }
    return true;
}

void disHi(){//Display High Score Yes or No
    string in;
    char openHi;//Declare option to display high score
    cin>>openHi;//Get Yes or No
    if(openHi=='Y' || openHi=='y'){//Input Y or y to open high score
        ifstream inFile("HighScoreOfGames.txt");
        if(inFile){
            while(!inFile.eof()){
                //Input each line of the file
                 getline(inFile, in);
                 cout<<in<<endl;
            }
        }
    }
    else{
        exit(0);
    }
}

void getUser(){//Search for a username
    int offset;
    string line;
    string find;
    ifstream inFind("HighScoreOfGames.txt");//Input High Score File
    cout<<"Enter Username to Search For: ";
    getline(cin,find);
    cin.ignore();
    if(inFind.is_open()){

    while(!inFind.eof()){
        getline(inFind,line);
        if((offset = line.find(find,0)) != string::npos){
            cout<<"   The Word Has Been Found"<<find<<endl;
        }
    }
    inFind.close();}//Close File
    else
        cout<<"   Could Not Open File"<<endl;
    }

bool findCol(string c[], int cSize, string test){//Test Color
    bool result = false;
    for (int i = 0; i  < cSize ; i++){
        if (c[i] == test) result = true;
    }
    return result;
}