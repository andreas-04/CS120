/*
Andreas Neacsu
Sept 19, 2022
Lab Project #4

*/
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    //keeps track of the amount of turns the player has used
    int counter = 0;
    //determines whether to continue the game or not
    int gameOn = 1;
    //stores player guess as int
    int playerGuess;
    //setting the seed for the rand() function
    srand(time(0));
    //generates a random number
    int randomNum = (1 + rand() % 100);
    //while loop keeps running until player guesses the right number
    while(gameOn == 1){
        //this if statement prints a different prompt for entering your guess based on your turn number
        if(counter < 1){
        cout << "> A random number has been generated \n> Can you guess it? Lets find out! \n> Enter your guess here:  ";
        }else{
            cout << "> Enter your next guess here:  ";
        }
        cin >> playerGuess;
        //main logic for the game, tells user if their num is too high, low or correctly guessed
        if(playerGuess == randomNum){
            cout << "> Correct! Nice job!\n";
            cout << "> It took you " << counter << " trys!\n";
            gameOn -=1;
        }
        if(playerGuess > randomNum){
            cout << "> Too High!\n";
            counter++;
        }
        if(playerGuess < randomNum){
            cout << "> Too Low!\n";
            counter++;
        }
    }
}