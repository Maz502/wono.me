// Create a function which validates whether a bridge is safe to walk on 
//(i.e. has no gaps in it to fall through).

// Examples
// isSafeBridge("####") ➞ true

// isSafeBridge("## ####") ➞ false

// isSafeBridge("#") ➞ true

#include<iostream>
using namespace std;

bool isSafeBridge(std::string s) {
	for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==' ')
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    cout<<isSafeBridge("## ####")<<endl;
    cout<<isSafeBridge("######");

    return 0;
}