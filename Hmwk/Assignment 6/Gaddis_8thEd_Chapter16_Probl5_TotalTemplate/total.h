/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Total Template
 */

#ifndef TOTAL_H
#define TOTAL_H

template <class T>
T total(int num)
{
    T total = 0;
    T value = 0;
    for(int i = 1; i <= num; i++)
    {
    cout<<"Input the Value of Array #"<<i<<": "; 
    cin>>value;
    total = total + value; // += might not work with type T
    }
    cout<<"====================================="<<endl;//title
    cout<<"               Results"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Total of Array is Equals to: "<<total<<endl;
    return total;
};

#endif /* TOTAL_H */

