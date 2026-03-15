// Name: Miguel Llapa
// Course: CSCI 272
// Assignment 2 - strings (part three)
// Date: 2-17-25

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word1, word2;
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;
    
    string temp1 = word1, temp2 = word2;
    for(char &c : temp1) c = tolower(c);
    for(char &c : temp2) c = tolower(c);
    
    if (temp1 == temp2) {
        cout << "Strings are equal (case-intensitive)" << endl;
    } else {
        cout << "Strings are NOT equal (case-intensitive)" << endl;
    }
    // These code function lines 17 - 21 is were reference off through ChatGPT
    // reference from said code.

    return 0;
}