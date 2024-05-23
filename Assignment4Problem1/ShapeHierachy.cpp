// C++ implementation of Assignment 4 Problem 1:Shape Hierachy app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
#include <bits/stdc++.h>
#include <time.h>
using namespace std;
const double PI = 3.14159; // constant value for PI

//user-defined class
//base class
class Shape { 
// Access specifier 
//two protected data members: width and height
//representing the dimensions of the shape.
protected:    
double mWidth;
double mHeight;
private: 
    //private Data Members  
    //private Member Functions() 
public: 
    // public Member Functions() 
    //parameterized constructor for Shape that initializes width and height.
    Shape(double width, double height) 
    {
        mWidth=width;
        mHeight=height;
    }
    //pure virtual function that calculates and returns the area of the shape.
    virtual double area()=0;
    //pure virtual function that calculates and returns the perimeter of the shape
    virtual double perimeter()=0;
    //virtual function display() in the Shape class that prints "Shape: "
    virtual void display()
    {
        cout<<"\nShape: ";
    }
};

class Rectangle  : public Shape
{ 
    private:    
    //private Member Functions() 

    public: 
    // public Member Functions() 
    // Constructor to init data members
    Rectangle(double width, double height): Shape(width, height) 
    { 
    } 
    double area() override 
    {
        return mWidth*mHeight;
    }
    
    double perimeter() override 
    {
        return 2*(mWidth+mHeight);
    }
    
    virtual void display() override 
    {
        cout<<"\nShape: Rectangle";
    }

};


class Triangle  : public Shape
{ 
    private:    
    //private Member Functions() 

    public: 
    // public Member Functions() 
    // Constructor to init data members
    Triangle(double width, double height) : Shape(width, height) 
    { 
    } 
    double area() override 
    {
        //half the product of its base and height
        return 0.5*mWidth*mHeight;
    }
    
    double perimeter() override 
    {
        //assuming triangle with two equal sides (isosceles triangle)
        return 2*sqrt((mWidth/2)*(mWidth/2)+mHeight*mHeight) + mWidth;
    }
    
    virtual void display() override 
    {
        cout<<"\nShape: Rectangle";
    }
};
class Circle  : public Shape
{ 
    private:
    double mRadius; //member variable to store the radius of the circle
    //private Member Functions() 
    public: 
    // public Member Functions() 
    Circle(double radius) : Shape(0, 0) 
    {
        mRadius=radius;
    }
    double area() override 
    {
        // π * radius^2
        return PI * pow(mRadius, 2); 
    }
    
    double perimeter() override 
    {
        //2 * π * radius
        return 2*PI*mRadius;
    }
    
    virtual void display() override 
    {
        cout<<"\nShape: Square";
    }

};
class Square  : public Shape
{ 
    private:   
    double mSide; //member variable to store side of the square 
    //private Member Functions() 

    public: 
    // public Member Functions() 
    //Default Constructor to init data members
    Square(double side) : Shape(side, side) 
    { 
        mSide=side;
    } 
    double area() override 
    {
        return mSide*mSide;
    }
    
    double perimeter() override 
    {
        return 4*mSide;
    }
    
    virtual void display() override 
    {
        cout<<"\nShape: Square";
    }

};

void displayGreetings()
{
    cout << "\n-------------------Example of Shape Hierachy----------------------"<<endl;
}

//display the menu that will contain options
void displayMenu()
{
    cout << "1. Rectangle."<<endl;
    cout << "2. Triangle."<<endl;
    cout << "3. Circle."<<endl;
    cout << "4. Square."<<endl;
}

//This function demonstrate the use of inheritance.
//input parameter is pointer to the base object gets objects of all derived classes, 
// this function calls their member functions, and displays their respective areas and perimeters
void calculateAndDisplayShape(Shape *baseShapePtr)
{
    cout<<endl;
    cout<<"\nArea:"<<baseShapePtr->area() << " (square units)";
    cout<<"\nPerimeter:"<<baseShapePtr->perimeter() << " (units)";
    baseShapePtr->display();
}

//calculate the area and the perimeter of the shape, 
//display the output of the area and perimeter and the shape.
 void processSelectedOption(int option)
    {
        double width;
        double height;
        double side;
        double radius;

        //ask the user to enter the necessary variables in order to calculate the area and perimeter
        if(option==1)
        {
            //Rectangle
            cout<<"\nEnter the width of the Rectangle:";
            cin>>width;
            cout<<"\nEnter the height of the Rectangle:";
            cin>>height;
            // creating a pointer of type
            // Base (Shape) pointing to an object
            // of type Derived (Rectangle)
            Shape* baseShapePtr = new Rectangle(width,height);
            //calling the calculateAndDisplayShape() function using the base pointer
            calculateAndDisplayShape(baseShapePtr);
            //delete object after using it
            delete baseShapePtr;
        }
        else if(option==2)
        {
            //Triangle
            cout<<"\nEnter the width/base of the Triangle (isosceles triangle):";
            cin>>width;
            cout<<"\nEnter the height of the Triangle (isosceles triangle):";
            cin>>height;
            // creating a pointer of type
            // Base (Shape) pointing to an object
            // of type Derived (Triangle)
            Shape* baseShapePtr = new Triangle(width,height); //base and height
            //calling the calculateAndDisplayShape() function using the base pointer
            calculateAndDisplayShape(baseShapePtr);
            //delete object after using it
            delete baseShapePtr;

        }
        else if(option==3)
        {
            //Circle
            cout<<"\nEnter the radius of the Circle:";
            cin>>radius;
            // creating a pointer of type
            // Base (Shape) pointing to an object
            // of type Derived (Circle)
            Shape* baseShapePtr = new Circle(radius);
            //calling the calculateAndDisplayShape() function using the base pointer
            calculateAndDisplayShape(baseShapePtr);
            //delete object after using it
            delete baseShapePtr;
        }
        else if(option==4)
        {
            //Square
            cout<<"\nEnter the side of the Square:";
            cin>>side;
            // creating a pointer of type
            // Base (Shape) pointing to an object
            // of type Derived (Circle)
            Shape* baseShapePtr = new Square(side);
            //calling the calculateAndDisplayShape() function using the base pointer
            calculateAndDisplayShape(baseShapePtr);
            //delete object after using it
            delete baseShapePtr;
        }
    }

// starting function/Driver code
int main()
{
    const int NUMBER_OF_OPTIONS = 4; //options in menu
    int itemIndex;
    bool loop=true;
    char repeat;

    displayGreetings();
    //note initial value of loop is true
    while(loop)
    {
        displayMenu();
        cout << "which shape you would like to calculate the area and perimeter (enter Index):";
        cin>>itemIndex;
        if(itemIndex<1 || itemIndex>NUMBER_OF_OPTIONS)
        {
            cout << "\nEntered index is not valid, try again! ";

        }
        else
        {
            processSelectedOption(itemIndex);
            cout<<endl;
            cout << "\nlike to try again! (Y/N):";
            cin>>repeat;
            //cin.ignore(); //line clears orignores the newline from the stream.
            if(!(repeat=='Y' || repeat=='y'))
            {
                loop=false;
            }
        }
    } //while
    cout<<"\nThank you for using Shape Hierachy portal!";

    cout<< endl;
	return 0;
}
