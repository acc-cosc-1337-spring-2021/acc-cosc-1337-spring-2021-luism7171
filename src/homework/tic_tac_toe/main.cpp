#include "tic_tac_toe.h"


int main() 
{
  //cretaes an instance of tic tac toe
  TicTacToe game;
  string player;
  int pos;
  //gets first player value
  cout<<"First player enter x or O to start";
  cin>>player;
  game.start_game(player);
  char des;
  do{
    //displays the game and allows user to play the game
    game.display_board();
    cout<<"player enter a position \n";
    cin>>pos;
    game.mark_board(pos);
    game.display_board();
    cout<<"next player pic psoition \n";
    cin>>pos;
    game.mark_board(pos);
    game.display_board();
    cout<<"press e or E to mark other position if the game isnt over";
    cin>>des;
    


  }while(des == 'e' || des == 'E');

	return 0;
}