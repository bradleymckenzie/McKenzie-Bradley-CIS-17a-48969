/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 9th, 2017, 1:40 PM
 * Purpose:  Class Array specification
 */

#ifndef ARRAY_H
#define ARRAY_H

template <class T>
class Array{
    private:
        int size;
        T *data;
    public:
        Array(int);
        ~Array(){delete []data;}
        sort();
        print(int);
        int getSize(){return size;}
        push(T);
        T pop();
        T& operator[] (int indx) {
          if(indx>=0&&indx<size)return data[indx];
          return data[0];
        }
};

#endif /* ARRAY_H */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

template <class T>
Array<T>::Array(int n){
    if(n<=1)n=2;
    size=n;
    data=new T[size];
    for(int i=0;i<size;i++){
        data[i]=rand()%52+48;//[10-99]
    }
}

template <class T>
Array<T>::sort(){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(data[i]>data[j]){
                T temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
}
        
template <class T>
Array<T>::print(int perLine){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

template <class T>
Array<T>::push(T x){
    T *newData=new T[size+1];
    for(int i=0;i<size;i++){
        newData[i]=data[i];
    }
    newData[size]=x;
    delete []data;
    size++;
    data=newData;
}

template <class T>
T Array<T>::pop(){
    size--;
    T *newData=new T[size];
    for(int i=0;i<size;i++){
        newData[i]=data[i];
    }
    T x=data[size];
    delete []data;
    data=newData;
    return x;
}