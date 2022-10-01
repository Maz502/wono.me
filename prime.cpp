#include<iostream>
#include<string>
using namespace std;


string number(int n){
    if((n%2!=0)&&(n%3!=0))
        return "PRIME";
    else if (n%2==0)
        return "EVEN";
    else
        return "ODD";
}

int main(){
    cout<<number(20)<<endl;
    cout<<number(15)<<endl;
    cout<<number(7)<<endl;
    cout<<number(11)<<endl;
    cout<<number(13)<<endl;

    return 0;
}