// C++ implementation of the Assignment 1 Problem 4: Multiplication Table
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void printMultiplicationTable(int rowStartIndex, int rowEndIndex, int colStartIndex, int colEndIndex)
{
        //print column header
    for(int col=colStartIndex;col<=colEndIndex;col++)
    {
        if(col==colStartIndex)
        {
            cout << "X\t"<< col <<"\t"; //to print top left X and first column
        } else
        {
            cout << col <<"\t";
        }

    }
    //print table
    for(int row=rowStartIndex;row<=rowEndIndex;row++)
    {
        cout << "\n";
        for(int col=colStartIndex;col<=colEndIndex;col++)
        {
            if(col==colStartIndex)
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
    int rowStartIndex, rowEndIndex, colStartIndex, colEndIndex;
    bool loop=true;
    char anotherOne;
    bool printTable=true;
    cout << "\n-------------------Welcome to Multiplication Table----------------------";
    
    //rowStartIndex=10;
    //rowEndIndex=15;
    //colStartIndex=10;
    //colEndIndex=13;
     //note initial value of loop is true
    while(loop)
    {
        cout<<"\nEnter the starting range (Column) for Multiplication Table:";
        cin>>colStartIndex;
        cout<<"\nEnter the ending range (Column) for Multiplication Table:";
        cin>>colEndIndex;
        if(colStartIndex<1 || colStartIndex>colEndIndex)
        {
            cout<<"\nColumn index has to be greater than zero, and start column index should be less or equal than end column index, please try again.";
            printTable=false; //error in range do not print table
        } else
        {
            cout<<"\nEnter the starting range (Row) for multiplying the numbers in Multiplication Table:";
            cin>>rowStartIndex;
            cout<<"\nEnter the ending range (Row) for multiplying the numbers in Multiplication Table:";
            cin>>rowEndIndex;
            if(rowStartIndex<1 || rowStartIndex>rowEndIndex)
            {
                cout<<"\nRow index has to be greater than zero, and start row index should be less or equal than end row index, please try again.";
                printTable=false; //error in range do not print table
            }
        }
        
        if(printTable)
        {
            cout << "\n---Multiplication Table---\n";
            printMultiplicationTable(rowStartIndex, rowEndIndex, colStartIndex, colEndIndex);
            cout << "\n--------------------------";
        }
        else
        {
            printTable=true; //print table at next round.
        }
        cout<<"\nWould you like to print another multiplication table? (y/n):";
        cin>>anotherOne;
        if(!(anotherOne=='Y' || anotherOne=='y'))
        {
            loop=false;
        }
    }

    cout << "\nThanks for using the Multiplication Table!.";
    cout << endl;
	return 0;

}