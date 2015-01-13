/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 12, 2015, 7:27 PM
* Purpose: Homework Problem 5
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
float m= 44.50;//meal
float tax = 0.0675*m; //6.75% tax on the meal
float tip = (tax + m)*0.15;  //tip is 15% after adding the tax
float total = m + tax + tip;  //total bill
//Output the result
 cout << "The meal charge is: $" << m <<endl;
 cout << "The tax amount is: $" << tax <<endl;
 cout << "The tip amount is: $" << tip <<endl;
 cout << "The total bill is: $" << total <<endl;  
    //Exit Stage Here!
    return 0;
}
