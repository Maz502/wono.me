#include <iostream>
using namespace std;

std::string reverse(std::string str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main()
{
    cout << reverse ("huehue");
    return 0;
}