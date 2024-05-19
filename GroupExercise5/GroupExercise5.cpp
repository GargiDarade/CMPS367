// C++ implementation of GroupExercise 5 use of multi-dimensional array. app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
using namespace std;

// starting function/Driver code
int main()
{
    // 2d Array to store menu data
    string menu[5][5]={
    {"Size","S","M","L","XL"},
    {"Shirt","$5.00","$6.00","$7.00","$8.00"},
    {"Jacket","$10.00","$11.00","$12.00","$13.00"},
    {"Shoes","$15.00","$16.00","$17.00","$18.00"},
    {"Hat","$20.00","$21.00","$22.00","$23.00"}
    };
    cout<<endl;
    cout << left;  //left align
    cout << setfill(' '); //blank fill
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
             cout<< setw(9) <<menu[i][j]; //9 char width of column
        }
        cout<<endl;
    }
    cout<< endl;
	return 0;

}
