// Name: Miguel Llapa
// Course: CSCI 272
// Assignment 2 - strings (part four)
// Date: 2-17-25

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputStr;
    cout << "Enter a number: ";
    cin >> inputStr;
    
    int intVal = stol(inputStr);
    double doubleVal = stol(inputStr);
    
    int intResult = intVal * 2;
    double doubleResult = doubleVal * 2;
    
    cout << "Integer result (x 2): " << intVal << endl;
    cout << "Double result (x 2): " << doubleVal << endl;
    // functions that takes the functionality were reference
    // and provided working results from the reference
    
    return 0;
}