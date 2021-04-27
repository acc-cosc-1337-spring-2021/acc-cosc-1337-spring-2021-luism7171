#include "tic_tac_toe.h"


int main() 
{
  //cretaes an instance of tic tac toe
  char choice;
  TicTacToe game;
  string player1;
  //asks user to eneter x or o
  cout<<"Player 1 would you like to be X's or O's please input in caps \n";
  cin>>player1;
  int pos;
    do {
      
      //if the input user entered is valid it starts the game and runs it
      if(player1 == "X"||player1 == "O"){
        game.get_player();
        game.start_game(player1);
        //loop that runs while game is not over
        while(game.game_over() == false){
          //asks first player to enter position and marks board with the position
          cout<<"player 1 enter a position \n";
          cin>>pos;
          game.mark_board(pos);
          game.display_board();
          //asks second player to enter position and marks board with the position checks for game over too
          cout<<"player 2 enter a position \n";
          cin>>pos;
          game.mark_board(pos);
          game.display_board();
          game.game_over();
        
        


        }
        //checks if there is a winner and displays it
        if(game.get_winner() == "X" || game.get_winner() == "O"){
          cout<<"The winner of the game is player with " << game.get_winner() << "\n" ;
        }
        //if there is no winner its a tie displays
        else if (game.get_winner() == "c"){
          cout<<"its a tie";
        }
      }
      //this only compiles if the user didnt enter a valid input for x or o
      else{
        cout<<"please enter a valid input of X or O \n ";
        cin>>player1;
        cout<<"enter y to continue to the game ";
      }
      //the user enter y here if he wants to play another game or if the second statement compiled instead and they have to enter another input then y to continue
      cin>>choice;

    }while(choice == 'Y' || choice == 'y' );

	return 0;
}
