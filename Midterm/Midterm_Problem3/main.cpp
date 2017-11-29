/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 27, 2017
 Purpose: Midterm Problem 3: Write a function using the following structure and
 * prototype. struct Stats {
 * float avg;     //Average value of an integer array
 * float median;  //Median value  of an integer array
 * int   *mode;   //array containing the modes
 * int   nModes;  //number of modes in the array
 * int   maxFreq; //max frequency of modes
};
 * Stats *avgMedMode(int *,int); 
 * The function takes in an integer array and the size of the array.
 * Then returns a pointer to a structure containing the average, median
 * and mode.  You will then write a printStat() function that will print
 * the results contained in the stats structure.  I will input a small 
 * integer array to test this out so ask for how many inputs to fill the array, 
 * then the values to place into the array.  Make sure you delete the 
 * dynamic array creation for the mode when you exit the problem.
 * Note:  The array may have no modes, 1 mode or many modes.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Stats{
    float avg;     //Average value of an integer array
    float median;  //Median value  of an integer array
    int   *mode;   //array containing the modes
    int   nModes;  //number of modes in the array
    int   maxFreq; //max frequency of modes
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
Stats *avgMedMode(int *,int); 
Stats printStat(int*,int,Stats*);
void prntAry(int *,int);
void markSrt(int *,int);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Title
cout<<"========================================================"<<endl;
cout<<"               Mean Median Mode Program"<<endl;
cout<<"========================================================"<<endl;
//Declare Variables
int arrayS = 0;//number inputs to fill array
int *arrayV;//array values
Stats *cal;
//Input Values
cout<<"  Enter the number of inputs for this array: ";
cin>>arrayS;//input array size

arrayV=new int[arrayS];

for (int index = 0; index < arrayS; index++){
    cout<<"  Enter the array value for "<<index + 1<<": ";
    cin>>arrayV[index];//input array values
}
//Process by mapping inputs to outputs
cout<<"========================================================"<<endl;
markSrt(arrayV, arrayS);//sort
cout<<"Sorted Array: ";
prntAry(arrayV, arrayS);//print sorted array
cal = avgMedMode(arrayV, arrayS);//calculation
//Output Values
cout<<"========================================================"<<endl;
cout<<"\t\t        Results"<<endl;
cout<<"========================================================"<<endl;
printStat(arrayV, arrayS, cal);//print results
//Exit stage right/free memory!
delete[] arrayV;
delete[] cal;
return 0;
}

Stats *avgMedMode(int *a,int size){
    Stats *aMM = new Stats;
    
    //freq calculation
    int *freq=new int[size];
    for (int i=0;i<size;i++){
        freq[i]=0;
    }//loop from 0 to size
    for (int i=0;i<size;i++){
        freq[a[i]]++;
    }
    //max calculation
    int max=0;
    for (int i=0;i<size;i++){
        if (freq[i]>max)
            max=freq[i];
    }
    aMM->maxFreq=max;
    //mode calculation
    aMM->nModes=0;
    for (int i=0;i<size;i++){
        if (freq[i]== aMM->maxFreq)
            aMM->nModes++;
    }
    //mode calculation
    int *modeAry=new int[aMM->nModes];
    int index=0;
    for (int i=0;i<size;i++){
        if (freq[i]==aMM->maxFreq){
            modeAry[index]=i;
            index++;
        }
    }
    aMM->mode = modeAry;
    //mean calculation
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=*(a+i);
    }
    aMM->avg=sum/size;
    //median calculation
    markSrt(a,size);
    if (size%2==0){
        aMM->median=a[size/2];
    }else
        aMM->median=a[(size/2)-1];
    //free memory
    delete []freq;
    return aMM;
}

Stats printStat(int *array, int size, Stats *cal){
    //max frequency and number of modes output
    cout<<"Max Frequency: "<<cal->maxFreq<<" "<<endl;
    cout<<"Number of Modes: "<<cal->nModes<<endl;
    if (cal->nModes>1){
        cout<<"The modes are: ";
    }else
        cout<<"The mode is: ";
    //mode output
    cout<<cal->mode<<endl;
    prntAry(cal->mode,cal->nModes);
    //median output
    cout<<"The median is ";
    cout<<cal->median;
    //mean output
    cout<<endl;
    cout<<"The mean of this set is ";
    cout<<cal->avg;
    cout<<endl;
    cout<<"========================================================"<<endl;
    //free memory
    delete[] array;
}

void markSrt(int *a,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int row=pos+1;row<n;row++){
            if(*(a+pos)>*(a+row)){
                *(a+pos)=*(a+pos)^*(a+row);
                a[row]=a[pos]^a[row];
                *(a+pos)=*(a+pos)^*(a+row);
            }
        }
    }
}

void prntAry(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}