#include "tic_tac_toe.h"
//sets first player letting them choose x or o
void TicTacToe::start_game(std::string first_player){
  if(first_player == "X" || first_player == "O")
    player = first_player;
    clear_board();
}
//marks the boar with positon minus one so user dosent see how vector starts with 0
void TicTacToe::mark_board(int position){
  pegs[position - 1] = player;
  set_next_player();
}
//iterates the vector to make it look like a board
void TicTacToe::display_board(){
  for (int i = 0; i < 9; i += 3) {
    cout << "  " << pegs[i] << "  |  " << pegs[i + 1] << "  |  "
     << pegs[i + 2] << "  " << "\n";
    if (i < 6) {
      cout << "-----|-----|-----" << "\n";
      }
    }
    cout << "\n";
}
//sets the other player opossite of first player
void TicTacToe::set_next_player(){
  if(player == "X"){
    player = "0";
  }
  else {
    player = "X";
  }
}
//checks if board is fukk
bool TicTacToe::check_board_full(){
  for (int i = 1; i < 9 ; i++ ){
    if(pegs[i] == " "){
      return false;
    }
    
    }
    return true;

  }
  
  

//sets "" to every space of vector to clear board
void TicTacToe::clear_board(){
  for (int i = 0; i < 9; i++){
    pegs[i] = " ";
  }

}