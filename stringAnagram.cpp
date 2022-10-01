#include<iostream>
#include<string>

using namespace std;


string sort(string str){
char temp;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i]<str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            
        }
        
    }
    return str;
}

bool isAnagram(string str1, string str2){
    
    string s1 = sort(str1);
    string s2 = sort(str2);

    if (s1==s2){return true;} 
    return false;
} 

int main(){
 
cout<<isAnagram("huehue","ehuehr")<<endl;
cout<<isAnagram("abcd","abcd")<<endl;
cout<<isAnagram("jawad","Jawad")<<endl;
cout<<isAnagram("furqan","furqan1")<<endl;
cout<<isAnagram("moiz","ziom");

    return 0;
}