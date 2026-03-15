// Name: Miguel Llapa
// Course: CSCI 272
// Assignment 2 - strings (part one)
// Date: 2-17-25

#include <iostream>
#include <string>
using namespace std;

// Part one:
int main()
{
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << fullName << endl;
    int nameSize = fullName.size();
    // The code input in line 18 also work even without the input when running 
    cout << "\na. Full Name: " << fullName << endl;
    cout << "b. Total characters: " << fullName.length() << endl;
    cout << "c. First characters: " << fullName[0] << endl;
    cout << "d. Last characters: " << fullName[fullName.length() - 1] << endl;
    //
    fullName.insert(0, "Mr./Ms.");
    fullName += " jr.";
    
    cout << "\nFull Modified name: " << fullName << endl;
    // These code function line 20 - 28 is were reference through ChatGPT
    // shows working code results and functionaity
    return 0;
}