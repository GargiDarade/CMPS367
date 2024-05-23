// C++ implementation of Assignment 5 Problem 1:Grade Calculator app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
#include <bits/stdc++.h>
#include <time.h>
using namespace std;


class GradeCalculator {
    // Access specifier 
    private: 
    //private Data Members  
    string mCourseDept;
    int mCourseNumber;
    string mCourseName;
    int mNoOfStudents;
    int mMaxGradePoints;
    int *nStudentScoreArr;
    
    //private Member Functions() 
    //Recursive function, implemention of Bubble Sort
    void bubbleSort(int arry[], int n)
    {
        // Base Case: If array size is 1, return.
        if (n == 1)
            return;
    
        // One pass of bubble sort. After
        // this pass, the largest element
        // is moved (or bubbled) to end.
        for (int i = 0; i < n - 1; i++)
            if (arry[i] > arry[i + 1])
                swap(arry[i], arry[i + 1]);
    
        // Largest element is fixed,
        // recur for remaining array
        bubbleSort(arry, n - 1);
    }
    public: 
    //default constructor.
    GradeCalculator()
    {
        mCourseDept="";
        mCourseNumber=0;
        mCourseName="";
        mNoOfStudents=0;
        mMaxGradePoints=0;
        nStudentScoreArr=NULL;
    }

    // public Member Functions()
    void displayGreetings()
    {
        cout << "\n-------------------Welcome to the Grade Calculator----------------------"<<endl;
    }

    void getCourseInfo() 
    {
        cout<<"\nEnter the course dept:";
        //cin.ignore(); //line clears orignores the newline from the stream.
        getline(cin, mCourseDept); // input can have blank spaces in the string
        cout<<"\nEnter the course number:";
        cin>>mCourseNumber;
        cout<<"\nEnter the course name:";
        cin.ignore(); //line clears orignores the newline from the stream.
        getline(cin, mCourseName); //input can have blank spaces in the string
        cout<<"\nEnter the number of students that will be scored:";
        cin>>mNoOfStudents;
        cout<<"\nEnter maximum grade points possible:";
        cin>>mMaxGradePoints;
        if(mNoOfStudents>0)
        {
            if(nStudentScoreArr!=NULL)
            {
                delete nStudentScoreArr; //delete previous array
                nStudentScoreArr=NULL;
            }
            nStudentScoreArr = new int(mNoOfStudents);
        }
        else
        {
            cout<<"\nNumber of students should be greater than 0";
        }
        //Based on the number of students that was entered, run the loop for that amount of times
        for(int i=0;i<mNoOfStudents;i++)
        {
            cout<<"\nEnter the score for student No."<<i+1<<" :" ;
            cin>>nStudentScoreArr[i];
        }
    }

void displayGradeInformation()
{
    //Course: CMPS 367: Object Oriented Language C++
    //Scores: 10 20 30 40 50 60 70 75 80 85 90 95 100
    double totalScr=0;
    double avgPrn=0;
    int tmpCalc=0;
    cout << "\n-------------------Grades Information----------------------";
    cout << "\nCourse: "<<mCourseDept<<" "<<mCourseNumber<<": "<<mCourseName;
    bubbleSort(nStudentScoreArr, mNoOfStudents);
    cout << "\nScores: ";
     for(int i=0;i<mNoOfStudents;i++)
    {
        totalScr= totalScr + nStudentScoreArr[i];
        cout<<nStudentScoreArr[i]<<" ";
    }
    //cout<<"\nTotal:" << totalScr << " " << mNoOfStudents*mMaxGradePoints;
    //avgPrn = (totalScr/mNoOfStudents)*100/mMaxGradePoints;
    //avgPrn = (totalScr/(mNoOfStudents*mMaxGradePoints))*100;
    tmpCalc=mNoOfStudents*mMaxGradePoints;
    avgPrn = totalScr*100.00/tmpCalc;
    cout<<"\nAverage:" << to_string(avgPrn) <<"%";
    //sort array
    cout<<"\nLowest Score: "<< nStudentScoreArr[0];
    cout<<"\nHighest Score: "<< nStudentScoreArr[mNoOfStudents-1];
}

};

// starting function/Driver code
int main()
{
    bool loop=true;
    char repeat;
    GradeCalculator GradeCalcObj;
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to five decimal places

    GradeCalcObj.displayGreetings();
    //note initial value of loop is true
    while(loop)
    {
        GradeCalcObj.getCourseInfo();
        GradeCalcObj.displayGradeInformation();
        //cout<<endl;
        cout << "\nlike to try again! (Y/N):";
        cin>>repeat;
        cin.ignore(); //line clears orignores the newline from the stream.
        if(!(repeat=='Y' || repeat=='y'))
        {
            loop=false;
        }
    } //while
    cout<<"\nThank you for using grade calculator!";
    cout<< endl;
	return 0;
}
