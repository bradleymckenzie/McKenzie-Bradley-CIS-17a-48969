/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 26, 2017
 Purpose: Test Score #2: Modify the program of Programming Challenge 2 to allow
 * the user to enter name-score pairs. For each student taking a test, the user
 * types the student’s name followed by the student’s integer test score. Modify
 * the sorting function so it takes an array holding the student names and an
 * array holding the student test scores. When the sorted list of scores is
 * displayed, each student’s name should be displayed along with his or her
 * score. In stepping through the arrays, use pointers rather than array
 * subscripts.
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
    int SIZE;
    scores = new int[SIZE];
    string names[SIZE];
    //Input Values
    cout<<"\t--------------------------------"<<endl;
    cout<<"\t\t   Test Scores #2"<<endl;
    cout<<"\t--------------------------------"<<endl;
    while (numberOfScores <= 0){
        cout<<"Enter number of test scores: ";
        cin>>numberOfScores;
    }
    
    SIZE = numberOfScores;
    
    for (int i=0; i<numberOfScores; i++){
        cout<<"Enter student #"<< i+1 <<"'s name: ";
        cin.ignore();
        getline(cin , *(names+i));
        cout<<"Enter test score for student: ";
        cin>>*(scores+i);
    }

    //Process by mapping inputs to outputs
    sortAsc(scores, numberOfScores);
    //Output Values
    cout<<"\t--------------------------------"<<endl;
    cout<<"\t\t     Results"<<endl;
    cout<<"\t--------------------------------"<<endl;
    cout<<"\tScores sorted: "<<endl;
    for (int i=0; i<SIZE; i++){
        cout<<setw(8)<<" "<< *(names+i)<< ": "<< *(scores+i)<<endl;
    }
    cout<<"\t--------------------------------"<<endl;
    cout<<"\tThe class average scores is: "<<scoreAverage(scores, numberOfScores)<<endl;
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