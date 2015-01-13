/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 12, 2015, 10:05AM
* Purpose: Homework Problem 6
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
    //Declare variables
 float salesdiv=6.2e-1f; //62 percent
 float salescomp=4.6; //4.6 million
 float division=salesdiv*salescomp;
 //Output the result
 cout<<"The total sales made by the sales division = $ "<<division<< "million(s)" <<endl;
 //Exit Stage Here!
    return 0;
}
