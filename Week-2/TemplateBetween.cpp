// Miguel Llapa
// CSCI 272 (1)
// Assignment 2: Functioning Templates

#include <iostream>
using namespace std;

template <typename T>
bool isBetween(T value, T low, T high){
    if (value >= low && value <= high) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    cout << "7 between 1 and 10? " << boolalpha << isBetween(7 ,1 , 10) << endl;
    cout << "12 between 1 and 10? " << boolalpha << isBetween(12, 1, 10) << endl;
    cout << "c between a and f? " << boolalpha << isBetween('c', 'a', 'f') << endl;

    return 0;
}