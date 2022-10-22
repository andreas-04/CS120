/*
Andreas Neacsu
Sept 09, 2022
Assignment 1

Etra Work:
    used switch statement instead of a bunch of ifs
*/

#include<iostream> 
using namespace std;

int main(){
// variable declaration
    double firstNum;
    double secondNum;
    double result;
    int operation;
// getting values for the 2 integers and the operation from the user
    cout << "Input your first integer: ";
    cin >> firstNum;

    cout << "Input your second integer: ";
    cin >> secondNum;

    cout << "(1) Addition\n";
    cout << "(2) Subtraction\n";
    cout << "(3) Multiplication\n";
    cout << "(4) Division\n";
    cout << "Input your desired operation: ";
    cin >> operation;

//switch statement to be able to switch between the different operations depending on what the user choses
    switch (operation)
    {
    case 1:
        result = (firstNum + secondNum);
        cout << result << endl;
        break;
    case 2:
        result =(firstNum - secondNum);
        cout<< result << endl;
        break;
    case 3:
        result =(firstNum * secondNum);
        cout<< result << endl;
        break;
    case 4:
    result =(firstNum / secondNum);
        cout<< result << endl;
        break;
    default:
        cout << "please try again";
        break;
    }

}