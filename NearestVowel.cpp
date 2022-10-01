// nearestVowel("b") ➞ "a"

// nearestVowel("s") ➞ "u"

// nearestVowel("c") ➞ "a"

// nearestVowel("i") ➞ "i"

#include<iostream>
#include<string>
using namespace std;

char nearestVowel(char ch){
    if (ch>='a'&&ch<='c')
    {
        return 'a';
    }
    return 'c';
}

int main(){
 
 cout<<nearestVowel('a');
    return 0;
}