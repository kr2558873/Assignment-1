/*
* File: main.cpp
* Author: Kenley Ren
* Created on January 12, 2015,  2:30PM
* Purpose: Homework Problem 7
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
 float purch = 52;//purchase
 float stax = 0.04 * purch;//state tax
 float ctax = 0.02 * purch;//country tax
 float tottax = stax + ctax;// total tax equals the sum of state tax and country tax
    //Output the result
cout << "The total sales tax on a $" << purch << " purchase is: $"<< tottax <<endl;
    //Exit Stage Here!
    return 0;
}
