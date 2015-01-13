/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 12, 2015, 9:14 PM
* Purpose: Homework Problem 2
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
const unsigned short CTAVS=43560;//Percent conversion
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
    //Declare the variables
    float InSqFt,Acrs;
    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>InSqFt;
    //Calculate total acres for solution
    Acrs=InSqFt/CTAVS;
    //Output the results
    cout<<InSqFt<<"square feet = ";
    cout<<Acrs<<"acres"<<endl;
    //Exit Stage Here!
    return 0;
}
