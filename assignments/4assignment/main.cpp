/*
Andreas Neacsu
Sept 24, 2022
Assignment 4
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
   int gameOn = 1;
   int move;
   while(gameOn == 1){
      //variable delarations
      int num_objects = 23; 
      int current_player = 1; 
      int minMove = 1;
      int maxMove = 5;

      cout << "\n>> Rules:\n";
      cout << ">> Each player gets a turn to remove an object until\n";
      cout << ">> There are no more objects left to remove\n";
      cout << ">> The person who removes the last object wins\n";

      do {
      // these if statemtents make the game commentary work depending on the number of objects

         if(num_objects == 23){
            cout << "\n**** Let the game begin! ****\n";
         }
         else if(num_objects > 10){
            cout << "\n**** The victor of this intense match is still to early to decide! ****\n";
         }
         else if(num_objects <= 10 && num_objects >= 5){
            cout << "\n**** This is getting intense! ****\n";
         }
         else if(num_objects <= 4){
            cout << "\n**** WOW! THIS IS INSANE GAMEPLAY FOLKS!!!!!! ****\n";
         }
      
      //this if statement handles the human players turn, it gets their desired move, checks if its valid and applies it 
      
         if (current_player == 1){
            cout << "\n-> Player 1 enter your next move! (1-5): ";
            cin >> move;

            while (move < minMove || move > maxMove || move > num_objects){
               cout << "\n> Hmmmmm that seems to be an illegal move. \n-> Try entering a new move.. (1-5): ";
               cin >> move;
            }
         }
      /*
      this else statement handles the computers turn, if the amount of objects is less than or equal to 3 the computer will win
      and take the correct amount of items to win, if not the computer will take a random number of objects
      */
         else {
            switch (num_objects){
               case(1):
                  move = 1;
                  break;
               case(2):
                  move = 2;
                  break;
               case(3):
                  move = 3;
                  break;
               default:
                  move =  1 + rand() % 5;
                  break;
            }
            cout << "\n> The University of Idaho Artificial Intelligence™ removed " << move << " objects\n";
         }

      //updates the number of objects and tells the user
         num_objects = num_objects - move;
         cout << "\n> " << num_objects << " objects remaining.\n";

      //this for loop prints out a '@' for every object left, in rows of 4
         for(int i=1; i<=num_objects; i++ ){
            if(i%4 == 0){
               cout << "@\n";
            }
            else{
               cout << "@ " ;
            }
         }
         cout << "\n";

      //changes the current player
         current_player = (current_player + 1) % 2;

      }while (num_objects > 0);

      //end of game, asks user if they want to play again
      cout << "\n> Player " << current_player << " wins, round of applause!!!\n";
      cout << "\n-> Play again? (1/0):";
      cin >> gameOn;
   }
}