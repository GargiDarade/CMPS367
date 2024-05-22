// C++ implementation of the Assignment 2 Problem 4: Multiplication Table, with variables as Structures
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
  int rowStartIndex; 
  int rowEndIndex; 
  int colStartIndex; 
  int colEndIndex; 
  bool loop;
  char anotherOne;
  bool printTable;
}; 

//parameter variables as Structures
void printMultiplicationTable(StructOfVars &structParm)
{
        //print column header
    for(int col=structParm.colStartIndex;col<=structParm.colEndIndex;col++)
    {
        if(col==structParm.colStartIndex)
        {
            cout << "X\t"<< col <<"\t"; //to print top left X and first column
        } else
        {
            cout << col <<"\t";
        }

    }
    //print table
    for(int row=structParm.rowStartIndex;row<=structParm.rowEndIndex;row++)
    {
        cout << "\n";
        for(int col=structParm.colStartIndex;col<=structParm.colEndIndex;col++)
        {
            if(col==structParm.colStartIndex)
            {
                cout << row << "\t"<< row*col <<"\t";
            } else
            {
                cout << row*col <<"\t";
            }
        }
    }
}


// starting function/Driver code
int main()
{
    StructOfVars objStructOfVars;
    objStructOfVars.loop=true;
    objStructOfVars.printTable=true;
    cout << "\n-------------------Welcome to Multiplication Table----------------------";
    
    //rowStartIndex=10;
    //rowEndIndex=15;
    //colStartIndex=10;
    //colEndIndex=13;
     //note initial value of loop is true
    while(objStructOfVars.loop)
    {
        cout<<"\nEnter the starting range (Column) for Multiplication Table:";
        cin>>objStructOfVars.colStartIndex;
        cout<<"\nEnter the ending range (Column) for Multiplication Table:";
        cin>>objStructOfVars.colEndIndex;
        if(objStructOfVars.colStartIndex<1 || objStructOfVars.colStartIndex>objStructOfVars.colEndIndex)
        {
            cout<<"\nColumn index has to be greater than zero, and start column index should be less or equal than end column index, please try again.";
            objStructOfVars.printTable=false; //error in range do not print table
        } else
        {
            cout<<"\nEnter the starting range (Row) for multiplying the numbers in Multiplication Table:";
            cin>>objStructOfVars.rowStartIndex;
            cout<<"\nEnter the ending range (Row) for multiplying the numbers in Multiplication Table:";
            cin>>objStructOfVars.rowEndIndex;
            if(objStructOfVars.rowStartIndex<1 || objStructOfVars.rowStartIndex>objStructOfVars.rowEndIndex)
            {
                cout<<"\nRow index has to be greater than zero, and start row index should be less or equal than end row index, please try again.";
                objStructOfVars.printTable=false; //error in range do not print table
            }
        }
        
        if(objStructOfVars.printTable)
        {
            cout << "\n---Multiplication Table---\n";
            printMultiplicationTable(objStructOfVars);
            cout << "\n--------------------------";
        }
        else
        {
            objStructOfVars.printTable=true; //print table at next round.
        }
        cout<<"\nWould you like to print another multiplication table? (y/n):";
        cin>>objStructOfVars.anotherOne;
        if(!(objStructOfVars.anotherOne=='Y' || objStructOfVars.anotherOne=='y'))
        {
            objStructOfVars.loop=false;
        }
    }

    cout << "\nThanks for using the Multiplication Table!.";
    cout << endl;
	return 0;

}