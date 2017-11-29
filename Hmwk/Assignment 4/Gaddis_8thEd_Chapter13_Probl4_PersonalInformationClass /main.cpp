/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 18, 2017
 * Purpose: Design a class that holds the following personal data: name,
 * address, age, and phone number. Write appropriate accessor and mutator
 * functions. Demonstrate the class by writing a program that creates three
 * instances of it. One instance should hold your information, and the other
 * two should hold your friends’ or family members’ information.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "PIClass.h"
//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables

//Input Values
cout<<"============================================================"<<endl;
cout<<"\t\tPersonal Information Class"<<endl;
cout<<"============================================================"<<endl;

//Process by mapping inputs to outputs
PIClass *me = new PIClass();
PIClass *friend1 = new PIClass();
PIClass *friend2 = new PIClass();

me->setName("Bradley McKenzie");
me->setAddress("721 Fifth Avenue New York City, NY 10022");
me->setAge(19);
me->setPhone("(605)–475–6962");

friend1->setName("Jocko Willink");
friend1->setAddress("3666 Midway Drive San Diego, CA 92110");
friend1->setAge(46);
friend1->setPhone("(619) 223-5581 ");

friend2->setName("Leif Babin");
friend2->setAddress("13036 SE Kent-Kangley Road Suite 401 Kent, WA 98030");
friend2->setAge(38);
friend2->setPhone("(206) 486-3322");
//Output Values
cout<<"============================================================"<<endl;
cout<<"\t\t\tAdress Book"<<endl;
cout<<"============================================================"<<endl;
cout<<"Name: "<<me->getName()<<endl;
cout<<"Age: "<<me->getAge()<<endl;
cout<<"Address: "<<me->getAddress()<<endl;
cout<<"Phone Number: "<<me->getPhone()<<endl;
cout<<"============================================================"<<endl;
cout<<"Name: "<<friend1->getName()<<endl;
cout<<"Age: "<<friend1->getAge()<<endl;
cout<<"Address: "<<friend1->getAddress()<<endl;
cout<<"Phone Number: "<<friend1->getPhone()<<endl;
cout<<"============================================================"<<endl;
cout<<"============================================================"<<endl;
cout<<"Name: "<<friend2->getName()<<endl;
cout<<"Age: "<<friend2->getAge()<<endl;
cout<<"Address: "<<friend2->getAddress()<<endl;
cout<<"Phone Number: "<<friend2->getPhone()<<endl;
cout<<"============================================================"<<endl;
//Exit stage right!
return 0;
}