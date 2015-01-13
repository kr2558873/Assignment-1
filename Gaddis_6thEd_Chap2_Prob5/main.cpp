/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 12, 2015, 7:45 PM
* Purpose: Homework Problem 9
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
//Inputs
float payA = 1700.00;//Pay amount
float payP = 26;//Pay periods
float APay = payA * payP;//Annual Pay
//Output the result
 cout << "The employee earns $ each pay period " << payA <<endl;
 cout << "There are number of pay periods in a year " << payP <<endl;
 cout << "The annual pay is: $" << APay <<endl;
    //Exit Stage Here!
    return 0;
}
