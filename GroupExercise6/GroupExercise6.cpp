// C++ implementation of GroupExercise 6 use of classes to perform a basic mathcalculator app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
#include <bits/stdc++.h>
using namespace std;

//user-defined class
class BasicMathcalculator { 
    // Access specifier 
private:    
    //private Data Members 
    string mproblem; 
    string mOperation; 
    double mNum1;
    double mNum2;
    
    //private Member Functions() 
    double calculation()
    {
        double result=0;
        if (mOperation.compare("+") == 0 || mOperation.compare("Addition") == 0)
        {
            result= mNum1 + mNum2;
        } else if (mOperation.compare("-") == 0 || mOperation.compare("Subtraction") == 0)
        {
            result= mNum1 - mNum2;
        }  else if (mOperation.compare("*") == 0 || mOperation.compare("Multiplication") == 0)
        {
            result= mNum1 * mNum2;
        } else if (mOperation.compare("/") == 0 || mOperation.compare("Division") == 0)
        {
            result= mNum1 / mNum2;

        } else if (mOperation.compare("%") == 0 || mOperation.compare("Modulus") == 0)
        {
            result= fmod(mNum1,mNum2);
        } else if (mOperation.compare("^") == 0 || mOperation.compare("Exponent") == 0)
        {
            //The power function returns the floating point value of x raised to the power y ( x y )
            result=  pow(mNum1, mNum2);
        }
        return result;
    }
    void parseProblem()
    {
        string firstNumber, secondNumber;
        bool validNum1,validNum2;
        double res=0;
        //parse input string
        firstNumber="";
        secondNumber="";
        validNum1=false;
        validNum2=false;
        mOperation=' ';

        for(char c : mproblem)
        {
            //cout<<" inChar:"<<c;
            //is not oprator
            if(!(c=='*' || c=='/' ||c=='+' ||c=='-' || c=='%' || c=='^'))
            {
                if(!validNum1)
                {
                    firstNumber=firstNumber+c;
                }
                else if(!validNum2)
                {
                    secondNumber=secondNumber+c;
                }
            } 
            else
            {
                //char is oprator, got the operator
                mOperation=c;
                if(!validNum1 && !validNum2)
                {
                    //got the first number
                    validNum1=true; 
                    //cout<<"\tfirstNumber="<<firstNumber<<endl;
                }
            } //oprator
        } //for

        if(validNum1 && !validNum2)
        {
            //got the second number
            //validNum2=true; 
            //cout<<"\tsecondNumber="<<secondNumber<<endl;
            //convert it to double to process
            mNum1 = stod(firstNumber);
            //convert it to double to process
            mNum2 = stod(secondNumber);

        }
        //cout<<" Oprator:"<<mOperation<<" firstNumber:"<<firstNumber<<" secondNumber:"<<secondNumber<<endl;


    }

public: 
    // public Member Functions() 
    //Default Constructor to init data members
    BasicMathcalculator() 
    { 
        mproblem="";
        mOperation="";
        mNum1=0;
        mNum2=0;
    } 
    void displayOprators()
    {
        cout << "\n-------------------Welcome to Basic Math Calculator----------------------";
        cout << "\nopetations available are:"<<endl;
        cout << "\n (+) - Addition";
        cout << "\n (-) - Subtraction";
        cout << "\n (*) - Multiplication";
        cout << "\n (/) - Division";
        cout << "\n (%) - Modulus";
        cout << "\n (^) - Exponent";
        cout << "\n-------------------------------------------------------------------------";
    }
    void getEqToSolve()
    {
        cout << "\nEnter a problem to solve:";
        getline(cin, mproblem); // input can have blank spaces in the string
        parseProblem();
    }
    void CalculateAndDisplay()
    {
        double result=calculation();
        cout << "\nProblem:"<< mNum1 << " " + mOperation + " " << mNum2;
        cout << "\nSolution:"<<result;

    }
}; 

// starting function/Driver code
int main()
{
    BasicMathcalculator objCalculator;
    bool loop=true;
    char repeat;
    objCalculator.displayOprators();
    //note initial value of loop is true
    while(loop)
    {
        objCalculator.getEqToSolve();
        objCalculator.CalculateAndDisplay();
        cout << "\nlike to try again! (Y/N):";
        cin>>repeat;
        cin.ignore(); //line clears orignores the newline from the stream.
        if(!(repeat=='Y' || repeat=='y'))
        {
            loop=false;
        }
    } //while
    cout<<"\nThank you for using calculator app!";
    cout<< endl;
	return 0;
}
