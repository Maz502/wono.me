// countVowels("Celebration") ➞ 5

// countVowels("Palm") ➞ 1

// countVowels("Prediction") ➞ 4

#include<iostream>
using namespace std;

int countVowels(std::string str) {
    char ch;
    int counter = 0;
    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            counter++;
        }
        
    }
    return counter;
}


int main()
 
{
    cout<<countVowels("Celebration")<<endl;
    cout<<countVowels("Palm")<<endl;
    cout<<countVowels("Prediction")<<endl;
    return 0;
}