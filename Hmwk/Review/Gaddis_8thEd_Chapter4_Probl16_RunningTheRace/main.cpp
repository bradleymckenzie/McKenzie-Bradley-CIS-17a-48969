/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on September 15, 2017
 Purpose: Takes three runners and the there times to finish a race. 
          Then display who came in first, second, and third place.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time1,time2,time3;
    string runner1,runner2,runner3;
    //Input Values
    cout<<"This is a program identifies which place each runner got"<<endl;
    cout<<"out of three runners."<<endl;
    cout<<"Enter the first runner's name."<<endl;
    getline(cin,runner1);
    cout<<"Enter the first runner's time."<<endl;
    cin>>time1;
    if(time1 <= 0)
        cout<<"Only positive times are allowed."<<endl;
        cin.ignore();
    cout<<"Enter the second runner's name."<<endl;
    getline(cin,runner2);
    cout<<"Enter the second runner's time."<<endl;
    cin>>time2;
    if(time2 <= 0)
        cout<<"Only positive times are allowed."<<endl;
        cin.ignore();
    cout<<"Enter the third runner's name."<<endl;
    getline(cin,runner3);
    cout<<"Enter the third runner's time."<<endl;
    cin>>time3;
    if(time3 <= 0)
        cout<<"Only positive times are allowed."<<endl;
        cin.ignore();
    //Process by mapping inputs to outputs
    {
    if(time1 < time2 && time1 < time3)//check if runner1 came in first
    {
    if(time2 < time3) //if runner1 did, then check to see where runner2 and runner3 placed
    {
        cout<<"\t"<<runner1<<" came in first with a time of "<<time1<<" (units of time)."<<endl;
        cout<<"\t"<<runner2<<" came in second with a time of "<<time2<<" (units of time)."<<endl;
        cout<<"\t"<<runner3<<" came in third with a time of "<<time3<<" (units of time)."<<endl;
    }
    else
    {
        cout<<"\t"<<runner1<<" came in first with a time of "<<time1<<" (units of time)."<<endl;
        cout<<"\t"<<runner3<<" came in second with a time of "<<time3<<" (units of time)."<<endl;
        cout<<"\t"<<runner2<<" came in third with a time of "<<time2<<" (units of time)."<<endl;
    }
  }
}
{
    if(time2 < time1 && time2 < time3)//check if runner2 came first
    {
    if(time1 < time3) //if runner2 did, then check to see where runner1 and runner3 placed
    {
        cout<<"\t"<<runner2<<" came in first with a time of "<<time2<<" (units of time)."<<endl;
        cout<<"\t"<<runner1<<" came in second with a time of "<<time1<<" (units of time)."<<endl;
        cout<<"\t"<<runner3<<" came in third with a time of "<<time3<<" (units of time)."<<endl;
    }
    else
    {
        cout<<"\t"<<runner2<<" came in first with a time of "<<time2<<" (units of time)."<<endl;
        cout<<"\t"<<runner3<<" came in second with a time of "<<time3<<" (units of time)."<<endl;
        cout<<"\t"<<runner1<<" came in third with a time of "<<time1<<" (units of time)."<<endl;
    }
  }
}
{
if(time3 < time1 && time3 < time2)//check if runner3 came first
  {
    if(time2 < time1) //if runner3 did, then check to see where runner1 and runner2 placed
    {
        cout<<"\t"<<runner3<<" came in first with a time of "<<time3<<"."<<endl;
        cout<<"\t"<<runner2<<" came in second with a time of "<<time2<<"."<<endl;
        cout<<"\t"<<runner1<<" came in third with a time of "<<time1<<"."<<endl;
    }
    else
    {
        cout<<"\t"<<runner3<<" came in first with a time of "<<time3<<"."<<endl;
        cout<<"\t"<<runner1<<" came in second with a time of "<<time1<<"."<<endl;
        cout<<"\t"<<runner2<<" came in third with a time of "<<time2<<"."<<endl;
    }
  }
}
    //Output Values
    
    //Exit stage right!
    return 0;
}

