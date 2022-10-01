// Create a function that takes a string and returns a string in which each character is repeated once.

// Examples
// doubleChar("String") ➞ "SSttrriinngg"

// doubleChar("Hello World!") ➞ "HHeelllloo  WWoorrlldd!!"


#include<iostream>
#include<string>
using namespace std;

string doubleChar(string str){
    string newStr = "";
    
    for(char ch : str){
        newStr = newStr+ch;
        newStr = newStr+ch;
    }
    return newStr;
}

int main(){
    cout<<doubleChar("Hello World!");
    return 0;
}