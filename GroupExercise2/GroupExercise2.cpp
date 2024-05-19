// C++ implementation of GroupExercise 2 calculator app 
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
    double number1, number2, result;
    char oprator,prvOprator;
    //variables to store input problem
    string  problem,probleminprogress,firstNumber, secondNumber;
    bool needPass1,needPass2,validNum1,validNum2;
    bool loop=true;
    char repeat;

    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(5); //formats the output of decimal numbers to five decimal places

    //note initial value of loop is true
    while(loop)
    {
        //init vars
        probleminprogress="";
        cout << "\nPlease provide multiple operations expression to solve."<<endl;
        //cin.ignore(); //line clears orignores the newline from the stream.
        getline(cin, problem); // input can have blank spaces in the string
        cout << "\nInput Eq:"<<problem<< "\n";
        //two pass processing 
        needPass1=false; 
        needPass2=false;
        oprator=' ';

        //pass 1 for Multiplication/Division
        //check if pass 1 is needed
        string str1 = "*";
        // Find first occurrence of "*"
        size_t found = problem.find(str1);
        if (found != string::npos) 
        {
            //cout << "First occurrence is " << found << endl;
            needPass1=true; 
        }else
        {
            str1 = "/";
            // Find first occurrence of "/"
            size_t found = problem.find(str1);
            if (found != string::npos) 
            {
                //cout << "First occurrence is " << found << endl;
                needPass1=true; 
            }
        }

        if(needPass1)
        {  // solve all Multiplication/Division first
            firstNumber="";
            secondNumber="";
            validNum1=false;
            validNum2=false;

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

                            firstNumber=to_string(result);  //result become first number
                            secondNumber="";
                            validNum2=false; 
                             //cout<<"\tresult="<<result<<endl;
                        } 
                        if((oprator == '+' || oprator == '-'))
                        {
                            probleminprogress=probleminprogress + firstNumber + oprator;
                            firstNumber="";
                            validNum1=false; 
                            //cout<<"\nprobleminprogress="<<probleminprogress;
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

                firstNumber=to_string(result);  //result become first number
                probleminprogress=probleminprogress + firstNumber;
                //cout<<"\nprobleminprogress="<<probleminprogress;
            } 
            else if((oprator == '+' || oprator == '-'))
            {
                probleminprogress=probleminprogress + firstNumber;
                //cout<<"\nprobleminprogress:"<<probleminprogress;
            }

            //cout<<"\nprobleminprogressNonMD="<<probleminprogress;
            problem=probleminprogress; //eq for pass 2
        } //if needPass1
        
        
        //pass 2 for Addition/Subtraction
        //check if pass 2 is needed
        str1 = "+";
        // Find first occurrence of "*"
        found = problem.find(str1);
        if (found != string::npos) 
        {
            //cout << "First occurrence is " << found << endl;
            needPass2=true; 
        }else
        {
            str1 = "-";
            // Find first occurrence of "/"
            size_t found = problem.find(str1);
            if (found != string::npos) 
            {
                //cout << "First occurrence is " << found << endl;
                needPass2=true; 
            }
        }

        if(needPass2)
        {  // solve all Addition/Subtraction
            firstNumber="";
            secondNumber="";
            validNum1=false;
            validNum2=false;
            oprator=' ';
            probleminprogress="";

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
                        firstNumber=to_string(result);  //result become first number
                        secondNumber="";
                        validNum2=false; 
                        //cout<<"\tresult="<<result<<endl;
                    }
                } // operator  

            } //for loop
            //last number processing
            number1 = stod(firstNumber);
            number2 = stod(secondNumber);
            if(oprator == '+') result=number1+number2;
            if(oprator == '-') result=number1-number2;
            probleminprogress=to_string(result);
            //cout<<"\t final result="<<probleminprogress<<endl;
        } //if needPass2
        cout << "Solution:"<<stod(probleminprogress);
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
