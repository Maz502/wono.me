// Create a function that takes a number as an argument and returns "Fizz", "Buzz" or "FizzBuzz".

// If the number is a multiple of 3 the output should be "Fizz".
// If the number given is a multiple of 5, the output should be "Buzz".
// If the number given is a multiple of both 3 and 5, the output should be "FizzBuzz".
// If the number is not a multiple of either 3 or 5, the number should be output on its own as shown in the
// examples below.
// The output should always be a string even if it is not a multiple of 3 or 5.
// Examples
// fizzBuzz(3) ➞ "Fizz"

// fizzBuzz(5) ➞ "Buzz"

// fizzBuzz(15) ➞ "FizzBuzz"

// fizzBuzz(4) ➞ "4"

#include <iostream>
#include <string>
using namespace std;

string fizzBuzz(int num)
{
    string str;
    if (num % 5 == 0 && num % 3 == 0)
    {
        str = "FizzBuzz";
    }
    else if (num % 5 == 0)
    {
        str = "Buzz";
    }

    else if (num % 3 == 0)
    {
        str = "Fizz";
    }
    else
    {
        str = to_string(num);
    }
    return str;
}

int main()
{
    cout << fizzBuzz(3) << endl;
    cout << fizzBuzz(5) << endl;
    cout << fizzBuzz(15) << endl;
    cout << fizzBuzz(4) << endl;

    return 0;
}