/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 18, 2017
 Purpose: Lab 2 Statistics: Create functions which calculate the mean, then the 
 * median, then the mode from a randomly filled array. The mode function 
 * will return an array with the following characteristics, mode array 
 * positions: [0] -> Number of modes, [1] -> Mode Frequency, [2 to #modes + 1]
 * -> All the mode values.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
int *filArry(int);
void mean(int [],int);
void median(int [],int);
int *mode(int [],int);
void prntAry(int *,int);
void markSrt(int *,int);
void destroy(int *);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int aSize=100;
    int *array=filArry(aSize);
    //Input Values
    
    //Process by mapping inputs to outputs
    
    //Output Values
    mode(array,aSize);
    median(array, aSize);
    mean(array, aSize);
    //Exit stage right!
    destroy(array);
    return 0;
}

int *filArry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;//[10-99]
    }
    return a;
}

void prntAry(int *a,int n){
    for(int i=0;i<n;i++){
        for( int j = 0; j <= 10; ++j){
            cout<<a[i]<<" ";
            ++i;
        }
        cout<<endl;
    }
}
void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void destroy(int *a){
    delete []a;
}

void mean(int num[],int SIZE){
    float mean, sum=0;
    cout<<"The Mean of this array"<<endl;
    for(int j=0;j<SIZE;j++){
        for(int i = 0; i <= 10; ++j){
           cout<<num[j]<<" ";
            ++i;
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<SIZE;i++){
        sum+=num[i];
    }
    mean=sum/SIZE;
    cout<<"Mean: "<<mean;
    cout<<endl;
    median(num, SIZE);
}

void median(int num[],int SIZE){
    int med_pos1, med_pos2, oddMed;
    float medianSUM, median;
    cout<<"The Median of this array"<<endl;
    for(int j=0;j<SIZE;j++){
       for(int i = 0; i <= 10; ++j){
           cout<<num[j]<<" ";
            ++i;
        }
        cout<<endl;
    }
    
    cout<<endl;
    if(SIZE%2==0){
        med_pos1=SIZE/2;        
        med_pos2=SIZE/2-1;
        medianSUM=num[med_pos1]+num[med_pos2];
        median=medianSUM/2;
        
    }
    else if(SIZE%2!=0){
        oddMed=((SIZE-1)/2);
        median=num[oddMed];
    }
    cout<<"Median: "<<median<<endl;
    mode(num,SIZE);
}
int *mode(int num[],int SIZE){
    int temp_freq=1;
    int max_freq=1;
    
    for (int i=0;i<SIZE;i++){
        int numVal=num[i];
        if(numVal==num[i+1]){
            temp_freq++;
        }
        if(temp_freq>max_freq){
            max_freq=temp_freq;
        }
        if(numVal!=num[i+1]){
            temp_freq=1;
        }
    }
    cout<<"The mode frequency is: "<<max_freq<<endl;
    
    return 0;
}