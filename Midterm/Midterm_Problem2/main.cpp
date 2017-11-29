/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 25, 2017
 Purpose: Midterm Problem 2: Develop an application using an array of structures
 * that will determine the gross pay for any number of employees input. The
 * company pays "straight-time" for the first 30 hours worked, double time for
 * all hours worked in excess of 30 hours but less than 50 hours, and triple
 * time for any hours worked over 50 hours. The program should be able to loop
 * and input the employee's name, hours worked, and the rate of pay. Once this
 * has been done then output this information including the gross pay in the
 * form of a paycheck. The process starts all over again until you input an
 * invalid rate of pay or hours worked. This means a negative rate of pay or
 * negative number of hours worked is not acceptable.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Employee{
    string eName; //employee names
    float hoursW;//hours worked
    int rop;//rate of pay
    int gross;//gross pay
};
//User Libraries

//Global Constants
    //Such as PI, Vc, -> Math/Science Values
    //as well as conversions from system of units to another
const int THOSNDS=1000;//Conversion to 1,000
const int HUNDRDS=100;//Conversion to 100
const int ONE=1;//Conversion to 1
//Function Prototypes
string amtToStr(int);
//Executable code begins here!!!
int main(int argc, char** argv) {
//Title
cout<<"========================================================"<<endl;
cout<<"                    Pay Roll Program"<<endl;
cout<<"========================================================"<<endl;
//Input Number of Company, Address, Employees
string cName;//company name
string cAddress;//company address
int numE;//number of employees
int grossE[numE];
cout<<"  What is the Company Name?: ";
getline(cin, cName);//input company name
cout<<"  What is the Company's Address?: ";
getline(cin, cAddress);//input company name
cout<<"  How Many Employees: ";
cin>>numE;//input number employee
//Declare Variables
Employee eCal[numE];
int index;
//Input Values
for (index = 0; index < numE; index++){
    cout<<"========================================================"<<endl;
    cout<<"                   Employee Number: "<<index + 1<<endl;
    cout<<"========================================================"<<endl;
    cout<<"  Enter the Employee Name: ";
    cin.ignore();
    getline(cin, eCal[index].eName);//input employee name
    cout<<"  Enter the Number of Hours Worked: ";
    cin>>eCal[index].hoursW;//hours worked by employee
    if (eCal[index].hoursW < 0){//validate hours worked in positive
        cout<<"========================================================"<<endl;
        cout<<"               Invalid: Exiting Program"<<endl;
        cout<<"========================================================"<<endl;
            return 0;
    }
    cout<<"  Enter the Rate of Pay: ";
    cin>>eCal[index].rop;//rate of pay
    if (eCal[index].rop < 0){//validate rate of pay in positive
        cout<<"========================================================"<<endl;
        cout<<"               Invalid: Exiting Program"<<endl;
        cout<<"========================================================"<<endl;
            return 0;
            
    }
    if(eCal[index].hoursW>50)
    {
        eCal[index].gross=(30*eCal[index].rop)+(30*(eCal[index].rop*2))+((eCal[index].hoursW-50)*(eCal[index].rop*3));
    }
    else if(eCal[index].hoursW>30 && eCal[index].hoursW<=50)
    {
         eCal[index].gross=(30*eCal[index].rop)+(eCal[index].rop-30)*2*eCal[index].rop;
    }
    else if(eCal[index].hoursW<=30)
    {
         eCal[index].gross=(eCal[index].rop*eCal[index].hoursW);
    }
    grossE[index] = eCal[index].gross;
}
//Process by mapping inputs to outputs

//Output Values
cout<<endl;
cout<<"========================================================"<<endl;
cout<<"\t\t Employee Gross Pay"<<endl;
cout<<"========================================================"<<endl;
for (index = 0; index < numE; index++){
    cout<<"  Employee Number: "<<index + 1<<endl;
    cout<<"  Company: "<<cName<<endl;
    cout<<"  Address: "<<cAddress<<endl;
    cout<<"  Name: "<<eCal[index].eName<<"\tAmount: $"<<grossE[index]<<endl;
    cout<<"  Amount: ";
    int dollars =eCal[index].gross;
        float cents=(eCal[index].gross-dollars)*100;
        if(cents==0){
            string temp=amtToStr(dollars)+"Dollars ";
            cout<<temp<<endl;
        }
        else{
            string temp=amtToStr(dollars)+"Dollars "+amtToStr(cents)+"Cents";
            cout<<temp<<endl;
        }
    cout<<"\tSignature:"<<endl;
    cout<<"========================================================"<<endl;
}
//Exit stage right!
return 0;
}

string amtToStr(int dollars){
    int n1000,n100,n10,n1;//The number of powers of 10
    unsigned int amount=dollars;
    //Calculate the number of 1000's,100's,10's,1's
    n1000=dollars/1000;//Number of 1000's
    amount=(amount-n1000*1000);     //Subtract off 1000's
    n100=amount/100;  //Number of 100's
    amount=(amount-n100*100);       //Subtract off 100's
    n10=amount/10;    //Number of 10's
    amount=(amount-n10*10);
    n1=amount;
    string pay="";
    
    //Fill the string with 1000's
    switch(n1000){
        case 9:  pay+="Nine Thousand";break; 
        case 8:  pay+="Eight Thousand ";break;
        case 7:  pay+="Seven Thousand ";break;
        case 6:  pay+="Six Thousand ";break;
        case 5:  pay+="Five Thousand ";break;
        case 4:  pay+="Four Thousand ";break;
        case 3:  pay+="Three Thousand ";break;
        case 2:  pay+="Two Thousand ";break;
        case 1:  pay+="One Thousand ";break;
    }
    //Fill the string with 100's
    switch(n100){
        case 9:  pay+="Nine Hundred ";break; 
        case 8:  pay+="Eight Hundred ";break;
        case 7:  pay+="Seven Hundred ";break;
        case 6:  pay+="Six Hundred ";break;
        case 5:  pay+="Five Hundred ";break;
        case 4:  pay+="Four Hundred ";break;
        case 3:  pay+="Three Hundred ";break;
        case 2:  pay+="Two Hundred ";break;
        case 1:  pay+="One Hundred ";break;
    }
    //Fill the string with 10's
    switch(n10){
        case 9:  pay+="Ninety ";break;
        case 8:  pay+="Eighty ";break;
        case 7:  pay+="Seventy ";break;
        case 6:  pay+="Sixty ";break;
        case 5:  pay+="Fifty ";break;
        case 4:  pay+="Forty ";break;
        case 3:  pay+="Thirty ";break;
        case 2:  pay+="Twenty ";break;
        case 1:  pay+="Ten ";break;
    }
    //Fill the string with 1's
    switch(n1){
        case 9:  pay+="Nine ";break;
        case 8:  pay+="Eight ";break;
        case 7:  pay+="Seven ";break;
        case 6:  pay+="Six ";break;
        case 5:  pay+="Five ";break;
        case 4:  pay+="Four ";break;
        case 3:  pay+="Three ";break;
        case 2:  pay+="Two ";break;
        case 1:  pay+="One ";break;
    }
    return pay;
}