/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: Simple Vector Class
 */

#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class SimpleVector
{
private:
	T *aptr;
	int arraySize;
	int count;
	void subError();		// Handles subscripts out of range
public:
	// Exception classes.
	class ArrayFull
	{};	// Empty class declaration
	class ArrayEmpty
	{};
	SimpleVector(int);						// Constructor
	SimpleVector(const SimpleVector &);		// Copy constructor
	~SimpleVector();						// Destructor
	int size()
		{ return arraySize; }
	T &operator[](int);		// Overloaded [] operator
	void print();			// outputs the array elements.
	void push_back(T);
	void pop_back();
};

//********************************************************
// Constructor for SimpleVector class. Sets the size     *
// of the array and allocates memory for it.             *
//********************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	aptr = new T [s];
	for (int count = 0; count < arraySize; count++)
		aptr[count] = T();
}
//********************************************************
// Copy Constructor for SimpleVector class.              *
//********************************************************
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
	arraySize = obj.arraySize;
	aptr = new T [arraySize];
	for (int count = 0; count < arraySize; count++)
		aptr[count] = obj[count];
}
//********************************************************
// Destructor for SimpleVector class.                    *
//********************************************************
template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
		delete [] aptr;
}

//********************************************************
// subError function. Displays an error message and      *
// terminates the program when a subscript is out of     *
// range.                                                *
//********************************************************
template <class T>
void SimpleVector<T>::subError()
{
	cout << "Error: Subscript out of range.\n";
	exit(0);
}
//********************************************************
// Overloaded [] operator. The argument is a subscript.  *
// This function returns a reference to the element      *
// in the array indexed by the subscript.                *
//********************************************************
template <class T>
T &SimpleVector<T>::operator[](int sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();
	return aptr[sub];
}
//********************************************************
// prints all the entries in the array.                  *
//********************************************************
template <class T>
void SimpleVector<T>::print()
{
	for (int k = 0; k < arraySize; k++)
		cout << aptr[k] << " ";
	cout << endl;
}
//********************************************************
// push_back. Stores value as the new lest element of    *
// SimpleVector. If the SimpleVector is already filled   *
// this function will throw an exception.                *    
//********************************************************
template <class T>
void SimpleVector<T>::push_back(T v)
{
	if (count >= arraySize)
	{
		throw ArrayFull();
	}
	else
	{
		aptr[count] = v;
		count++;
	}
}
//********************************************************
//********************************************************
template <class T>
void SimpleVector<T>::pop_back()
{
	if (count <= 0)
	{
		throw ArrayEmpty();
	}
	else
	{
		count--;
		aptr[count] = T();
	}
}

#endif /* SIMPLEVECTOR_H */

