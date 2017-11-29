/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: Simple Vector Class
 */

#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

template <class T>
class SimpleVector
{
private:
	T *aptr;
	int arraySize;
	int currentPos;
	void subError() const; // Handles subscripts out of range
public:
	SimpleVector(int); // Constructor
	SimpleVector(const SimpleVector &); // Copy constructor
	~SimpleVector(); // Destructor
	int size() const
	{
		return arraySize;
	}
	T &operator[](int); // Overloaded [] operator
	void print() const; // Output array
	void push_back(T); // insert value at end of array
	void pop_back(); // remove last element from array
	// exception handlers
	class ArrayFull { private: int x; };
};

//*******************************************************
// Constructor for SimpleVector class. Sets the size *
// of the array and allocates memory for it. *
//******************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	currentPos = 0;
	aptr = new T[s];
	for (int count = 0; count < arraySize; count++)
		aptr[count] = T();
}
//******************************************************
// Copy Constructor for SimpleVector class. *
//******************************************************
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	for (int count = 0; count < arraySize; count++)
		aptr[count] = obj[count];
}
//*****************************************************
// Destructor for SimpleVector class. *
//*****************************************************
template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
		delete[] aptr;
}

//******************************************************
// subError function. Displays an error message and *
// terminates the program when a subscript is out of *
// range. *
//******************************************************
template <class T>
void SimpleVector<T>::subError() const
{
	cout<<"ERROR: Subscript out of range."<<endl;
	exit(0);
}
//*******************************************************
// Overloaded [] operator. The argument is a subscript. *
// This function returns a reference to the element *
// in the array indexed by the subscript. *
//*******************************************************
template <class T>
T &SimpleVector<T>::operator[](int sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();
	return aptr[sub];
}
//********************************************************
// prints all the entries in the array. *
//********************************************************
template <class T>
void SimpleVector<T>::print() const
{
	for (int k = 0; k < arraySize; k++)
		cout << aptr[k] << " ";
	cout << endl;
}
//********************************************************
// Add an element to end of the array
//********************************************************
template <class T>
void SimpleVector<T>::push_back(T v)
{
	try
	{
		if (currentPos < arraySize)
		{
			aptr[currentPos] = v;
			++currentPos; // increment current position
		}
		else
		{
			throw ArrayFull();
		}
	}
	catch (ArrayFull)
	{
		cout<<"The array is full."<<endl;
	}

}


//********************************************************
// remove the last element from array
//********************************************************
template <class T>
void SimpleVector<T>::pop_back()
{
	aptr[--currentPos] = T();
}

#endif /* SIMPLEVECTOR_H */

