#include <iostream>
using namespace std;
double divide(double a, double b) {
    double quotient1 = 0.0;
    if (b != 0)
quotient1 = a / b;
    else {
        cout << "Error: Cannot divide by zero." << endl;
    }
        return quotient1;
}
int main() {
    double num1 = 5, num2 = 7;
    double quotient1 = divide(num1, num2); 
    double quotient2 = divide(num2, num1); 

    cout << "Quotient: " << quotient1 << "; "<< quotient2 << endl;
    return 0;
}
