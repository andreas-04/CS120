#include<iostream> 
using namespace std;

int main(){
// variable declarations
    double firstNum;
    double secondNum;
    double result;
    int operation;
    int calculateOn = 1;
    int operationCount = 0;

// this while loop keeps calculator on for multiple operations
    while(calculateOn == true){

/*
this if statement works by checking if its the first operation of the program, if it is... 
it gets an input from user for the first numeber, if it isnt the first operation, it uses the result of the 
last equation as the first number. this is in order to do multiple operations
*/

        if(operationCount == 0){
            cout << "Input your first integer: ";
            cin >> firstNum;
        }
        else firstNum = result;

// variable declerations
        cout << "(1) Addition\n";
        cout << "(2) Subtraction\n";
        cout << "(3) Multiplication\n";
        cout << "(4) Division\n";
        cout << "(5) Sum of all Integers\n";
        cout << "Input your desired operation: ";
        cin >> operation;

        cout << "Input your second integer: ";
        cin >> secondNum;

//switch statement to be able to switch between the different operations depending on what the user choses
        switch (operation)
        {
// Addition case
        case 1:
            result = (firstNum + secondNum);
            cout << result << endl;
            operationCount++;
            break;
// subtraction case
        case 2:
            result =(firstNum - secondNum);
            cout<< result << endl;
            operationCount++;
            break;
// multiplication case
        case 3:
            result =(firstNum * secondNum);
            cout<< result << endl;
            operationCount++;
            break;
// division case
        case 4:
            result =(firstNum / secondNum);
            cout << result << endl;
            operationCount++;
            break;
/* 
this case takes all numbers between first and second num i.e(5,8) = (5, 6, 7, 8)
then it adds all of these numbers into 1 sum
*/
        case 5:
            while(int(firstNum) <= int(secondNum)){
                result += firstNum;
                firstNum++;
            }
            cout << int(result) << "\n";
            operationCount++;
            break;
// by setting this as a default case we make sure we get input from 1-5
        default:
            cout << "please try again\n";
            break;
        }
// ends or continues calculateOn while loop
        cout << "Would you like to make another operation? (1/0): ";
        cin >> calculateOn;
    }
}