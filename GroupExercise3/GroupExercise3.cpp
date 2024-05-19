// C++ implementation of GroupExercise 3 simple calculator app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
using namespace std;

void displayOprators()
{
    cout << "\n-------------------Welcome to Basic Math Calculator----------------------";
    cout << "\nopetations available are:"<<endl;
    cout << "\n (+) - Addition";
    cout << "\n (-) - Subtraction";
    cout << "\n (*) - Multiplication";
    cout << "\n (/) - Division";
    cout << "\n-------------------------------------------------------------------------";
}

string getEqToSolve()
{
    string problem="";
    cout << "\nEnter a problem to solve:";
    //cin.ignore(); //line clears orignores the newline from the stream.
    getline(cin, problem); // input can have blank spaces in the string
    //cout<<endl<<problem<<endl;
    return problem;
}

double addition(double number1, double number2)
{
    return number1+number2;
}
double subtraction(double number1, double number2)
{
    return number1-number2;
}
double multiplication(double number1, double number2)
{
    return number1*number2;
}
double division(double number1, double number2)
{
    return number1/number2;
}

double solveEq(string firstNumber, string secondNumber, char oprator)
{
    double number1, number2, result=0;
    //convert it to double to process
    number1 = stod(firstNumber);
    //convert it to double to process
    number2 = stod(secondNumber);
    if(oprator == '*') result=multiplication(number1,number2);
    if(oprator == '/') result=division(number1,number2);
    if(oprator == '+') result=addition(number1,number2);
    if(oprator == '-') result=subtraction(number1,number2);
    return result;
}

void CalculateAndDisplay(string problem)
{
    string firstNumber, secondNumber;
    bool validNum1,validNum2;
    char oprator;
    double res=0;
    //string problem=getEqToSolve();
    //parse input string
    firstNumber="";
    secondNumber="";
    validNum1=false;
    validNum2=false;
    oprator=' ';

    for(char c : problem)
    {
        //cout<<" inChar:"<<c;
        //is not oprator
        if(!(c=='*' || c=='/' ||c=='+' ||c=='-'))
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
            oprator=c;
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
        validNum2=true; 
        //cout<<"\tsecondNumber="<<secondNumber<<endl;
    }
    //cout<<" Oprator:"<<oprator<<" firstNumber:"<<firstNumber<<" secondNumber:"<<secondNumber<<endl;

    res=solveEq(firstNumber, secondNumber,oprator);
    cout << "\nInput Eq:"<<problem<< "\n";
    cout << "Total:"<<res;
}

// starting function/Driver code
int main()
{

    bool loop=true;
    char repeat;
    string problem; 
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to five decimal places
     displayOprators();
    //note initial value of loop is true
    while(loop)
    {
        problem = getEqToSolve();
        CalculateAndDisplay(problem);
        //--------------------------------------------------------------------
        cout << "\nlike to try again! (Y/N):";
        cin>>repeat;
        cin.ignore(); //line clears orignores the newline from the stream.
        if(!(repeat=='Y' || repeat=='y'))
        {
            loop=false;
        }
    } //while
    cout<<"\nThank you for using calculator app!";
    cout << endl;
	return 0;

}
