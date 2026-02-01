#include <iostream>
using namespace std;

    int add (int a, int b) {
        return a + b;
    }
    int add (int a, int b, int c) {
        return a + b + c;
    }
    int main() {
        int sum1 = add (5,10);
        int sum2 = add (2,4,6);
        cout << "Sum1: " << sum1 << endl;
        cout << "Sum2: " << sum2 << endl;

    return 0;
}