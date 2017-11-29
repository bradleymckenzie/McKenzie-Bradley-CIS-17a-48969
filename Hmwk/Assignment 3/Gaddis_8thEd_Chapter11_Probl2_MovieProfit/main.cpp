/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 02, 2017
 Purpose: Movie Profit: Modify the Movie Data program written for Programming 
 * Challenge 1 to include two additional members that hold the movie’s production
 * costs and first-year revenues. Modify the function that displays the movie
 * data to display the title, director, release year, running time, and first
 * year’s profit or loss.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
struct MovieData{
    string title; //title of movie
    string director; //name of director
    int year; //year released
    int runTime; //total run time in minutes    
    int production;//production cost
    int fyRevenue;//first year revenue
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
MovieData movie1 = {"American Sniper", "Clint Eastwood", 2014, 133, 60000000,
    337000000};
MovieData movie2 = {"Lone Survivor", "Peter Berg", 2013, 121, 40000000,
    154800000};
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
    cout<<"\tFirst Year Profit: $"<<(movieData.fyRevenue)-(movieData.production)<<endl;
    cout<<"\t----------------------------"<<endl;
}