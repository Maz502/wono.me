// Create a function that takes an array of numbers between 1 and 10 (excluding one number) and returns
//  the missing number.

// Examples
// missingNum([1, 2, 3, 4, 6, 7, 8, 9, 10]) ➞ 5

// missingNum([7, 2, 3, 6, 5, 9, 1, 4, 8]) ➞ 10

// missingNum([10, 5, 1, 2, 4, 6, 8, 3, 9]) ➞ 7

#include<iostream>
#include<string>
using namespace std;
 
int missingNumber(int arr[9]){
    int sum = 0;
    int arrSum = 0;
    
    for (int i = 1; i <= 10; i++){
        sum = sum+i;
    }

    for (int i = 0; i < 9; i++){
        arrSum+= arr[i];
    }
    
    return sum-arrSum;
}

int main(){
    int arr[9] = {10, 5, 1, 2, 4, 6, 8, 3, 9};
    // int arr[9] = {1,2,3,4,5,6,8,9,10};

    cout<<missingNumber(arr);


    return 0;
}