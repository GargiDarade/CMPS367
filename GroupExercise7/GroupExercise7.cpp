// C++ implementation of GroupExercise 7 credit card portal app (must use inheritance) 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
#include <bits/stdc++.h>
using namespace std;

//user-defined class
class Account { 
    // Access specifier 
private:    
    //private Data Members 
    int mAccountNumber; 
    double mBalance;
    string mName;
    int mAge;
    double mIncome;
    
    //private Member Functions() 
    public: 
    // public Member Functions() 
    //Default Constructor to init data members
    Account() 
    { 
        mName="";
        mAge=0;
        mIncome=0;
        mAccountNumber=0;
        mBalance=0;
    } 
    void displayGreetings()
    {
        cout << "\n-------------------Welcome to credit card portal----------------------"<<endl;
    }
    //display the menu that will contain options
    //you can edit if you would like to change data
    void displayMenu()
    {
        cout << "1.) Apply for a new credit card account"<<endl;
        cout << "2.) Make a payment"<<endl;
        cout << "3.) View balance"<<endl;
    }
    // get set function to get or to set values of Member variables
    double getBalance()
    {
        return mBalance;
    }
    void setBalance(double balance)
    {
        mBalance=balance;
    }

   string getName()    
   {
     return mName;
   }
   void setName(string name)    
   {
     mName=name;
   }
   int getAge()
   {
     return mAge;
   }
   void setAge( int age)
   {
      mAge=age;
   }

   double getIncome()
   {
        return mIncome;
   }
   void setIncome(double income)
   {
        mIncome=income;
   }

   int getAccountNumber()
   {
    return mAccountNumber;
   }
   int setAccountNumber(int accountNumber)
   {
        mAccountNumber=accountNumber;
   }
  
}; 

class creditCard  : public Account
{ 
    private:    
    double mLimit;
    //private Member Functions() 
    //display amount owe to bank, max limit on credit card, remaining balance
    void viewCreditCardBalance()
    {
        if(mLimit!=0)
        {
            cout << "Person name:"<<getName()<<"\tAge:"<<getAge()<<endl;
            cout << "Credit card account number:"<< getAccountNumber()<<endl;
            cout << "Credit limit amount:$"<<mLimit<<endl;
            if(getBalance()<=mLimit)
            {
                cout << "Total credit amount used (amount you owe):$"<<(mLimit-getBalance())<<endl;
                cout << "Credit amount can be used for payment:$"<<getBalance()<<endl;
            }
        }
        else
        {
            cout << "Please open Credit card account first!"<<endl;
        }


    }
    //ask the user to enter their name, age,and income, and using this information, 
    //you can create a range which you can use to determine howmuch limit 
    //you would want to set the user for the credit card.
    //you can create anaccount number by using rand
    void openCreditCardAccount()
    {
        string name;
        int age;
        double income;

        cout << "Please enter your full name:";
        cin.ignore(); //line clears orignores the newline from the stream.
        getline(cin, name); // input can have blank spaces in the string
        //cin>>name;
        //
        cout << "Please enter your age:";
        cin>>age;
        if(age<=0 || age>=150)
        {
            cout << "\nEntered age is not valid, try again! ";
            exit;
        }
        cout << "Please enter your annual income:";
        cin>>income;
        if(income<=0)
        {
            cout << "\nEntered income is not valid, try again! ";
            exit;
        }
        setName(name);
        setAge(age);
        setIncome(income);
        setAccountNumber( rand());
        // set limit, limit is 5% of annual income.
        mLimit=income*0.05;
        //initially balance will be same as limit
        setBalance(mLimit);
        cout << "\nCredit card account created successfully!"<<endl;
        viewCreditCardBalance();
    }

    //make payment from credit card
    //ask the user to enter their account number
    //check account number, validate to see if the account number exists.
    //ask the user for the amount they would like to pay
    //makes sure amount is less than balance
    //deductions from the balance, 
    //then display a message that they were able to make a paymentand display the new balance
    void makePaymentByCreditCard()
    {
        int actNumber;
        double billAmount;
        cout << "Please enter your account number:";
        cin>>actNumber;
        if(getAccountNumber()==actNumber)
        {
            cout << "Please enter amount you would like to pay:$";
            cin>>billAmount;
            if(billAmount<getBalance())
            {
                setBalance(getBalance()-billAmount);
                cout << "\nAmount $"<<billAmount<<" paid successfully, new balance is $"<<getBalance()<<endl;
            }
            else
            {
                cout << "\nAmount $"<<billAmount<<" is more than available balance, payment declined"<<endl;
            }

        }
        else
        {
            cout << "account number "<<actNumber<<" does not exist with this credit card company. "<<endl;
        }

    }

    public: 
    // public Member Functions() 
    //Default Constructor to init data members
    creditCard() 
    { 
        mLimit=0;
    } 
    void processSelectedOption(int option)
    {
        if(option==1)
        {
            openCreditCardAccount();
        }
        else if(option==2)
        {
            makePaymentByCreditCard();
        }
        else if(option==3)
        {
            //display ammount owe to bank, max limit on credit card, remaining balance
            viewCreditCardBalance();
        }
    }

};

// starting function/Driver code
int main()
{
      const int NUMBER_OF_OPTIONS = 3; //options in menu
    int itemIndex;
    creditCard objcreditCard;
    bool loop=true;
    char repeat;
    objcreditCard.displayGreetings();
    //note initial value of loop is true
    while(loop)
    {
        objcreditCard.displayMenu();
        cout << "\nWhat would you like to do (enter Index): ";
        cin>>itemIndex;
        if(itemIndex<1 || itemIndex>NUMBER_OF_OPTIONS)
        {
            cout << "\nEntered index is not valid, try again! ";
            return 0;
        }
        objcreditCard.processSelectedOption(itemIndex);
        cout << "\nlike to try again! (Y/N):";
        cin>>repeat;
        cin.ignore(); //line clears orignores the newline from the stream.
        if(!(repeat=='Y' || repeat=='y'))
        {
            loop=false;
        }
    } //while
    cout<<"\nThank you for using credit card!";
    cout<< endl;
	return 0;
}
