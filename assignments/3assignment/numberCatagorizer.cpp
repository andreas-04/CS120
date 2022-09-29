/*
Andreas Neacsu
Sept 16, 2022
Assignment 3

Etra Work:
    used 3 functions to categorize the number
*/
#include <iostream>
using namespace std;

// A function to check if 'num' is a decimal
void isDecimalFunc(double num){
    // type cast the variable num, check it against itself to check if it is a decimal
    if(int(num) != num){
        cout << "Your number is a deciaml, ";
    }
    else{
        cout << "Your number isn't a deciaml, ";
    }
}
// A function to check if 'num' is even 
void isEvenFunc(double num){
    //checking the remainder when divided by 2
    if(int(num) % 2 == 0){
       cout << "it's even ";
    }else{
        cout << "it's odd ";
    }
}
// This function checks if its positive or negeative
void positiveNegative(double num){
    if(num < 0){
        cout << "and it's negative." << endl;
    }
    else{
        cout << "and it's positive." << endl;
    }
}

int main(){
    double numba;
    cout << "> Welcome to the Number Classifier Program™ \n";
    cout << "> Enter a number to begin: ";
    cin >> numba;
    //checking for zero
    if(numba == 0){
        cout << "Zero isnt allowed smh....\n";
    }
    else{
        isDecimalFunc(numba);
        isEvenFunc(numba);
        positiveNegative(numba);
    }
    return 0;
}