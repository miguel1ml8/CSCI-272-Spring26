/*
Name: Miguel Llapa
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 03/3/2026
*/
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand{"Volkswagen"};
    string model = "Polo";
    int year{2012};
    public:
        Car() {
        }
        Car(string b, string m, int y){
            brand = b;
            model = m;
            year = y;
        }
        Car(const Car &other){
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        void startEngine(){
            cout << "start engine" << endl;
            cout << brand << " " << model << endl;
        }
};

/*
Reflection: 
1. What I understood: 
I understand how Copy constructor can create an object in C++. How Copy
Constructor works for objects in C++ in coding.
2. Difficulties: 
The difficulties I encountered is the syntrax errors in C++ and how to solve
the problems during the difficulties.
3. Research: 
The research I search is to learn about how copy constructor works and
how the example proves it in order to understand
4. AI Usage: 
I used ChatGPT to only help understand the concept of copy constructor.
5. What I learned: 
I learned what class and objects work in C++, how they operate in a line of code.
And also how they create an object by using copy constructor. Class also
creates a object for giving the variable.
*/