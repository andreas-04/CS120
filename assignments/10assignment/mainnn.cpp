
 #include<iostream>
 #include<string>
 #include<fstream>
 #include<ctime>
 #include <iomanip>
 #include<cstdlib>
 using namespace std;
                            // Declaration of the square class
class square{
  private:
    int move;
    string message;
    char symbol;
    double GPA;
  public:
    square();
    void print();
    int action();
    void set(int, double, char,string);
    double getGPA();
};
// Function Prototypes
void print_board(square[], int, int);
void read_board(square[]);
void check_position(int &);
                           // Global variables
const int board_length = 20;
  double player1_GPA = 4.0, player2_GPA = 4.0;

int main(){
    cout << "Your goal is to graduate with a better GPA before Player 2!\nTry and avoid all obstacles! Gooooood luck\n \n";
    cout << "Each player starts with a 4.0 GPA. Lose GPA by landing on punishment cards, '%'. Win extra GPA by lanidng on \"Hall Pass\" cards '*'\n\n";
    cout << "> '%' These are Report Cards, avoid them at all costs, they send you backwards and lower your GPA...\n\n";
    cout << "> '*' These are Hall Passes, they help you progress in the game!\n\n";
  int current_player = 1, roll;
  int player1_position = 0, player2_position = 0;
  square the_board[board_length];  // declare an array of squares
  srand(time(NULL));
  read_board(the_board);
  print_board(the_board,player1_position,1);
  print_board(the_board,player2_position,2);
  do{
      cout<<"\n\n\nPlayer "<<current_player<<" type enter to roll.\n";
      cin.ignore();
      roll = 1 + (rand() % 5);
      cout << "Player "<<current_player<<" rolled a "<<roll<<".\n";
      if(current_player == 1){
         player1_position += roll;
         check_position(player1_position);
         player1_position += the_board[player1_position].action();
         player1_GPA += the_board[player1_position].getGPA();
         cout << "Player 1's GPA is: "<< player1_GPA << "\n";
         check_position(player1_position);
      }
     else{
        player2_position += roll;
        check_position(player2_position);
        player2_position += the_board[player2_position].action();
        player2_GPA += the_board[player2_position].getGPA();
        cout << "Player 2's GPA is: " << player2_GPA << "\n";
        check_position(player2_position);
     }
     print_board(the_board,player1_position,1);
     print_board(the_board,player2_position,2);
     current_player = (current_player % 2) + 1;
  }while((player1_position<board_length-1) && (player2_position<board_length-1));
  current_player = (current_player % 2) + 1;
  cout << "\nPlayer " << current_player << " Wins!!!\n";
  cin.ignore();
  return 0;
}
void read_board(square b[]){
     ifstream infile;
     infile.open("game.txt");
     int square_number, square_move;
     double GPA;
     string square_message;
     char square_symbol;
     while(!infile.eof()){
         infile >> square_number >> GPA >> square_move >> square_symbol;
         getline(infile,square_message);
         if(square_number < board_length)
               b[square_number].set(square_move, GPA, square_symbol,square_message);
     }
}
void print_board(square b[], int player_position, int player_number){
     for(int i = 0; i < board_length; i++){
         if(i != player_position){
             b[i].print();
             cout << "|";
        }else{
             cout << player_number;
             cout << "|";
        }
    }
    cout << "GRADUATION\n";
    for(int i = 0; i < board_length; i++)
         cout << "-";
    cout << "\n";
}
void check_position(int &p){
    if(p < 0)
         p = 0;
    if(p >= board_length)
         p = board_length-1;
}
                           // Functions of the class square
square::square(){
     symbol = ' ';
     move = 0;
     message = "";
     GPA = 0;
}
int square::action(){
     cout << message << endl;
     return move;
}
double square::getGPA(){
    return GPA;
}
void square::print(){
     cout << symbol;
}
void square::set(int m, double g, char s, string a_message){
     move = m;
     symbol = s;
     GPA = g;
     message = a_message;
}