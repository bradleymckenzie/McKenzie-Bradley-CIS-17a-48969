/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 27, 2017
 Purpose: Midterm Problem 4: A company wants to transmit data over the telephone
 * , but they are concerned that their phones may be tapped. All of their data
 * is transmitted as four-digit integers. However, they utilize the digits 
 * 0,1,2,3,4,5,6,7 only. They have asked you to write a program that will
 * encrypt their data so that it may be transmitted more securely. Your
 * application should read a four-digit integer with the numbers 0 to 7 entered
 * by the user in an input dialog and encrypt it as follows: Replace each digit
 * by (the sum of that digit plus 5) modulus 8. Then swap the first digit with
 * the third, and swap the second digit with the fourth. Then print the
 * encrypted integer. Write a separate application that inputs an encrypted
 * four-digit integer and decrypts it to form the original number. Note: 
 * sometimes errors occur and the digits 8, and 9 might appear. Detect this
 * condition and flag the error. Can't read in numbers individually. All the
 * digits must be read with one cin statement.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes
int encrypt(int inNum);
int decrypt(int inNum);
void swap(char &, char &);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Title
cout<<"========================================================"<<endl;
cout<<"                   Encrypt Data"<<endl;
cout<<"========================================================"<<endl;
//Declare Variables
int data;
//Input Values
cout<<"Enter Your 4 Digit Data: ";
cin>>data;
cout<<"Encrypt:"<<endl;
cout<<" "<<encrypt(data)<<endl;
cout<<"Decrypt:"<<endl;
cout<<" "<<decrypt(encrypt(data))<<endl;
//Process by mapping inputs to outputs

//Output Values

//Exit stage right/free memory!

return 0;
}

int encrypt(int inNum){
    int num = inNum, outNum = 0;
    
    outNum += ((num + 5) % 8) * 1;
    
    num /= 10;
    outNum +=  ((num + 5) % 8) * 10;

    num /= 10;
    outNum +=  ((num + 5) % 8) * 100;

    num /= 10;
    outNum +=  ((num + 5) % 8) * 1000;

    return outNum;
}

int decrypt(int inNum){
    int num = inNum, outNum = 0;
    
    outNum += ((num + 3) % 8) * 1;
    
    num /= 10;
    outNum +=  ((num + 3) % 8) * 10;

    num /= 10;
    outNum +=  ((num + 3) % 8) * 100;

    num /= 10;
    outNum +=  ((num + 3) % 8) * 1000;
    
    return outNum;
}