/* 
Andreas Neacsu
Sept 09, 2022
Assignment 1
	The fortune Teller -
    * a simple program introducing some
    * fundemental programing concepts

	extra work:
		added 2 new inputs from the user, birthMonth and favoriteColor
		for the favoriteColor var, i made a loop to make sure the right input is used (numbers 1-6)
*/


#include<iostream>
using namespace std;

int main()
{
	// -------------- Variable Declarations ------------------
	int favoriteNum;  // create a variable to store the favorite number
	int dislikedNum;  // create a variable to store the disliked number
	int luckyNum;     // create a variable to store the lucky number
	int birthMonth;   // creates a birth month variable
	int favoriteColor; // creates a var for the users favorite color
	bool colorSelectVar = true; // creates a boolean variable for the color select while loop

	cout << "> Enter your favorite number (no decimals): ";  // output
	cin >> favoriteNum;  // user input

	cout << "> Enter a number you don't like (no decimals): ";  // output
	cin >> dislikedNum;  // user input

	cout << "> Enter your birth month: ";  // output
	cin >> birthMonth;  // user input

// while loop that makes sure the user inputs a number between 1-6, loop will continue until there is a correct input
	while(colorSelectVar == true)
		{
		//clears the input buffer in case of char inputs
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "> Choose the number corresponding to your favorite color!" << endl;
		cout << "\t(1)Red\n";
		cout << "\t(2)Blue\n";
		cout << "\t(3)Yellow\n";
		cout << "\t(4)Green\n";
		cout << "\t(5)Orange\n";
		cout << "\t(6)Purple\n";
		cin >> favoriteColor;

/*		main logic for this loop, if the user enters a num between 1-6
		the loop will terminate and the program will continue, if not the user will be
		prompted to try again  */

		if (favoriteColor > 0 && favoriteColor < 7){
			colorSelectVar = false;
		}
		else {
			cout << "hmmm, try again..\n";
		}
	}

	luckyNum = (favoriteNum * dislikedNum) + (birthMonth * favoriteColor); //this generates the lucky number

	cout << endl << "> Your secret, lucky number is: " << luckyNum << endl;

	if(luckyNum < 0){  // conditional, values less than 0
		cout << "> Try to be less negative.\n";
	}

 	if(luckyNum >= 0 && luckyNum < 21){ // 0 to 21 inclusive
		cout << "> hink bigger!\n";
	}

	if(luckyNum >= 21 && luckyNum < 36){ // 21 to 35 inclusive
		cout << "> Today you should embrace technology.\n";
	}

	if(luckyNum == 36){ // exactly 36
		cout << "> Today is your lucky day!\n";
	}

	if(luckyNum > 36){ // any num greater then 36
		cout << "> Too lucky today, try to be more conservative next time \n";
	}

	// ---------- Code to help the program exit "gracefully" -----
	cin.ignore();
 	cout << ">> Press enter to quit.\n";
	cin.ignore();
	return 0;
}