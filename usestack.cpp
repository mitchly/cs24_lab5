// usestack.cpp - for CS 24 lab practice using stacks
// NAME(S), DATE

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    // evaluating "3 5 + 2 / 3 *"
    
    // start with an empty stack

    Stack numbers;

    // first three tokens all numbers to push "3 5":
    numbers.push(3);
    numbers.push(5);

    // fourth token is calculation to do "+":
    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(left + right);

    // fifth token is number to push "2"
    numbers.push(2);

    // sixth token is calculation to do "/":
    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(left / right);

    // seventh token is number to push "3":
    numbers.push(3);

    // eighth token is calculation to do "*":
    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(left * right);

    // done - print result:
    cout << numbers.top() << endl;
    
    return 0;
}
