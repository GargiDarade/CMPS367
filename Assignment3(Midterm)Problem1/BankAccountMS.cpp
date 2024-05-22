// C++ implementation of Assignment 3 Problem 1:Bank Account Management System app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

//user-defined class
class BankAccount { 
    // Access specifier 
private: 
    //private Data Members  
    string mAccountHolderName;
    int mAccountNumber;  
    double mBalance;
    //private Member Functions() 
public: 
    // public Member Functions() 
    // dummy constructor
    BankAccount() {}
    //Constructor to initialize the account details
    BankAccount(string name,int number,double initBalance )
    {
        mAccountHolderName=name;
        mAccountNumber=number;  
        mBalance=initBalance;
    }
    //get the name of account holder
    string getName()
    {
        return mAccountHolderName;
    }
    // get the stored account number
    int getAccountNumber()
    {
        return mAccountNumber;
    }
    // get the stored account balance
    double getAccountbalance()
    {
        return mBalance;
    }

    //function to deposit money
    void deposit(double ammount)
    {
        //Add the ammount to the balance
        mBalance=mBalance+ammount;
        //update balance
    }

    //function to withdraw money
    void withdraw(double ammount)
    {
        //check if ammount can be withdraw,if yes withdraw and update balance
        //if no display an error message
        if(mBalance>=ammount)
        {
            mBalance=mBalance-ammount;
        }
        else
        {
            cout<<"\nWithdrawal failed due to insufficient balance";
        }
    }

    //function to display account balance
    void displayBalance()
    {
        //display current balance
        cout<<"\nYour current balance is $"<<mBalance;
    }
};

class Bank{
    // Access specifier 
private: 
    //private Data Members  
    const int Max_NUMBER_OF_ACCOUNTS = 24; 
    // dynamic array
    BankAccount* mAccountArray;
    int mValidAccount; //number of accounts created
    //private Member Functions() 
    void openNewBankAccount()
    {
        string name="";
        double initialBalance=0;
        int accountNumber=0;
        cout<<"\nEnter your name:";
        cin.ignore(); //line clears orignores the newline from the stream.
        getline(cin, name); // input can have blank spaces in the string
        cout<<"\nEnter your initial balance:";
        cin>>initialBalance;
        if(initialBalance>0)
        {
            srand(time(0));
            accountNumber=rand();
            //After submitting
            mAccountArray[mValidAccount] = BankAccount(name,accountNumber,initialBalance );
            mValidAccount=mValidAccount+1;
            cout<<"\nCongratulations "<<name<<"!\nYou have successfully opened your new bank account with an initial balance of $";
            cout<<initialBalance<<".\nYour account number is "<<accountNumber<<".";
        }
        else
        {
            cout<<"\ninitial balance has to be greater than 0 try again";
        }

    }
    void depositToAccount()
    {
        int actNumber=0;
        int actIndex=-1;
        double dAmount=0;
        cout<<"\nEnter the account number:";
        cin>>actNumber;
        //search for account number in array
        for(int i=0;i<mValidAccount; i++)
        {
            if(mAccountArray[i].getAccountNumber()==actNumber)
            {
                actIndex=i;
                break;
            }
        }

        if(actIndex != -1)
        { 
            //accout number is found
            cout<<"\nEnter the amount that you would like to deposit:";
            cin>>dAmount;
            mAccountArray[actIndex].deposit(dAmount);
            //After submitting this
            cout<<"\nCongratulations "<<mAccountArray[actIndex].getName();
            cout<<"!\nYou have successfully deposited the amount of $";
            cout<<dAmount<<" in your account #"<<actNumber; 
            cout<<"\nYour current balance is $"<<mAccountArray[actIndex].getAccountbalance();
        }
        else
        {
            //If account number is not found
            cout<<"\nNo account number exists!.";
//
        }
    
    }
    void withdrawFromAccount()
    {
        int actNumber=0;
        int actIndex=-1;
        double dAmount=0;
        cout<<"\nEnter the account number:";
        cin>>actNumber;
        //search for account number in array
        for(int i=0;i<mValidAccount; i++)
        {
            if(mAccountArray[i].getAccountNumber()==actNumber)
            {
                actIndex=i;
                break;
            }
        }

        if(actIndex != -1)
        { 
            //accout number is found
            cout<<"\nEnter the amount that you would like to withdraw:";
            cin>>dAmount;
            if(mAccountArray[actIndex].getAccountbalance()>=dAmount)
            {
                mAccountArray[actIndex].withdraw(dAmount);
                //After submitting this
                cout<<"\nCongratulations "<<mAccountArray[actIndex].getName();
                cout<<"!\nYou have successfully withdrawn the amount of $";
                cout<<dAmount<<" in your account #"<<actNumber; 
                cout<<"\nYour current balance is $"<<mAccountArray[actIndex].getAccountbalance();
            }
            else
            {
                mAccountArray[actIndex].withdraw(dAmount);
            }
        }
        else
        {
            //If account number is not found
            cout<<"\nNo account number exists!.";
//
        }

    }
    void displayBalaceForAccount()
    {
        int actNumber=0;
        int actIndex=-1;
        cout<<"\nEnter the account number:";
        cin>>actNumber;
        //search for account number in array
        for(int i=0;i<mValidAccount; i++)
        {
            if(mAccountArray[i].getAccountNumber()==actNumber)
            {
                actIndex=i;
                break;
            }
        }

        if(actIndex != -1)
        { 
            mAccountArray[actIndex].displayBalance();
        }
        else
        {
            //If account number is not found
            cout<<"\nNo account number exists!.";

        }
    }    
public: 
    // public Member Functions() 
    // dummy constructor
    Bank() 
    {
        // allocating dynamic array
        // of Size Max_NUMBER_OF_ACCOUNTS using new keyword
        mAccountArray = new BankAccount[Max_NUMBER_OF_ACCOUNTS];
        mValidAccount=0;
    }

    void displayGreetings()
    {
        cout << "\n-------------------Welcome Chase bank portal----------------------"<<endl;
    }
    //display the menu that will contain options
    void displayMenu()
    {
        cout << "1. Create a new bank account with an initial balance."<<endl;
        cout << "2. Deposit money into an account."<<endl;
        cout << "3. Withdraw money from an account."<<endl;
        cout << "4.Display the current balance of an account."<<endl;
    }

 void processSelectedOption(int option)
    {
        if(option==1)
        {
            openNewBankAccount();
        }
        else if(option==2)
        {
            depositToAccount();
        }
        else if(option==3)
        {
            //display ammount owe to bank, max limit on credit card, remaining balance
            withdrawFromAccount();
        }
        else if(option==4)
        {
            //display ammount owe to bank, max limit on credit card, remaining balance
            displayBalaceForAccount();
        }
        //cout<<"\nPress any key to return to Main Menu!";
        //system("pause"); 
        //getch();
    }


};

// starting function/Driver code
int main()
{
    const int NUMBER_OF_OPTIONS = 4; //options in menu
    int itemIndex;
    bool loop=true;
    char repeat;
    Bank objBank;
    objBank.displayGreetings();
    //note initial value of loop is true
    while(loop)
    {
        objBank.displayMenu();
        cout << "\nWhat would you like to do (enter Index): ";
        cin>>itemIndex;
        if(itemIndex<1 || itemIndex>NUMBER_OF_OPTIONS)
        {
            cout << "\nEntered index is not valid, try again! ";

        }
        else
        {
            objBank.processSelectedOption(itemIndex);
            cout<<endl;
            cout << "\nlike to try again! (Y/N):";
            cin>>repeat;
            //cin.ignore(); //line clears orignores the newline from the stream.
            if(!(repeat=='Y' || repeat=='y'))
            {
                loop=false;
            }
        }
    } //while
    cout<<"\nThank you for using bank portal!";
    cout<< endl;
	return 0;
}
