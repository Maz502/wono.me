// https://edabit.com/challenge/Re463NdenkQcReXhK
#include <iostream>
#include <string>
using namespace std;

int collatzConjecture(int n)
{
    int output = 0;
    if (n % 2 == 0)
        output = n / 2;
    else
        output = n * 3 + 1;

    return output;
}

int main()
{
    cout << collatzConjecture(10) << endl;
    cout << collatzConjecture(5) << endl;
    cout << collatzConjecture(16) << endl;
    cout << collatzConjecture(8) << endl;
    cout << collatzConjecture(4) << endl;
    cout << collatzConjecture(2) << endl;

    return 0;
}