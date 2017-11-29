/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 23, 2017
 Purpose: Test Scores #1: Write a program that dynamically allocates an array 
 * large enough to hold a user- defined number of test scores. Once all the 
 * scores are entered, the array should be passed to a function that sorts them 
 * in ascending order. Another function should be called that calculates the 
 * average score. The program should display the sorted list of scores and 
 * averages with appropriate headings. Use pointer notation rather than array 
 * notation whenever possible.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
int *getScores(int);
void sortAsc(int [], int);
int scoreAverage(int [], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int numberOfScores = -1;
    int *scores;
    int perLine=10;
    //Input Values
    while (numberOfScores <= 0){
        cout<<"Enter number of test scores: ";
        cin>>numberOfScores;
    }
	scores = getScores(numberOfScores);
    //Process by mapping inputs to outputs
    sortAsc(scores, numberOfScores);
    //Output Values
    cout<<"\t--------------------------------"<<endl;
    cout<<"\t\t     Results"<<endl;
    cout<<"\t--------------------------------"<<endl;
    cout<<"\tScores sorted: "<<endl;
    cout<<setw(9)<<" ";
    for (int i = 0; i < numberOfScores; i++){
        cout<<scores[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
    
    cout<<"\tThe average of all scores is: "<<scoreAverage(scores, numberOfScores)<<endl;
    cout<<"\t--------------------------------"<<endl;
    //Exit stage right!
    delete [] scores;
    return 0;
}

int scoreAverage(int arr[], int size){
    float total = 0;
    for (int i = 0; i < size; i++){
        total+=arr[i];
    }
    return total/size;
}

int *getScores(int num){
    int *arr;
    if (num > 0){
        arr = new int[num];
        for (int i = 0; i < num; i++){
            cout<<"Enter score: ";
            cin>>arr[i];
             while (arr[i] < 0){
                  cout<<"Renter score: ";
                  cin>>arr[i];
             }
        }
    }
    return arr;
}

void sortAsc(int arr[],int size){
    int start, minIndex;
    int minElem;
    for (start = 0; start < size-1; start++){
        minIndex = start;
        minElem = arr[start];
        for (int i = start+1; i < size; i++){
            if ((arr[i]) < minElem){
                minElem = arr[i];
                minIndex = i;
            }
        }
        arr[minIndex] = arr[start];
        arr[start] = minElem;
    }
}