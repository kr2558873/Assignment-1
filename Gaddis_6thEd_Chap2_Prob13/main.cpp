/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 11, 2015, 8:20 PM
* Purpose: Homework Problem 1
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
 //Declare and Initialize variables
 float bPrice = 12.67;//base price
 float sPrice = (bPrice * 0.40) + bPrice;// sell price total
//Output the results
 cout << "The selling price of a circuit board is: $"
  << sPrice << endl;
    return 0;
}
