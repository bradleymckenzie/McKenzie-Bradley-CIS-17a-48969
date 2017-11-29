/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 02, 2017
 Purpose: Movie Data: Write a program that uses a structure named MovieData to
 * store the following information about a movie: Title, Director, Year
 * Released, Running Time (in minutes).The program should create two MovieData
 * variables, store values in their members, and pass each one, in turn, to a
 * function that displays the information about the movie in a clearly formatted
 * manner.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct MovieData{
    string title; //title of movie
    string director; //name of director
    int year; //year released
    int runTime; //total run time in minutes    
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
void showMovie(MovieData &);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
MovieData movie1 = {"American Sniper", "Clint Eastwood", 2014, 133};
MovieData movie2 = {"Lone Survivor", "Peter Berg", 2013, 121};
//Input Values
cout<<"\t============================"<<endl;
cout<<"\t\t  Movie Data"<<endl;
cout<<"\t============================"<<endl;
//Process by mapping inputs to outputs

//Output Values
showMovie(movie1);
showMovie(movie2);
//Exit stage right!
return 0;
}

void showMovie(MovieData &movieData){
    cout<<"\t----------------------------"<<endl;
    cout<<"\tMovie Title: "<<movieData.title<<endl;
    cout<<"\tDirector: "<<movieData.director<<endl;
    cout<<"\tYear Released: "<<movieData.year<<endl;
    cout<<"\tRunning Time: "<<movieData.runTime<<" minutes"<<endl;
    cout<<"\t----------------------------"<<endl;
}