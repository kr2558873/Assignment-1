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
    float Town=21.5;//In town miles/gallon
    float Hway=26.8;//Highway miles/gallon
    float Tank=20;//Gas tank full
    //Calculate total miles in town and out of town
    float TownDis=Tank*Town;
    float HwayDis=Tank*Hway;
    //Output the result
    cout<<"Distance in Town on a tank of gas   ="<<TownDis<<" miles"<<endl;
    cout<<"Distance on Highway with a tank of gas ="<<HwayDis<<" miles"<<endl;
    //Exit Stage Here!
    return 0;
}
