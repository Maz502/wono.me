// Create a function that takes a string and returns a string with its letters in alphabetical order.

// Examples
// alphabetSoup("hello") ➞ "ehllo"

// alphabetSoup("edabit") ➞ "abdeit"

// alphabetSoup("hacker") ➞ "acehkr"

// alphabetSoup("geek") ➞ "eegk"

// alphabetSoup("javascript") ➞ "aacijprstv"

#include<iostream>
#include<string>
using namespace std;
 
string alphabetSoup(string str){
    int temp;
    for(char ch: str){
        for (int j = 0; j < str.length()-1; j++){
            if (str[j]>str[j+1]){
                temp = str[j];
  			    str[j] = str[j+1];
  		        str[j+1] = temp;
            }
        }    
        
    }
    return str;
}


int main(){
 cout<<alphabetSoup("huehue");
    return 0;
}