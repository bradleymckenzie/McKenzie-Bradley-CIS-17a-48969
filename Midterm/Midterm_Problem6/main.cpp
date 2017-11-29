/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 27, 2017
 Purpose: Midterm Problem 6: a) Convert the following 2 numbers to binary, octal
 * and hex. 2.875, 0.1796875
 * When done, convert the following to a float representation by the definition
 * in class. In other words, I want an 8 digit hex number representation using
 * the 4 byte float specification defined in class.
 * b)  Do the same for a) given they are negative values.
 * c)  Convert the float representations of the following into 
 * the decimal number given the definition in class.
 * 59999901, 59999902, A66667FE Note:  This doesn't require a program, however,
 * I want you to write a simple function that outputs the answers you did by
 * hand with "cout".
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

//Executable code begins here!!!
int main(int argc, char** argv) {
//Title
cout<<"============================="<<endl;
cout<<"      Number Conversion"<<endl;
cout<<"============================="<<endl;
//Declare Variables

//Process by mapping inputs to outputs

//Output Values
cout<<"============================="<<endl;
cout<<"Decimal Given: 2.875"<<endl;
cout<<"       Binary: 10.111"<<endl;
cout<<"        Octal: 2.7"<<endl;
cout<<"          Hex: 2.E"<<endl;
cout<<"    Hex Float: 40380000"<<endl;
cout<<"============================="<<endl;
cout<<"Decimal Given: -2.875"<<endl;
cout<<"       Binary: -0.111"<<endl;
cout<<"        Octal: -0.7"<<endl;
cout<<"  Hex Literal: -0.E"<<endl;
cout<<"    Hex Float: C0380000"<<endl;
cout<<"============================="<<endl;
cout<<"Decimal Given: 0.1796875"<<endl;
cout<<"       Binary: 0.0010111"<<endl;
cout<<"        Octal: 0.134"<<endl;
cout<<"          Hex: 0.2E"<<endl;
cout<<"    Hex Float: 3E380000"<<endl;
cout<<"============================="<<endl;
cout<<"Decimal Given: -0.1796875"<<endl;
cout<<"       Binary: -0.0010111"<<endl;
cout<<"        Octal: -0.134"<<endl;
cout<<"          Hex: -0.2E"<<endl;
cout<<"    Hex Float: BE380000"<<endl;
cout<<"============================="<<endl;
cout<<"Hex Float Given: 59999901"<<endl;
cout<<"  Decimal Float: 1.66101074"<<endl;
cout<<"============================="<<endl;
cout<<"Hex Float Given: 59999902"<<endl;
cout<<"  Decimal Float: 2.79998779"<<endl;
cout<<"============================"<<endl;
cout<<"Hex Float Given: A66667FE"<<endl;
cout<<"  Decimal Float: -0.006000061"<<endl;
cout<<"============================="<<endl;
//Exit stage right/free memory!

return 0;
}