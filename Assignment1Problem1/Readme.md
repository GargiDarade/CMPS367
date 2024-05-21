Overview of your app (What is it, who is the intended audience, problem statement)

Assignment 1 Problem 1 is a calculator app

Assignment 1 Problem 1 is a console app

Intended audiences of Problem 1 are user who would like to find the meaning from birthday.

Problem 1: create a C++ console app, where you will ask the user to input a problem that 
they would like to solve. The calculator must be able to support order of operation problems
as well as regular arithmetic problems.
The way the program should run is by asking the user to enter the problem that they would like to solve.

please note the following execution order is must"
1.Parenthesis
2.Exponents
3.Multiplication or Division from left to right
4.Addition or Subtraction from left to right

Please note that you also must show your work in the console app as the purpose of this app would be for elementary school students who needs an offline calculator apps to be able to solve arithmetic and order of operation problems.

Features of the app
console app asks about math problem to solve, then displays solution along with steps it used.
Eg.
Please provide multiple operations expression to solve.
(3 * 5^2 / 15) - (5 - 2^2)

Input Eq:(3 * 5^2 / 15) - (5 - 2^2)
Step: 3 *25/ 15 - (5 - 2^2)
Step: 75/ 15 - (5 - 2^2)
Step: 5 - (5 - 2^2)
Step: 5 - (5 -4)
Step: 5 - 1
Step: 4
The answer to this problem is:4
like to try again! (Y/N):y


How to run the app
First you have to compile respective .cpp source file, can be done in IDE or by following commands in console window
For Assignment 1 Problem 1 use
  g++ Assignment1Calculator.cpp  -o Assignment1Calculator.exe
please note here g++ is the compiler
Since apps are console apps need to start in console window by executing respective exe file
Note: app was develop by using Visual Studio Code. 

output is stored in A1P1CalculatoOutPut.txt file.

