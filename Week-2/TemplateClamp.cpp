// Miguel Llapa
// CSCI 272 (1)
// Assignment 2: Functioning Templates

#include <iostream>
using namespace std;

template <typename T>
T clampValue(T value, T low, T high){
    if (value < low){
        return low;
        
    } else if (value > high){
        return high;
        
    } else {
        return value;
    }
}

int main()
{
    int intValue = 120;
    cout << "Clamp int: " << clampValue(intValue, 0, 100) << endl;
    double doubleValue = -3.5;
    cout << "Clamp double: " << clampValue(doubleValue, 0.0, 10.0) << endl;
    char charValue = 'z';
    cout << "Clamp char: " << clampValue(charValue, 'a', 'f') << endl;

    return 0;
}