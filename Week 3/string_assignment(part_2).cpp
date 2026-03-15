// Name: Miguel Llapa
// Course: CSCI 272
// Assignment 2 - strings (part two)
// Date: 2-17-25

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    string word;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Enter a word: ";
    cin >> word;
    
    size_t found = sentence.find(word);
    if (found != string::npos) {
        cout << "Starting index: " << found << endl;
    } else {
        cout  << "Word not found" << endl;
    }
    // These code function lines 19 to 20 is were reference through ChatGPT
    // shows the code working with the correct function and statements
    // for this problem from the reference

    return 0;
}