// Create a function that returns the string "Burp" with the amount of "r's" determined by the input 
//parameters of the function.

#include<iostream>
using namespace std;

std::string longBurp(int num) {
    string r;
    for (int i = 0; i < num; i++)
    {
        r+="r";
    }
    return "Bu"+r+"p";
}

int main()
{
    cout<<longBurp(3)<<endl;
    cout<<longBurp(5)<<endl;
    cout<<longBurp(7);
    return 0;
}