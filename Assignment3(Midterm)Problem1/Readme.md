Overview of your app (What is it, who is the intended audience, problem statement)

Assignment 3 Problem 1 is a Bank Account Management System app

Assignment 3 Problem 1 is a console app

Intended audiences of Problem 1 are user who would like to intract with bank 
through Bank Account Management System.

Problem 1: Create a simple bank account management system using classes. The program should display a welcome header saying, “Welcome to Chase” and say, “Type a number that you would like to perform”. The system should support the following operations:
1.Create a new bank account with an initial balance.
2.Deposit money into an account.
3.Withdraw money from an account.
4.Display the current balance of an account.

If the user chooses 1, then you will ask the user for their name and the initial balance number. Once the user enters the name and the initial balance, the system will use srand() to generate an account number and once that is done, it will then display an output saying that the account has been created successfully and display their balance and their account number. All that information should be saved into an array. Once that is done, then prompt the user to press any key to return to Main Menu.

If the user chooses 2, then you will ask the user to enter their account number. Once they enter an account number, then the system will perform the search to see if the account number exists. If the account number exists, then ask the user to enter the balance that they will be depositing and then from there, pull up their balance and add their current balance with the balance that they will be depositing and then from there, display the amount that they have deposited and their current balance and then from there, prompt the user to press any key to return to the Main Menu. If the account number does not exist, then let the user know that the account number does not exist and then prompt them to click any key to go back to Main Menu.

If the user chooses 3, then you will ask the user to enter their account number. Once they enter an account number, then the system will perform the search to see if the account number exists. If the account number exists, then ask the user to enter the balance that they will be withdrawing and then from there, pull up their balance and subtract their current balance with the balance that they will be withdrawing and then from there, display the amount that they have withdrawn
CMPS 367: Object Oriented Language C++ Spring 2024
and their current balance and then from there, prompt the user to press any key to return to the Main Menu. If the account number does not exist, then let the user know that the account number does not exist and then prompt them to click any key to go back to Main Menu.

If the user chooses 4, then you will ask the user to enter their account number. Once they enter an account number, then the system will perform the search to see if the account number exists. If the account number exists, then display the current balance of the account and then from there, prompt the user to press any key to return to the Main Menu. If the account number does not exist, then let the user know that the account number does not exist and then prompt them to click any key to go back to Main Menu.

How to run the app
First you have to compile respective .cpp source file, can be done in IDE or by following commands in console window
For Assignment 1 Problem 1 use
  g++ BankAccountMS.cpp  -o BankAccountMS.exe
please note here g++ is the compiler
Since apps are console apps need to start in console window by executing respective exe file
Note: app was develop by using Visual Studio Code. 

output is stored in A3P1BankAMSOutPut.txt file.

