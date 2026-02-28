// Miguel Llapa
// CSCI 272 (1)
// Assignment 2: Functioning Templates
#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
T receiptTotal(T amount, T taxPercent, T discountPercent, T tipPercent){
    T taxAmount = amount * (taxPercent / 100.0);
    T discountAmount = amount * (discountPercent / 100.0);
    T tipAmount = amount * (tipPercent / 100.0);
    
    return amount + taxAmount - discountPercent + tipPercent;
}
int main()
{
    double finalTotal = receiptTotal(100.0, 8.875, 10.0, 15.0);
    cout << "Final Total: " << fixed << setprecision(2) << finalTotal << endl;

    return 0;
}