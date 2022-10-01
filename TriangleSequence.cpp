// This Triangular Number Sequence is generated from a pattern of dots that form a triangle. The first 5 numbers
//  of the sequence, or dots, are:

// 1, 3, 6, 10, 15
// This means that the first triangle has just one dot, the second one has three dots, the third one has 6 dots
//  and so on.

// Write a function that returns the number of dots when given its corresponding triangle number of the sequence.

// Examples
// triangle(1) ➞ 1

// triangle(6) ➞ 21

// triangle(215) ➞ 23220

#include <iostream>
using namespace std;

int triangle(int n)
{
    int finalOutput = 0;

    for (int i = 1; i <= n; i++)
    {
        finalOutput = finalOutput + i;
    }
    return finalOutput;
}

int main()
{
    cout << triangle(1) << endl;
    cout << triangle(2) << endl;
    cout << triangle(3) << endl;
    cout << triangle(4) << endl;
    cout << triangle(5) << endl;
    cout << triangle(6) << endl;
    return 0;
}