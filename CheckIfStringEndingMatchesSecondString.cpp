// Create a function that takes two strings and returns true if the first string ends with the second string; otherwise return false.

// checkEnding("abc", "bc") ➞ true

// checkEnding("abc", "d") ➞ false

// checkEnding("samurai", "zi") ➞ false

// checkEnding("feminine", "nine") ➞ true

// checkEnding("convention", "tio") ➞ false

#include <iostream>
#include <string>
using namespace std;

bool checkStrings(string str1, string str2)
{
    int lengthStr1 = str1.length() - 1;
    int lengthStr2 = str2.length() - 1;

    for (int i = lengthStr2; i >= 0; i--)
    {
        if (str1.at(lengthStr1) != str2[i])
        {
            return false;
        }
        lengthStr1--;
    }
    return true;
}
int main()
{
    cout << checkStrings("abc", "bc") << endl;
    cout << checkStrings("abc", "d") << endl;
    cout << checkStrings("samurai", "zi") << endl;
    cout << checkStrings("feminine", "nine") << endl;
    cout << checkStrings("convention", "tio") << endl;

    return 0;
}

// // Alternative Solution 1
// bool checkEnding(std::string str1, std::string str2){
//     if (str2.compare(str1.substr(str1.length() - str2.length())) == 0)
//         return true;
//     else
//         return false;
// }