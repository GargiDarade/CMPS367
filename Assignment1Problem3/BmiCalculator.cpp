// C++ implementation of Assignment 1 Problem 3: BMI Calculator
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//function to print MBI Ranges
void printBMIRanges()
{
    //display BMI Ranges
    //by using settw,setfill and left alignmnet
    string category;
    string bmiRange;
    cout << left; 
    cout << endl;
    cout << setfill('-'); 
    cout << setw(25)<<""<<"BMI Calculator";
    cout << setw(26)<<""<< endl;;
    
    cout << setfill(' '); 
    category="Category";
    bmiRange="BMI Range (kg/m2)";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Severe Thinness";
    bmiRange="<16";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Moderate Thinness";
    bmiRange="16 - 17";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Mild Thinness";
    bmiRange="17 - 18.5";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Normal";
    bmiRange="18.5 - 25";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Overweight";
    bmiRange="25 - 30";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Obese Class I";
    bmiRange="30 - 35";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Obese Class II";
    bmiRange="35 - 40";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;

    cout << setfill(' '); 
    category="Obese Class III";
    bmiRange=">40";
    cout <<"| "<< setw(30) << category <<"| " << setw(30)<< bmiRange << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(65)<<""<< endl;
    cout << setfill(' ');
    cout << setw(20)<<""<<"Welcome to BMI Calculator!"<< endl;
}
//function to map meaning of BMI 
string meaningOfBMI(double bmi)
{
    string category;
    if (bmi < 16) 
    {
       category="Severe Thinness";
    } else if (bmi >= 16 && bmi < 17) 
    {
        category="Moderate Thinness";
    } else if (bmi >=17 && bmi < 18.5) 
    {
        category="Mild Thinness";
    } else if (bmi >= 18.5 && bmi < 25) 
    {
        category="Normal";
    } else if (bmi >= 25 && bmi < 30) 
    {
        category="Overweight";
    } else if (bmi >= 30 && bmi < 35) 
    {
        category="Obese Class I";
    } else if (bmi >= 35 && bmi < 40) 
    {
        category="Obese Class II";
    } else if (bmi >= 40) 
    {
        category="Obese Class III";
    }
    return category;
}
/// starting function/Driver code
int main()
{
    string name, gender;
    int age;
    double weight,heightInFeets,heightInInches,totalHeightInInches,BMI;

    printBMIRanges();

    //cin.ignore(); //line clears orignores the newline from the stream.
    cout << "\nPlease enter your name: ";
    getline(cin, name);
    //cin.ignore(); //line clears orignores the newline from the stream.
    //cin.clear(); //to restore the input stream to a working state.
    cout << "\nPlease enter your age: ";
    cin >> age;
    cout << "\nPlease enter your Gender: ";
    cin >> gender;
    cout << "\nPlease enter your height in feet: ";
    cin >> heightInFeets;
    cout << "\nPlease enter your height in inches: ";
    cin >> heightInInches;
    cout << "\nPlease enter your weight in pounds: ";
    cin >> weight;
    totalHeightInInches = heightInFeets*12 + heightInInches;
    BMI= 703*(weight/(totalHeightInInches*totalHeightInInches));

cout << fixed; //outputs floating-point numbers in a fixed decimal format
cout << setprecision(2); //formats the output of decimal numbers to two decimal places

cout << "Hi "<<name<<","<< endl;
cout << "You are a "<<gender<<". You are "<<age<<" years old. You are currently "<<heightInFeets;
cout << " feet, "<<heightInInches<<" inches and you currently weight "<<weight<<" pounds. Your BMI is ";
cout << BMI<<", which is "<<meaningOfBMI(BMI)<<".";
cout << "\nThank you for using the BMI Calculator!";

    cout << endl;
	return 0;
}