// C++ implementation of the Assignment 2 Problem 5: Basic Math Calculator , with variables as Structures
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// Structure declaration
// Structure of all variables
struct StructOfVars {             
  string operation;
  double n1;
  double n2;
  double res;
  bool loop;
  char anotherOne;
}; 

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
    StructOfVars objStructOfVars;
    objStructOfVars.loop=true;
    cout << "\n-------------------Welcome to Basic Math Calculator----------------------";
    displayOprators();
        //note initial value of loop is true
    while(objStructOfVars.loop)
    {
        cout << "\nChoose an operation/Operator/problem to solve (from the list): ";
        cin >> objStructOfVars.operation;
        if (objStructOfVars.operation.compare("+") == 0 || objStructOfVars.operation.compare("Addition") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= objStructOfVars.n1 + objStructOfVars.n2;
            cout << "\n problem: "<< objStructOfVars.n1 << " + " << objStructOfVars.n2;
        } else if (objStructOfVars.operation.compare("-") == 0 || objStructOfVars.operation.compare("Subtraction") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= objStructOfVars.n1 - objStructOfVars.n2;
            cout << "\n problem: "<< objStructOfVars.n1 << " - " << objStructOfVars.n2;
        }  else if (objStructOfVars.operation.compare("*") == 0 || objStructOfVars.operation.compare("Multiplication") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= objStructOfVars.n1 * objStructOfVars.n2;
            cout << "\n problem: "<< objStructOfVars.n1 << " * " << objStructOfVars.n2;
        } else if (objStructOfVars.operation.compare("/") == 0 || objStructOfVars.operation.compare("Division") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= objStructOfVars.n1 / objStructOfVars.n2;
            cout << "\n problem: "<< objStructOfVars.n1 << " / " << objStructOfVars.n2;
            //inbult C++ fmod function
            cout << "\n answer is: "<<int(objStructOfVars.res)<< " and your remainder is : " <<fmod(objStructOfVars.n1,objStructOfVars.n2);

        } else if (objStructOfVars.operation.compare("%") == 0 || objStructOfVars.operation.compare("Modulus") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= fmod(objStructOfVars.n1,objStructOfVars.n2);
            cout << "\n problem: "<< objStructOfVars.n1 << " % " << objStructOfVars.n2;
        } else if (objStructOfVars.operation.compare("^") == 0 || objStructOfVars.operation.compare("Exponent") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            //The power function returns the floating point value of x raised to the power y ( x y )
            objStructOfVars.res=  pow(objStructOfVars.n1, objStructOfVars.n2);
            cout << "\n problem: "<< objStructOfVars.n1 << " ^ " << objStructOfVars.n2;
        } else if (objStructOfVars.operation.compare("sin") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= sin(objStructOfVars.n1);
            cout << "\n problem: sin( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("asin") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= asin(objStructOfVars.n1);
            cout << "\n problem: asin( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("cos") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= cos(objStructOfVars.n1);
            cout << "\n problem: cos( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("acos") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= acos(objStructOfVars.n1);
            cout << "\n problem: acos( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("tan") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= tan(objStructOfVars.n1);
            cout << "\n problem: tan( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("atan") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= atan(objStructOfVars.n1);
            cout << "\n problem: atan( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("atan2") == 0)
        {
            cout << "\nEnter your number (x-coordinate): ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your number (Y-coordinate): ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= atan2(objStructOfVars.n2,objStructOfVars.n1);
            //not result will be in radians
            cout << "\n problem: atan2( "<< objStructOfVars.n2 << "/"<<objStructOfVars.n1<<") ";

        }else if (objStructOfVars.operation.compare("sqrt") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= sqrt(objStructOfVars.n1);
            cout << "\n problem: sqrt( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("ceil") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= ceil(objStructOfVars.n1);
            cout << "\n problem: ceil( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("abs") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= abs(objStructOfVars.n1);
            cout << "\n problem: abs( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("floor") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= floor(objStructOfVars.n1);
            cout << "\n problem: floor( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("max") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= max(objStructOfVars.n1,objStructOfVars.n2);
            cout << "\n problem: max( "<< objStructOfVars.n1 << ", " << objStructOfVars.n2 <<" ) ";
        }else if (objStructOfVars.operation.compare("min") == 0)
        {
            cout << "\nEnter your first number: ";
            cin >> objStructOfVars.n1;
            cout << "\nEnter your second number: ";
            cin >> objStructOfVars.n2;
            objStructOfVars.res= min(objStructOfVars.n1,objStructOfVars.n2);
            cout << "\n problem: min( "<< objStructOfVars.n1 << ", " << objStructOfVars.n2 <<" ) ";
        }else if (objStructOfVars.operation.compare("log") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= log(objStructOfVars.n1);
            cout << "\n problem: log( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("log10") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= log10(objStructOfVars.n1);
            cout << "\n problem: log10( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("log2") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= log2(objStructOfVars.n1);
            cout << "\n problem: log2( "<< objStructOfVars.n1 << " ) ";
        }else if (objStructOfVars.operation.compare("round") == 0)
        {
            cout << "\nEnter your number: ";
            cin >> objStructOfVars.n1;
            objStructOfVars.res= round(objStructOfVars.n1);
            cout << "\n problem: round( "<< objStructOfVars.n1 << " ) ";
        } else 
        {
            cout << "\nThe operation that you have chosen is not a valid one. Please try again.";
        }

        cout << "\nYour answer is: "<<objStructOfVars.res;
        cout<<"\nWould you like to try another one? (y/n):";
        cin>>objStructOfVars.anotherOne;
        if(!(objStructOfVars.anotherOne=='Y' || objStructOfVars.anotherOne=='y'))
        {
            objStructOfVars.loop=false;
        }
    }

    cout << "\nThanks for using the Basic Math Calculator!.";
    cout << endl;
	return 0;
}
