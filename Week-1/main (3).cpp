#include <iostream>
using namespace std;

double divide() {
    double num1, num2;
    cout << "Enter the first number: "; cin >> num1;
    cout << "Enter the second number: "; cin >> num2;
    if (num2 != 0)
        return num1 / num2;
    else {
        cout << "Error: Cannot divide by zero." << endl;
        return 0.0;
    }    
}
int main () {
    double quotient1 = divide(); 
    double quotient2 = divide();
    cout << "Quotient: " << quotient1 << "; " << quotient2 << endl;
    return 0;
}