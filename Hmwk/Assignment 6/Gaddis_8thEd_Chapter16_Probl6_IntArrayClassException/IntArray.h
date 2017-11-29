/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: IntArray Class Exception
 */

#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray{
    private:
        int *aptr;
        int arraySize;
    public:
        IntArray(int);
        IntArray(const IntArray &);
        ~IntArray();
        int size() const
        {
            return arraySize;
        }
        int &operator[](const int &);
};

#endif /* INTARRAY_H */

