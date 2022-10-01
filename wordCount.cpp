// countWords("Just an example here move along") ➞ 6

// countWords("This is a test") ➞ 4

// countWords("What an easy task, right") ➞ 5

#include<iostream>
using namespace std;

int countWords(std::string str) {
    int i = 0;
    int count = 1;
    while (i<str.length())
    {
        if (str[i]==' ')
        {
            count+=1;
        }
        i++;
    }
    return count;
}

int main()
 
{
    cout<<countWords("What an easy task, right");
    return 0;
}