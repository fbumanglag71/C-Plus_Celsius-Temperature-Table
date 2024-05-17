/*Author: Francisco Bumanglag
Project: Celsius Temperature Table
Assignment: Module 9 Project 7
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Date: April 16, 2024*/



#include <iostream>
#include <iomanip> //fixed and setprecision

using namespace std;

//function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    //display table header
    cout << "Fahrenheit\tCelsius" << endl;
    cout << "----------------------" << endl;

    //for loop for Fahrenheit temperatures 0 through 20
    for (int f = 0; f <= 20; f++) {
        double c = celsius(f); //convert to Fahrenheit to Celsius
        cout << f << "\t\t" << fixed << setprecision(2) << c << endl; //round Celsius to 2 decimal places
    }

    return 0;
}
