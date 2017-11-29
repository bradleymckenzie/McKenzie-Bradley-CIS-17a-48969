/* 
 File:   main.cpp
 Author: Bradley McKenzie
 Created on October 29, 2017
 Purpose: Midterm Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <iomanip>//Format Layout
#include <ctime> //Set seed time
#include <string>//String library
using namespace std;
struct Customer{
    string name; //customer name
    string address; //customer address
    float aNumber; //customer account number
    float aBalance; //customer account balance at the beginning of the month
    float tChecks;//total of all checks written by customer
    float tDeposits;//total of all deposits credited to customer
};
struct Employee{
    string eName; //employee names
    float hoursW;//hours worked
    int rop;//rate of pay
    int gross;//gross pay
};
struct Stats{
    float avg;     //Average value of an integer array
    float median;  //Median value  of an integer array
    int   *mode;   //array containing the modes
    int   nModes;  //number of modes in the array
    int   maxFreq; //max frequency of modes
};
//User Libraries

//Global Constants
const int THOSNDS=1000; //Conversion to 1,000
const int HUNDRDS=100;   //Conversion to 100
const int ONE=1;
//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
string amtToStr(int);
Stats *avgMedMode(int *,int); 
Stats printStat(int*,int,Stats*);
void prntAry(int *,int);
void markSrt(int *,int);
int encrypt(int inNum);
int decrypt(int inNum);
void swap(char &, char &);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Loop on the menu
    do{
        //Input Values
        cout<<"========================"<<endl;
        cout<<"Choice from the List:"<<endl;
        cout<<"  Type 1 for Problem 1"<<endl;
        cout<<"  Type 2 for Problem 2"<<endl;
        cout<<"  Type 3 for Problem 3"<<endl;
        cout<<"  Type 4 for Problem 4"<<endl;
        cout<<"  Type 5 for Problem 5"<<endl;
        cout<<"  Type 6 for Problem 6"<<endl;
        cout<<"========================"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        cout<<"========================"<<endl;
        //Switch to determine the Problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }//end of switch
    }while(choice>='1'&& choice<='6');
    //Output Values
    
    //Exit stage right!
    return 0;
    }
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//********************************* Problem 1 **********************************
//******************************************************************************
void prob1(){
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
    cin.ignore();
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
        cin.ignore();
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
}
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//********************************* Problem 2 **********************************
//******************************************************************************
void prob2(){
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
cin.ignore();
getline(cin, cName);//input company name
cout<<"  What is the Company's Address?: ";
cin.ignore();
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
            EXIT_SUCCESS;
    }
    cout<<"  Enter the Rate of Pay: ";
    cin>>eCal[index].rop;//rate of pay
    if (eCal[index].rop < 0){//validate rate of pay in positive
        cout<<"========================================================"<<endl;
        cout<<"               Invalid: Exiting Program"<<endl;
        cout<<"========================================================"<<endl;
            EXIT_SUCCESS;
            
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
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//********************************* Problem 3 **********************************
//******************************************************************************
void prob3(){
//Title
cout<<"========================================================"<<endl;
cout<<"               Mean Median Mode Program"<<endl;
cout<<"========================================================"<<endl;
//Declare Variables
int arrayS = 0;//number inputs to fill array
int *arrayV;//array values
Stats *cal;
//Input Values
cout<<"  Enter the number of inputs for this array: ";
cin>>arrayS;//input array size

arrayV=new int[arrayS];

for (int index = 0; index < arrayS; index++){
    cout<<"  Enter the array value for "<<index + 1<<": ";
    cin>>arrayV[index];//input array values
}
//Process by mapping inputs to outputs
cout<<"========================================================"<<endl;
markSrt(arrayV, arrayS);//sort
cout<<"Sorted Array: ";
prntAry(arrayV, arrayS);//print sorted array
cal = avgMedMode(arrayV, arrayS);//calculation
//Output Values
cout<<"========================================================"<<endl;
cout<<"\t\t        Results"<<endl;
cout<<"========================================================"<<endl;
printStat(arrayV, arrayS, cal);//print results
//Exit stage right/free memory!
delete[] arrayV;
delete[] cal;
}

Stats *avgMedMode(int *a,int size){
    Stats *aMM = new Stats;
    
    //freq calculation
    int *freq=new int[size];
    for (int i=0;i<size;i++){
        freq[i]=0;
    }//loop from 0 to size
    for (int i=0;i<size;i++){
        freq[a[i]]++;
    }
    //max calculation
    int max=0;
    for (int i=0;i<size;i++){
        if (freq[i]>max)
            max=freq[i];
    }
    aMM->maxFreq=max;
    //mode calculation
    aMM->nModes=0;
    for (int i=0;i<size;i++){
        if (freq[i]== aMM->maxFreq)
            aMM->nModes++;
    }
    //mode calculation
    int *modeAry=new int[aMM->nModes];
    int index=0;
    for (int i=0;i<size;i++){
        if (freq[i]==aMM->maxFreq){
            modeAry[index]=i;
            index++;
        }
    }
    aMM->mode = modeAry;
    //mean calculation
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=*(a+i);
    }
    aMM->avg=sum/size;
    //median calculation
    markSrt(a,size);
    if (size%2==0){
        aMM->median=a[size/2];
    }else
        aMM->median=a[(size/2)-1];
    //free memory
    delete []freq;
    return aMM;
}

Stats printStat(int *array, int size, Stats *cal){
    //max frequency and number of modes output
    cout<<"Max Frequency: "<<cal->maxFreq<<" "<<endl;
    cout<<"Number of Modes: "<<cal->nModes<<endl;
    if (cal->nModes>1){
        cout<<"The modes are: ";
    }else
        cout<<"The mode is: ";
    //mode output
    cout<<cal->mode<<endl;
    prntAry(cal->mode,cal->nModes);
    //median output
    cout<<"The median is ";
    cout<<cal->median;
    //mean output
    cout<<endl;
    cout<<"The mean of this set is ";
    cout<<cal->avg;
    cout<<endl;
    cout<<"========================================================"<<endl;
    //free memory
    delete[] array;
}

void markSrt(int *a,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int row=pos+1;row<n;row++){
            if(*(a+pos)>*(a+row)){
                *(a+pos)=*(a+pos)^*(a+row);
                a[row]=a[pos]^a[row];
                *(a+pos)=*(a+pos)^*(a+row);
            }
        }
    }
}

void prntAry(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//********************************* Problem 4 **********************************
//******************************************************************************
void prob4(){
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
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//********************************* Problem 5 **********************************
//******************************************************************************
void prob5(){
//Title
cout<<"===================================="<<endl;
cout<<"         Data Type Program"<<endl;
cout<<"===================================="<<endl;
//Output Values
cout<<"Signed short Largest Factorial is 7 "<<endl;
cout<<"Signed int Largest Factorial is 12"<<endl;
cout<<"Signed long Largest Factorial is 12"<<endl;
cout<<"===================================="<<endl;
cout<<"Unigned short Largest Factorial is 8"<<endl;
cout<<"Unigned int Largest Factorial is 12"<<endl;
cout<<"Unigned long Largest Factorial is 12"<<endl;
cout<<"===================================="<<endl;
cout<<"float Largest Factorial is 34"<<endl;
cout<<"double Largest Factorial is 171"<<endl;
cout<<"===================================="<<endl;
}
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//********************************* Problem 6 **********************************
//******************************************************************************
void prob6(){
//Title
cout<<"============================="<<endl;
cout<<"      Number Conversion"<<endl;
cout<<"============================="<<endl;
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
}