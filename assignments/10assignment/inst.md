
    --Customize the Game. Pick a theme for your version of the board game (racing game, zombie apocalypse game, etc.). 
    Modify the "game.txt" file with appropriate actions and messages for your new game.--

    --Add an introduction. Add an introduction to the game that explains the game and the rules for how to play.--

    --Improve the output. Modify the output in main() and in the print_board() function to make it easier to read the game 
    board. For example, you could add vertical lines |'s between each square.--

    
    
    
    Additional Game Variables. Create a new "score" variable for each of the players. This could be an actual score or 
    another variable such as gold, health, fame, etc. As the game progresses, special squares should cause each players' 
    "score" variable to increase and decrease. Change the victory conditions to match the new variable. For example, the 
    game might end when the first player reaches the goal, but the winner is the player with the most gold (and maybe the 
    first player to reach the goal gets some bonus gold making it more likely that the player will win). Alternatively the 
    game might end when the first player's score reaches zero (for example, if the "score" variable is health). Make sure 
    that the introduction explains this clearly.

     

    To make this change to the program several related changes will have to be made in the code and in the game file.
        The square class will need to be expanded with one additional variable that keeps track of how much a player's 
        "score" changes when they land on that square.

        The action() function will need to be modified so that it correctly changes the player's "score". Or a new function 
        in the square class will need to be created to change a player's "score".

        Each line in the game.txt file will need to be modified to include an additional value that determines how much a 
        player's score changes by.

        The read_board() and set_square() functions will need to be modified to read the additional value out of the 
        game.txt file and correctly store it in the game objects.

        The victory conditions will need to be modified to check the players' scores or possibly to have a player lose 
        if the their score (e.g. health) reaches zero.
