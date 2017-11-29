/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 23, 2017
 Purpose: Midterm Problem 1: Develop an application using structures for a
 * customer that will determine if he/she has exceeded his/her checking account
 * balance. For each customer, the following facts are available:
 * a. Name
 * b. Address
 * c. Account number (Five digits only, i.e. test for this)
 * d. Balance at the beginning of the month 
 * e. Total of all checks written by this customer this month Loop until
 *    customer is through entering checks.
 * f. Total of all deposits credited to this customer's account this month. Loop
 *    until customer is through entering deposits.
 * Dynamically create the structure. The program should input each of these
 * facts from input dialogs, store in a structure, calculate the new balance, 
 * display the new balance and debit the account $15 if overdrawn. Also, if
 * overdrawn, tell the customer the additional $15 fee has been accessed and
 * what the balance would be with this fee included. Make sure to output the
 * contents of the structure.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Customer{
    string name; //customer name
    string address; //customer address
    float aNumber; //customer account number
    float aBalance; //customer account balance at the beginning of the month
    float tChecks;//total of all checks written by customer
    float tDeposits;//total of all deposits credited to customer
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
const int numInput = 1;
Customer cInfo[numInput];
int index;
float nBalance;//new account balance
unsigned int Nchecks;//number of checks written this month;
unsigned int Ndeposits;//number of deposits received this month;
//Input Values
cout<<"========================================================"<<endl;
cout<<"\t\t    Account Balance"<<endl;
cout<<"========================================================"<<endl;
for (index = 0; index < numInput; index++){
    cout<<"  Enter the Account Name: ";
    getline(cin, cInfo[index].name);//input account name;
    cout<<"  Enter the Account Address: ";
    getline(cin, cInfo[index].address);//input account address
    cout<<"  Enter the Account Number: ";
    cin>>cInfo[index].aNumber;//input account number
    cout<<"  Enter the Account Balance: $";
    cin>>cInfo[index].aBalance;//input account balance
    cout<<"    How Many Checks Did You Write This Month?: ";//ask for number of checks
    cin>>Nchecks;//number of checks written this month
    for (int i1 = 0; i1 != Nchecks; i1++){//loop number of checks
        cout<<"  Enter the a Check Written for This Month: $";//input each check
        float amount;
        cin>>amount;
        cInfo[index].tChecks += amount;//input total checks written amount
    }
    cout<<"    How Many Deposits Do You Have This Month?: ";//ask for number of deposits
    cin>>Ndeposits;//number of deposits received this month
    for (int i2 = 0; i2 != Ndeposits; i2++){//loop number of deposits
       cout<<"  Enter the A Deposit for This Month: $";//input each deposit
       float amount;
       cin>>amount;
       cInfo[index].tDeposits += amount;//input total deposits amount
    }
    nBalance = cInfo[index].aBalance - cInfo[index].tChecks //calculate new balance
            + cInfo[index].tDeposits;
//Process by mapping inputs to outputs

//Output Values
    cout<<"========================================================"<<endl;
    cout<<"\t\t      Your Account"<<endl;
    cout<<"========================================================"<<endl;
    for (index = 0; index < numInput; index++){//output input information
    cout<<"  Account Name: "<<cInfo[index].name<<endl;
    cout<<"  Account Address: "<<cInfo[index].address<<endl;
    cout<<"  Account Number: "<<cInfo[index].aNumber<<endl;
    cout<<"  Account Balance: $"<<cInfo[index].aBalance<<endl;
    cout<<"  Total Checks Written Amount: $"<<cInfo[index].tChecks<<endl;
    cout<<"  Total Deposits Amount: $"<<cInfo[index].tDeposits<<endl;
    cout<<"  Your New Account Balance is: $"<<nBalance<<endl;
    }
    cout<<"========================================================"<<endl;
    if (nBalance < 0){//charge customer overdrawn fee
        nBalance = nBalance - 15;
        cout<<"  Account was Overdrawn, $15 Fee Has Been Added."<<endl;
        cout<<"  Your New Account Balance is: $"<<nBalance<<endl;
        cout<<"========================================================"<<endl;
    }
} //end of loop
//Exit stage right!
return 0;
}
