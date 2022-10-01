// Imagine a circle and two squares: a smaller and a bigger one. For the smaller one, the circle is a 
// circumcircle and for the bigger one, an incircle.
// Create a function, that takes an integer (radius of the circle) and returns the difference of the areas
//  of the two squares.

// Examples
// squareAreasDifference(5) ➞ 50

// squareAreasDifference(6) ➞ 72

// squareAreasDifference(7) ➞ 98

#include<iostream>
#include<string>
#include<math.h>
using namespace std;
 

int squareAreasDifference(int radius){
    int diameter = radius*2;
    // area of outer square
    int bigSquare = diameter*diameter;
    // area of inner square
    int smallSquare = (diameter*diameter)/2;

    return bigSquare-smallSquare;
}


int main(){
 cout<<squareAreasDifference(5)<<endl;
 cout<<squareAreasDifference(6)<<endl;
 cout<<squareAreasDifference(7)<<endl;

    return 0;
}