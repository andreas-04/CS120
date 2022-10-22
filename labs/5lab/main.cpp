/* Andreas Neacsu
oct 2 2022
lab #5
*/

#include <iostream>
using namespace std;
#include <math.h>

//function defenitions
void print_menu();
double get_value();
double addNums(double, double);
double divide(double,double);
void printResult(double, char, double, double );
char giveOper(int);
double subtract(double, double);
double cylArea(double, double);
double cylVol(double, double);
double coneArea(double, double);

int main(){
       double operand1, operand2, answer, height, radius, slantHeight;
       char opera;
       int choice=1, valid_choice;
       while(choice != 0){
       //this code block executes the main logic of the program using a switch statement and series of functions 
       //depending on the operation the user wants to preform, these functions are declared at the end of the program
              print_menu();
              cin >> choice;
              valid_choice = 1;
              switch(choice){
                     case 0 :
                            break;
                     case 1:
                            cout << "     --> Enter your first value";
                            operand1 = get_value();
                            cout << "     --> Enter your second value";
                            operand2 = get_value();
                            answer = addNums(operand1, operand2);
                            opera = giveOper(choice);
                            cout << "> " << operand1 << opera << operand2 << '=' << answer << "\n";
                            break;
                     case 2:
                            cout << "     --> Enter your first value";
                            operand1 = get_value();
                            cout << "     --> Enter your second value";
                            operand2 = get_value();
                            answer = subtract(operand1, operand2);
                            opera = giveOper(choice);
                            cout << "> " << operand1 << opera << operand2 << '=' << answer << "\n";
                            break;
                     case 3:
                            cout << "     --> Enter your first value";
                            operand1 = get_value();
                            cout << "     --> Enter your second value";
                            operand2 = get_value();
                            answer = divide(operand1, operand2);
                            opera = giveOper(choice);
                            cout << "> " << operand1 << opera << operand2 << '=' << answer << "\n";
                            break;
                     case 4:
                            cout << "     --> Enter the height";
                            height = get_value();
                            cout << "     --> Enter the radius";
                            radius = get_value();
                            answer = cylArea(height, radius);
                            cout << "> The area of that cylinder is, " << answer << "\n";
                            break;
                     case 5:
                            cout << "     --> Enter the height";
                            height = get_value();
                            cout << "     --> Enter the radius";
                            radius = get_value();
                            answer = cylVol(height, radius);
                            cout << "> The volume of that cylinder is, " << answer << "\n";
                            break;
                     case 6:
                            cout << "     --> Enter the slant height";
                            slantHeight = get_value();
                            cout << "     --> Enter the radius";
                            radius = get_value();
                            answer = coneArea(height, radius);
                            cout << "> The area of that cone is, " << answer << "\n";
                            break;
                     default:
                            valid_choice = 0;
                            cout << "Invalid Choice." << endl;
                            break;
              }
       }
       return 0;
}
// this function adds 2 numbers
double addNums(double num1, double num2){
       double result = num1 + num2;
       return result;
}
// this function subtracts 2 numbers
double subtract(double num1, double num2){
       double result = num1 - num2;
       return result;
}
// this function divides 2 numbers
double divide(double dividend, double divisor){
       if(divisor == 0){
              return 0;
       }
       else
       return (dividend/divisor);
}
// this function changes the number the user enters into the terminal into a char that can be printed out onto the screen
char giveOper(int choice){
       if(choice == 1){
              return '+';
       }
       else if(choice == 2){
              return '/';
       }
       else if (choice ==3){
              return '-';
       }
       else{
              return 0;
       }
}
// this function gives the area of a cylinder 
double cylArea(double height, double radius){
       //2πr2+2πrh
       double result =  (2 * M_PI * radius * 2) + (2 * M_PI * radius * height);
       return result;
}
// this function gives the volume of a cylinder
double cylVol(double height, double radius){
       double result = (M_PI * radius * 2) * height;
       return result;
}
// this function gives the area of a cone
double coneArea(double slantHeight, double radius){
       double result = (M_PI * radius * slantHeight);
       return result;
}
// function to grab a value for the user
double get_value(){
       double temp_value;
       cout << ": ";
       cin >> temp_value;
       return temp_value;
}
//prints out menu
void print_menu(){
       cout << endl;
       cout << ">> Add (1)" << "\n";
       cout << ">> Subtract (2)" << "\n";
       cout << ">> Divide (3)" << "\n";
       cout << ">> Calculate the surface area of a right circular cylinder (4)" << "\n";
       cout << ">> Calculate the volume of a right circular cylinder (5)" << "\n";
       cout << ">> Calculate the surface area of a right circular cone (6)" << "\n";
       cout << ">> Exit (0)" << "\n";
       cout << "    --> Enter your choice: ";
}