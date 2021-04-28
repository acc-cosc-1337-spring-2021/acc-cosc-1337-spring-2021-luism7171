#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


int main() 
{
  
  char choice;
  //instance of tictactoe and manager created
  TicTacToeManager manager;
  TicTacToe game;
  string player1;
  int x, o, t;
  //asks user to eneter x or o
  cout<<"Player 1 would you like to be X's or O's please input in caps \n";
  cin>>player1;
    do {
      
      /*if the input user entered is valid it starts the game and runs it */
      if(player1 == "X"||player1 == "O"){
        game.get_player();
        game.start_game(player1);
        //loop that runs while game is not over
        while(game.game_over() == false){
          /*uses tictactoe istream overload statement to ask the user for a position and enters a position*/
          cin>>game;
          /*uses ticctactoe istream overload statement diplays the board after the users have inputed a position*/
          cout<<game;
          game.game_over();
        
        }
        //checks if there is a winner and displays it
        if(game.get_winner() == "X" || game.get_winner() == "O"){
          cout<<"The winner of the game is player with " << game.get_winner() << "\n" ;
          manager.save_game(game);
          manager.get_winner_total(o, x, t);
          cout<<" X wins are "<< x <<"\n";
          cout<<" O wins are "<< o <<"\n";
          cout<<" ties are " << t <<"\n";
          cout<<"would you like to play another game enter y for yes: ";
        }
        //if there is no winner its a tie displays
        else if (game.get_winner() == "c"){
          cout<<"its a tie \n";
          manager.save_game(game);
          //also could use the ostream overload to display the wins and ties
          manager.get_winner_total(o, x, t);
          cout<<" X wins are "<< x <<"\n";
          cout<<" O wins are "<< o <<"\n";
          cout<<" ties are " << t <<"\n";
          cout<<"would you like to play another game enter y for yes: ";
        }
      }
      //this only compiles if the user didnt enter a valid input for x or o
      else{
        cout<<"please enter a valid input of X or O \n ";
        cin>>player1;
        cout<<"enter y to continue to the game: ";
      }
      /*the user enter y here if he wants to play another game or if the second statement compiled instead and they have to enter another input then y to continue */
      cin>>choice;

    }while(choice == 'Y' || choice == 'y' );
    cout<<manager;//uses the manager ostream overload statement to display the winners

	return 0;
}
