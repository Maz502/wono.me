// Given a total due and an array representing the amount of change in your pocket, 
//determine whether or not
//  you are able to pay for the item. Change will always be represented in the following order: 
//  quarters, dimes, nickels, pennies.

// To illustrate: changeEnough([25, 20, 5, 0], 4.25) should yield true, since having 
// 25 quarters, 20 dimes, 5 nickels and 0 pennies gives you 6.25 + 2 + .25 + 0 = 8.50.



#include<iostream>
#include<string>
#include <vector>
using namespace std;

bool changeEnough(std::vector<int> change, float amountDue) {

    float quarters = change[0];
    float dimes = change[1];
    float nickels = change[2];
    float pennies = change[3];

    float dollars = (quarters/4)+(dimes/10)+(nickels/20)+(pennies/100);

    cout<<"Dollars:"<<dollars<<endl;
    
    if (dollars>=amountDue){
        return true;
    }
    return false;
}

int main(){
// changeEnough([2, 100, 0, 0], 14.11) ➞ false
    cout<<changeEnough({2, 100, 0, 0}, 14.11)<<endl;
// changeEnough([0, 0, 20, 5], 0.75) ➞ true
    cout<<changeEnough({0, 0, 20, 5}, 0.75)<<endl;
// changeEnough([30, 40, 20, 5], 12.55) ➞ true
    cout<<changeEnough({30, 40, 20, 5}, 12.55)<<endl;
// changeEnough([10, 0, 0, 50], 3.85) ➞ false
    cout<<changeEnough({10, 0, 0, 50}, 3.85)<<endl;
// changeEnough([1, 0, 5, 219], 19.99) ➞ false
    cout<<changeEnough({1, 0, 5, 219}, 19.99)<<endl;


    return 0;
}