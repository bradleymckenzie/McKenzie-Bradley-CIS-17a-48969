/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdlib>
#include "IntArray.h"

using namespace std;

IntArray::IntArray(int s){
    arraySize = s;
    aptr = new int [s];
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = 0;
}

IntArray::IntArray(const IntArray &obj){
    arraySize = obj.arraySize;
    aptr = new int [arraySize];
    for(int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
}

IntArray::~IntArray(){
    if (arraySize > 0) delete [] aptr;
}

int &IntArray::operator[](const int &sub) {
    if (sub < 0 || sub >= arraySize){
        string excStr = "ERROR: Subscript out of range.";
        throw excStr;
    }
        return aptr[sub];
}