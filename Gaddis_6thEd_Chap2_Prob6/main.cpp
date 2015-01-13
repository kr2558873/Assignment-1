/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 12, 2015, 11:00 PM
* Purpose: Homework Problem 10
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
 float gallons = 12;
 float miles = 350;
 float MPG = miles/gallons;
//Output the result
 cout << "A car that holds " << gallons << " gallons of gasoline and"
  << "travels " << miles << " before refueling"
  << "gets " << MPG << " MPG";
    //Exit Stage Here!
    return 0;
}
