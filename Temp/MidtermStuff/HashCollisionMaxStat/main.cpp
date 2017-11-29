/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 *Created on October 14, 2014, 11:59 AM
 */

#include <cstdlib>
#include <vector>
#include <map>
#include <ctime>
#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Loop on the power
    for(int j=5;j<=25;j++){
        //Size of vector
        int size=pow(2,j);
        vector<int> v(size,0);
        map<int,int> m;
        //Randomly pick a spot for collision
        for(int i=0;i<size;i++){
            v[rand()%size]++;
        }
        //Count the Elements in the vector
        for(int i=0;i<size;i++){
            m[v[i]]++;
        }
        //Output the results
        cout<<endl<<"Collision Vector Length = 2^"<<j<<"="<<size<<endl;
        for(int i=0;i<m.size();i++){
            cout<<i<<" occured "<<m[i]<<" times "<<100.0*m[i]/size<<"%"<<endl;
        }
        cout<<endl;
    }
    //Exit
    return 0;
}