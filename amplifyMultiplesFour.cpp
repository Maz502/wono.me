// Create a function that takes an integer and returns an array from 1 to the given number, where:

// If the number can be divided evenly by 4, amplify it by 10 (i.e. return 10 times the number).
// If the number cannot be divided evenly by 4, simply return the number.
// Examples
// amplify(4) ➞ [1, 2, 3, 40]

// amplify(3) ➞ [1, 2, 3]

// amplify(25) ➞ [1, 2, 3, 40, 5, 6, 7, 80, 9, 10, 11, 120, 13, 14, 15, 160, 17, 18, 19, 200, 21, 22, 23, 240, 25]

#include<iostream>
#include<string>
#include<vector>
using namespace std;
 

vector<int> amplify(int num){
    vector<int> out;

    for (int i = 1; i <= num; i++){
		out.push_back((i % 4) ? i : 10*i);
    }
    return out;
}

int main(){

    vector<int> output = amplify(25);

    for (int i = 0; i < output.size() ; i++){
        cout<<output[i]<<endl;
    }
    
    return 0;
}