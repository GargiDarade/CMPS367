// C++ implementation of Assignment 1 Problem 1:calculator app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
#include <bits/stdc++.h>
using namespace std;
    //functions
    //checks for parenthesis in the string
    bool parenthesisPresent(string problem)
    {
        bool res=false;
        string str1 = "(";
        // Find first occurrence of "("
        size_t found = problem.find(str1);
        if (found != string::npos) 
        {
            res=true; 
        }
        return res;
    }
    //checks for exponents in the string
    bool ExponentsPresent(string problem)
    {
        bool res=false;
        string str1 = "^";
        // Find first occurrence of "^"
        size_t found = problem.find(str1);
        if (found != string::npos) 
        {
            res=true; 
        }
        return res;
    }
    //checks for Multiplication or Division in the string
    bool MulDivPresent(string problem)
    {
        bool res=false;
        string str1 = "*";
        // Find first occurrence of "*"
        size_t found = problem.find(str1);
        if (found != string::npos) 
        {
            res=true; 
        } 
        else
        {
            str1 = "/";
            // Find first occurrence of "/"
            size_t found = problem.find(str1);
            if (found != string::npos) 
            {
                res=true; 
            }
        }
        return res;
    }
    //checks for Addition or Subtraction in the string
    bool plsMnsPresent(string problem)
    {
        bool res=false;
        string str1 = "+";
        // Find first occurrence of "+"
        size_t found = problem.find(str1);
        if (found != string::npos) 
        {
            res=true; 
        } 
        else 
        {
            str1 = "-";
            // Find first occurrence of "-"
            size_t found = problem.find(str1);
            if (found != string::npos) 
            {
                res=true; 
            }
        }
        return res;
    }

    //Format for concatenating strings:
    //parse string in the formet of
    //problem == preProblem + currentProblem + afterProblem
    //with innermost and left most parenthesis as current problem
    string currentEqInParenthesis(string problem,string &preProblem,string &afterProblem)
    {
        int opnParLoc,clsParLoc;
        bool openParPresent=false,closeParPresent=false;
        string eqToSolve ="";
        for (int i = 0; i < problem.length(); i++)
        {
            if (problem[i] == '(')
            {
                opnParLoc=i;
                openParPresent=true;
                //cout<<"\n opnParLoc:"<<opnParLoc;
            }
            else if(openParPresent && problem[i] == ')')
            {
                clsParLoc=i;
                //cout<<"\nclsParLoc:"<<clsParLoc;
                preProblem="";
                afterProblem="";
                preProblem = problem.substr(0, opnParLoc);
                eqToSolve = problem.substr(opnParLoc, (clsParLoc+1)-opnParLoc);
                afterProblem = problem.substr(clsParLoc+1, problem.length()-(clsParLoc+1));
                break;
            }
        }
        return eqToSolve;
    }

    //removes opening and closing parenthesis
    string removeparenthesis(string problem)
    {
        string res ="";
        int opnParLoc,clsParLoc;
        bool openParPresent=false,closeParPresent=false;
        string eqToSolve ="";
        for (int i = 0; i < problem.length(); i++)
        {
            if (problem[i] == '(')
            {
                opnParLoc=i;
                openParPresent=true;
                //cout<<"\n opnParLoc:"<<opnParLoc;
            }
            else if(openParPresent && problem[i] == ')')
            {
                clsParLoc=i;
                //cout<<"\nclsParLoc:"<<clsParLoc;
                res = problem.substr((opnParLoc+1), clsParLoc-(opnParLoc+1));
                break;
            }
        }
        return res;
    }
    void printExecutionStep(string probleminprogress, bool addParenthesis, string preProblem, string afterProblem)
    {
        if(addParenthesis && plsMnsPresent(probleminprogress))
        {
            cout<<"\nStep: "<<preProblem<<"("<<probleminprogress<<")"<<afterProblem;
        }
        else
        {
            cout<<"\nStep: "<<preProblem<<probleminprogress<<afterProblem;
        }
    }
    // note:parameter addParenthesis, preProblem and afterProblem are added to display execution steps
    //these parameters are not needed to solve equation
    string solveEqForMulDiv(string problem,bool addParenthesis, string preProblem, string afterProblem)
    {
        // solve all Multiplication/Division first
        double number1, number2, result;
        string firstNumber="",probleminprogress="",tempCal="";
        string secondNumber="";
        bool validNum1=false;
        bool validNum2=false;
        char oprator=' ',prvOprator;
        int indx=-1;
        int len=problem.length();

        for(char c : problem)
        {
            indx=indx+1;
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
                //char is oprator
                prvOprator=oprator;
                oprator=c;
                //cout<<"\nprvOprator:"<<prvOprator<<"\t"<<"Oprator"<<oprator<<"\t";
                if(!validNum1 && !validNum2)
                {
                    //got the first number
                    validNum1=true; 
                    //cout<<"\tfirstNumber="<<firstNumber<<endl;
                    //does not match the condition that is called in the proper order
                    if((oprator == '+' || oprator == '-'))
                    {
                        probleminprogress=probleminprogress + firstNumber + oprator;
                        validNum1=false; 
                        firstNumber="";
                    }
                } else if(validNum1 && !validNum2)
                {
                    //got the second number
                    validNum2=true; 
                    //cout<<"\tsecondNumber="<<secondNumber<<endl;
                }
                //this will execute when exp has more than one oprator eg. 10+3*4+20/2*5
                if(validNum1 && validNum2)
                {
                    //cout<<" (validNum1 && validNum2)"<<validNum1<<validNum2;
                    result=0;
                    if((prvOprator == '*' || prvOprator == '/'))
                    {
                        //convert into double and execute exp, convert result to the string.
                        //convert it to double to process
                        number1 = stod(firstNumber);
                        //convert it to double to process
                        number2 = stod(secondNumber);
                        if(prvOprator == '*') result=number1*number2;
                        if(prvOprator == '/') result=number1/number2;

                        //to prevent loss of fraction
                        if((result-static_cast<int>(result)== 0)) 
                        {firstNumber=to_string(static_cast<int>(result));}   
                        else {firstNumber=to_string(result);} //result become first number

                        secondNumber="";
                        validNum2=false; 
                        tempCal= probleminprogress + firstNumber+oprator+problem.substr((indx+1),(len-(indx+1)));
                        printExecutionStep(tempCal, addParenthesis, preProblem, afterProblem);
                        //cout<<"\tresult="<<result<<endl;
                    } 
                    if((oprator == '+' || oprator == '-'))
                    {
                        probleminprogress=probleminprogress + firstNumber + oprator;
                        firstNumber="";
                        validNum1=false; 
                        //cout<<"\nprobleminprogress="<<probleminprogress;
                        //printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
                    }

                } 

            } //oprator
        } //for

        //cout<<"\nafter loop probleminprogress:"<<probleminprogress;
        //cout<<" prvOprator:"<<prvOprator<<" Oprator:"<<oprator;
        //cout<<" firstNumber:"<<firstNumber;
        //cout<<" secondNumber:"<<secondNumber<<endl;
        //cout<<" (validNum1,validNum2)"<<validNum1<<validNum2;

        //process last number due to end of input string
        if((oprator == '*' || oprator == '/'))
        {
            //convert into double and execute exp, convert result to the string.
            //convert it to double to process
            number1 = stod(firstNumber);
            //convert it to double to process
            number2 = stod(secondNumber);
            if(oprator == '*') result=number1*number2;
            if(oprator == '/') result=number1/number2;
            //to prevent loss of fraction
            if((result-static_cast<int>(result)== 0)) 
            {firstNumber=to_string(static_cast<int>(result));}   
            else {firstNumber=to_string(result);} //result become first number
            
            probleminprogress=probleminprogress + firstNumber;
            //cout<<"\nprobleminprogress="<<probleminprogress;
            printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
        } 
        else if((oprator == '+' || oprator == '-'))
        {
            probleminprogress=probleminprogress + firstNumber;
            //cout<<"\nprobleminprogress:"<<probleminprogress;
            //printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
        }

        //cout<<"\nprobleminprogressNonMD="<<probleminprogress;
       return(probleminprogress); //eq for pass 2 +,-
    }

    // note:parameter addParenthesis, preProblem and afterProblem are added to display execution steps
    //these parameters are not needed to solve equation
    string solveEqForPlsMns(string problem,bool addParenthesis, string preProblem, string afterProblem)
    {
        // solve all Addition/Subtraction
        double number1, number2, result;
        string firstNumber="",probleminprogress="",tempCal="";
        string secondNumber="";
        bool validNum1=false;
        bool validNum2=false;
        char oprator=' ',prvOprator;
        int indx=-1;
        int len=problem.length();
        for(char c : problem)
        {
            indx=indx+1;
            //cout<<" inChar:"<<c;
            //is not oprator
            if(!(c=='+' ||c=='-'))
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
                //char is oprator
                prvOprator=oprator;
                oprator=c;
                //cout<<"\nprvOprator:"<<prvOprator<<"\t"<<"Oprator"<<oprator<<"\t";
                if(!validNum1 && !validNum2)
                {
                    //got the first number
                    validNum1=true; 
                    //cout<<"\tfirstNumber="<<firstNumber<<endl;
                } else if(validNum1 && !validNum2)
                {
                    //got the second number
                    validNum2=true; 
                    //cout<<"\tsecondNumber="<<secondNumber<<endl;
                }

                //this will execute when exp has more than one oprator eg. 10+3+20-5
                if(validNum1 && validNum2)
                {
                    //cout<<" (validNum1 && validNum2)"<<validNum1<<validNum2;
                    result=0;
                    number1 = stod(firstNumber);
                    number2 = stod(secondNumber);
                    if(prvOprator == '+') result=number1+number2;
                    if(prvOprator == '-') result=number1-number2;

                    //to prevent loss of fraction
                    if((result-static_cast<int>(result)== 0)) 
                    {firstNumber=to_string(static_cast<int>(result));}   
                    else {firstNumber=to_string(result);} //result become first number
                    secondNumber="";
                    validNum2=false; 
                    tempCal=firstNumber+oprator+problem.substr((indx+1),(len-(indx+1)));
                    //cout<<"\n +- both valid numbers";
                    printExecutionStep(tempCal, addParenthesis, preProblem, afterProblem);
                    //cout<<"\tresult="<<result<<endl;
                }
            } // operator  

        } //for loop
        //last number processing
        number1 = stod(firstNumber);
        number2 = stod(secondNumber);
        if(oprator == '+') result=number1+number2;
        if(oprator == '-') result=number1-number2;

        //to prevent loss of fraction
        if((result-static_cast<int>(result)== 0)) 
        {firstNumber=to_string(static_cast<int>(result));}   
        else {firstNumber=to_string(result);} //result become first number

        probleminprogress=firstNumber;
        //cout<<"\t final result="<<probleminprogress<<endl;
        printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
        return(probleminprogress);
    }
    
        // note:parameter addParenthesis, preProblem and afterProblem are added to display execution steps
    //these parameters are not needed to solve equation
    string solveEqForExponents(string problem,bool addParenthesis, string preProblem, string afterProblem)
    {
        // solve all Multiplication/Division first
        double number1, number2, result;
        string firstNumber="",probleminprogress="",tempCal="";
        string secondNumber="";
        bool validNum1=false;
        bool validNum2=false;
        char oprator=' ',prvOprator;
        int indx=-1;
        int len=problem.length();

        for(char c : problem)
        {
            indx=indx+1;
            //cout<<" inChar:"<<c;
            //is not oprator
            if(!(c=='^' || c=='*' || c=='/' ||c=='+' ||c=='-'))
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
                //char is oprator
                prvOprator=oprator;
                oprator=c;
                //cout<<"\nprvOprator:"<<prvOprator<<"\t"<<"Oprator"<<oprator<<"\t";
                if(!validNum1 && !validNum2)
                {
                    //got the first number
                    validNum1=true; 
                    //cout<<"\tfirstNumber="<<firstNumber<<endl;
                    //does not match the condition that is called in the proper order
                    if((oprator == '*' || oprator == '/' || oprator == '+' || oprator == '-'))
                    {
                        probleminprogress=probleminprogress + firstNumber + oprator;
                        validNum1=false; 
                        firstNumber="";
                    }
                } else if(validNum1 && !validNum2)
                {
                    //got the second number
                    validNum2=true; 
                    //cout<<"\tsecondNumber="<<secondNumber<<endl;
                }
                //this will execute when exp has more than one oprator eg. 10+3*4+20/2*5
                if(validNum1 && validNum2)
                {
                    //cout<<" (validNum1 && validNum2)"<<validNum1<<validNum2;
                    result=0;
                    if(prvOprator == '^')
                    {
                        //convert into double and execute exp, convert result to the string.
                        //convert it to double to process
                        number1 = stod(firstNumber);
                        //convert it to double to process
                        number2 = stod(secondNumber);
                        result=pow(number1, number2);

                        //to prevent loss of fraction
                        if((result-static_cast<int>(result)== 0)) 
                        {firstNumber=to_string(static_cast<int>(result));}   
                        else {firstNumber=to_string(result);} //result become first number

                        secondNumber="";
                        validNum2=false; 
                        tempCal= probleminprogress + firstNumber+oprator+problem.substr((indx+1),(len-(indx+1)));
                        printExecutionStep(tempCal, addParenthesis, preProblem, afterProblem);
                        //cout<<"\tresult="<<result<<endl;
                    } 
                    if((oprator == '*' || oprator == '/' || oprator == '+' || oprator == '-'))
                    {
                        probleminprogress=probleminprogress + firstNumber + oprator;
                        firstNumber="";
                        validNum1=false; 
                        //cout<<"\nprobleminprogress="<<probleminprogress;
                        //printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
                    }

                } 

            } //oprator
        } //for

        //cout<<"\nafter loop probleminprogress:"<<probleminprogress;
        //cout<<" prvOprator:"<<prvOprator<<" Oprator:"<<oprator;
        //cout<<" firstNumber:"<<firstNumber;
        //cout<<" secondNumber:"<<secondNumber<<endl;
        //cout<<" (validNum1,validNum2)"<<validNum1<<validNum2;

        //process last number due to end of input string
        if(oprator == '^')
        {
            //convert into double and execute exp, convert result to the string.
            //convert it to double to process
            number1 = stod(firstNumber);
            //convert it to double to process
            number2 = stod(secondNumber);
            result=pow(number1, number2);
            //to prevent loss of fraction
            if((result-static_cast<int>(result)== 0)) 
            {firstNumber=to_string(static_cast<int>(result));}   
            else {firstNumber=to_string(result);} //result become first number
            
            probleminprogress=probleminprogress + firstNumber;
            //cout<<"\nprobleminprogress="<<probleminprogress;
            printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
        } 
        else if((oprator == '*' || oprator == '/' || oprator == '+' || oprator == '-'))
        {
            probleminprogress=probleminprogress + firstNumber;
            //cout<<"\nprobleminprogress:"<<probleminprogress;
            //printExecutionStep(probleminprogress, addParenthesis, preProblem, afterProblem);
        }

        //cout<<"\nprobleminprogressNonMD="<<probleminprogress;
       return(probleminprogress); //eq for pass 2 +,-
    }


    
    // note:parameter preProblem and afterProblem are added to display execution steps
    //these parameters are not needed to solve equation
    string solveCurrentEquation(string currentProblem, string preProblem,string afterProblem)
    {
        //string res="";
        string problem=currentProblem;
        bool parenthesisRemoved=false;
        if(parenthesisPresent(problem))
        {
            //remove parenthesis
             problem=removeparenthesis(problem);
             parenthesisRemoved=true;
             //cout<<"\nafter removeing parenthesis:"<<problem;

        }
        if(ExponentsPresent(problem))
        {
            //solve for exponents.
             problem=solveEqForExponents(problem,parenthesisRemoved,preProblem,afterProblem);
             //cout<<"\nafter solving exponents:"<<problem;

        }
        if(MulDivPresent(problem))
        {
            //solve for Multiplication and/or Division
             problem=solveEqForMulDiv(problem,parenthesisRemoved,preProblem,afterProblem);
             //cout<<"\nafter solving Mul,Div:"<<problem;

        }
        if(plsMnsPresent(problem))
        {
            //solve for Addition amd/or Subtraction
             problem=solveEqForPlsMns(problem,parenthesisRemoved,preProblem,afterProblem);
             //cout<<"\nafter solving Pls,Mns:"<<problem;

        }
        return problem;
    }


// starting function/Driver code
int main()
{
    //variables to store input problem
    string  problem,preProblem,currentProblem,afterProblem;
    bool loop=true;
    char repeat;

    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to five decimal places

    //note initial value of loop is true
    while(loop)
    {
        cout << "\nPlease provide multiple operations expression to solve."<<endl;
        //cin.ignore(); //line clears orignores the newline from the stream.
        getline(cin, problem); // input can have blank spaces in the string
        cout << "\nInput Eq:"<<problem;
        while(parenthesisPresent(problem))
        {
            //brake problem into preProblem + currentProblem + afterProblem
            currentProblem=currentEqInParenthesis(problem,preProblem,afterProblem);
            //cout<<"\npreProblem:"<<preProblem<<" currentProblem:"<<currentProblem<<" afterProblem:"<<afterProblem;
            currentProblem=solveCurrentEquation(currentProblem,preProblem,afterProblem);
            problem=preProblem+currentProblem+afterProblem;
            //cout<<"\nProblem:"<<problem;
        }

            currentProblem=problem;
            preProblem="";
            afterProblem="";

        if(ExponentsPresent(problem) || MulDivPresent(problem) || plsMnsPresent(problem) )
        {
            currentProblem=solveCurrentEquation(currentProblem,preProblem,afterProblem);
            problem=preProblem+currentProblem+afterProblem;
            //cout<<"\nProblem:"<<problem;
        }
        cout << "\nThe answer to this problem is:"<<problem;
        //-----------------------------------------------------------
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
