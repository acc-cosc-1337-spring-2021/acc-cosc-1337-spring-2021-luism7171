#include "tic_tac_toe.h"
// checks if any type of win is true and returns true also returns true if the board is full
bool TicTacToe::game_over(){
  if(check_diagonal_win() == true){
    return true;
  }
  else if (check_row_win() == true ){
    return true;
  }
  else if (check_column_win() == true){
    return true;
  }
  else if (check_board_full() == true){
    winner = "c";
    return true;
  }
  else {
    return false;}
  

}
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
    player = "O";
  }
  else {
    player = "X";
  }
}
//checks if board is full
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
//checks for any type of colum win and sets the winner
bool TicTacToe::check_column_win(){
  if (pegs[0] == "X" && pegs[3]== "X" && pegs[6] == "X"){
    winner = "X";
    return true;
  }
  else if (pegs[1] == "X" && pegs[4]== "X" && pegs[7] == "X" ){
    winner = "X";
    return true;
  }
  else if (pegs[2] == "X" && pegs[5]== "X" && pegs[8] == "X"){
    winner = "X";
    return true;
  }
  else if (pegs[0] == "O" && pegs[3]== "O" && pegs[6] == "O"){
    winner = "O";
    return true;
  }
  else if (pegs[2] == "O" && pegs[5]== "O" && pegs[8] == "O"){
    winner = "O";
    return true;
  }
  else if (pegs[1] == "O" && pegs[4]== "O" && pegs[7] == "O"){
    winner = "O";
    return true;
  }
  else return false;
}
//checks for a row win and sets the winner 
bool TicTacToe::check_row_win(){
  if (pegs[0] == "O" && pegs[1]== "O" && pegs[2] == "O"){
    winner = "O";
    return true;
  }
  else if (pegs[3] == "O" && pegs[4]== "O" && pegs[5] == "O"){
    winner = "O";
    return true;
  }
  else if (pegs[6] == "O" && pegs[7]== "O" && pegs[8] == "O"){
    winner = "O";
    return true;
  }
  else if (pegs[0] == "X" && pegs[1]== "X" && pegs[2] == "X"){
    winner = "X";
    return true;
  }
  else if (pegs[3] == "X" && pegs[4]== "X" && pegs[5] == "X"){
    winner = "X";
    return true;
  }
  else if (pegs[6] == "X" && pegs[7]== "X" && pegs[8] == "X"){
    winner ="X";
    return true;
  }
  else return false;

}
//checks for any type of diagonal win and sets the winner
bool TicTacToe::check_diagonal_win(){
  if (pegs[0] == "X" && pegs[4]== "X" && pegs[8] == "X"){
    winner = "X";
    return true;
  }
  else if (pegs[6] == "X" && pegs[4]== "X" && pegs[2] == "X"){
    winner = "X";
    return true;
  }
  else if (pegs[0] == "O" && pegs[4]== "O" && pegs[8] == "O"){
    winner = "O";
    return true;
  }
  else if (pegs[6] == "O" && pegs[4]== "O" && pegs[2] == "O"){
    winner = "O";
    return true;
    
  }
  else return false;

}
// if i left this function every time it would run no matter who was the winner the winner output was alwyas O
/*void TicTacToe::set_winner(){
  if (player == "X"){
     winner = "O";
  }
  else {
    winner = "X";
  }
}*/
