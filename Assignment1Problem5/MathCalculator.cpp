// C++ implementation of the Assignment 1 Problem 5: Basic Math Calculator
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void displayOprators()
{
    cout << "\n (+) - Addition";
    cout << "\n (-) - Subtraction";
    cout << "\n (*) - Multiplication";
    cout << "\n (/) - Division";
    cout << "\n (%) - Modulus";
    cout << "\n (^) - Exponent";
    cout << "\n sin";
    cout << "\n asin";
    cout << "\n cos";
    cout << "\n acos";
    cout << "\n tan";
    cout << "\n atan";
    cout << "\n atan2";
    cout << "\n sqrt";
    cout << "\n ceil";
    cout << "\n abs";
    cout << "\n floor";
    cout << "\n max";
    cout << "\n min";
    cout << "\n log";
    cout << "\n log10";
    cout << "\n log2";
    cout << "\n round";
    cout << "\n";
}
// starting function/Driver code
int main()
{
    string operation;
    double n1,n2,res;
    bool loop=true;
    char anotherOne;
    cout << "\n-------------------Welcome to Basic Math Calculator----------------------";
    displayOprators();
        //note initial value of loop is true
    while(loop)
    {
        cout << "\nChoose an operation/Operator/problem to solve (from the list): ";
        cin >> operation;
        if (operation.compare("+") == 0 || operation.compare("Addition") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= n1 + n2;
            cout << "\n problem: "<< n1 << " + " << n2;
        } else if (operation.compare("-") == 0 || operation.compare("Subtraction") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= n1 - n2;
            cout << "\n problem: "<< n1 << " - " << n2;
        }  else if (operation.compare("*") == 0 || operation.compare("Multiplication") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= n1 * n2;
            cout << "\n problem: "<< n1 << " * " << n2;
        } else if (operation.compare("/") == 0 || operation.compare("Division") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= n1 / n2;
            cout << "\n problem: "<< n1 << " / " << n2;
            //inbult C++ fmod function
            cout << "\n answer is: "<<int(res)<< " and your remainder is : " <<fmod(n1,n2);

        } else if (operation.compare("%") == 0 || operation.compare("Modulus") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= fmod(n1,n2);
            cout << "\n problem: "<< n1 << " % " << n2;
        } else if (operation.compare("^") == 0 || operation.compare("Exponent") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            //The power function returns the floating point value of x raised to the power y ( x y )
            res=  pow(n1, n2);
            cout << "\n problem: "<< n1 << " ^ " << n2;
        } else if (operation.compare("sin") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= sin(n1);
            cout << "\n problem: sin( "<< n1 << " ) ";
        }else if (operation.compare("asin") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= asin(n1);
            cout << "\n problem: asin( "<< n1 << " ) ";
        }else if (operation.compare("cos") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= cos(n1);
            cout << "\n problem: cos( "<< n1 << " ) ";
        }else if (operation.compare("acos") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= acos(n1);
            cout << "\n problem: acos( "<< n1 << " ) ";
        }else if (operation.compare("tan") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= tan(n1);
            cout << "\n problem: tan( "<< n1 << " ) ";
        }else if (operation.compare("atan") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= atan(n1);
            cout << "\n problem: atan( "<< n1 << " ) ";
        }else if (operation.compare("atan2") == 0)
        {
            cout << "\nEnter your number (x-coordinate): ";
            cin >> n1;
            cout << "\nEnter your number (Y-coordinate): ";
            cin >> n2;
            res= atan2(n2,n1);
            //not result will be in radians
            cout << "\n problem: atan2( "<< n2 << "/"<<n1<<") ";

        }else if (operation.compare("sqrt") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= sqrt(n1);
            cout << "\n problem: sqrt( "<< n1 << " ) ";
        }else if (operation.compare("ceil") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= ceil(n1);
            cout << "\n problem: ceil( "<< n1 << " ) ";
        }else if (operation.compare("abs") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= abs(n1);
            cout << "\n problem: abs( "<< n1 << " ) ";
        }else if (operation.compare("floor") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= floor(n1);
            cout << "\n problem: floor( "<< n1 << " ) ";
        }else if (operation.compare("max") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= max(n1,n2);
            cout << "\n problem: max( "<< n1 << ", " << n2 <<" ) ";
        }else if (operation.compare("min") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> n1;
            cout << "\nEnter your second number: ";
            cin >> n2;
            res= min(n1,n2);
            cout << "\n problem: min( "<< n1 << ", " << n2 <<" ) ";
        }else if (operation.compare("log") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= log(n1);
            cout << "\n problem: log( "<< n1 << " ) ";
        }else if (operation.compare("log10") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= log10(n1);
            cout << "\n problem: log10( "<< n1 << " ) ";
        }else if (operation.compare("log2") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= log2(n1);
            cout << "\n problem: log2( "<< n1 << " ) ";
        }else if (operation.compare("round") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> n1;
            res= round(n1);
            cout << "\n problem: round( "<< n1 << " ) ";
        } else 
        {
            cout << "\nThe operation that you have chosen is not a valid one. Please try again.";
        }

        cout << "\nYour answer is: "<<res;
        cout<<"\nWould you like to try another one? (y/n):";
        cin>>anotherOne;
        if(!(anotherOne=='Y' || anotherOne=='y'))
        {
            loop=false;
        }
    }

    cout << "\nThanks for using the Basic Math Calculator!.";
    cout << endl;
	return 0;
}
