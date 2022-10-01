#include<iostream>
using namespace std;

int countChar(string str){
    int count = 1;
    int i = 0;

    while (i<=str.length())
    {
        if (str[i] == '-')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    cout<<countChar("hue-hue-hue");
    return 0;
}


// Alternative way
//return std::count(word.begin(),word.end(),'-') + 1;