// C++ implementation of GroupExercise 4 extract the initials app 
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
    string flNames="(";
    string initials="(";
    string name,initls;
    string fullname[5] = {"Gargi Darade", "Aditi Darade", "Tanu Kute", "Avanti Sirsath", "Revati Sirsath"};
    for(int i=0;i<5;i++)
    {
        name=fullname[i];
        flNames=flNames+ name;
        if(i<4) flNames=flNames + ", "; 
        initls=name[0]; //first initials

        string strBSpace = " ";
        // Find first occurrence of " "
        size_t found = name.find(strBSpace);
        //check and get second initial because full name can have two words
        if (found != string::npos)
        {
            //if found add second initial
            initls=initls + name[found+1];
        }
        initials=initials+initls;
        if(i<4) initials=initials + ", "; 

    }
    flNames=flNames + ")"; 
    initials=initials + ")"; 
    cout<<"\n List of full Names:"<< endl;
    cout<<flNames;
    cout<<"\n List of corresponding initials:"<< endl;
    cout << initials;
    cout<< endl;
	return 0;

}
