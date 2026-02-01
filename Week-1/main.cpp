#include <iostream>
using namespace std;

void increment(int x) {
    x++;
}

void incrementByReference(int & x) {
    x++;
}

int main()
{
    int num = 5;
    increment (num);
    cout << "Value of num after increment: " << num << endl;
    incrementByReference (num);
    cout << "Value of num after increment: " << num << endl;
    
    
    return 0;
}