/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 12, 2015, 10:50 AM
 * Purpose: Homework Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
const char CVPCT=100;//Percent conversion
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    short cSrv=12467;//Customers Surveyed
    char perED=14;//Energy drink percentage
    char perCD=64;//Citrus drink percentage
    //Calculate customers with two different types of drinks
    short E=cSrv*perED/CVPCT;//Customers with energy drink
    short C=E*perCD/CVPCT;//Customers with citrus drink
    //Output results
    cout<<"Customers surveyed that are Energy Drinkers = "<<E<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = "<<C<<endl;
    //Exit Stage Here!
    return 0;
}