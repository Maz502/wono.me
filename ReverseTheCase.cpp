// reverseCase("Happy Birthday") ➞ "hAPPY bIRTHDAY"

// reverseCase("MANY THANKS") ➞ "many thanks"

// // reverseCase("sPoNtAnEoUs") ➞ "SpOnTaNeOuS"

#include <iostream>
#include <string>
#include <cctype> //for using toupper annd tolower func

using namespace std;

string reverseCase(string str)
{

    string outputString = "";

    for (char ch : str)
    {
        // ascii values
        if (ch >= 97 && ch <= 122)
            outputString += toupper(ch);
        else
            outputString += tolower(ch);
    }
    return outputString;
}

int main()
{
    cout << reverseCase("HUEhue");
    return 0;
}

