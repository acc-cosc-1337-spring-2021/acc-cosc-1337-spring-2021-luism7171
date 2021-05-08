//cppve
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
//adss games sends the winner of the game trough the updatewinner functio
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> & b_ptr){
  update_winner_count(b_ptr->get_winner());

  games.push_back(std::move(b_ptr));
}

//every there is a winner it adds 1 to its veriable
void TicTacToeManager::update_winner_count(std::string winner){
  
  if(winner == "X"){
    X_win ++;
  }
  else if(winner == "O"){
    O_win ++;
  }
  else{
    ties ++;
  }
  
}
//sets amount of wins of each to o x or t 
void TicTacToeManager::get_winner_total(int& O, int& X, int& t ){
  O = O_win;
  X = X_win;
  t = ties;



}
//cout operator overload for manager displays the winner 
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager){
  //iterates the games vector
  //for(int i = 0; i < manager.games.size(); i++){
    //out<<manager.games[i]<<"\n";
  //}
  //if its only one win displays singular for x win
  if (manager.X_win == 1){
    out<<"X won " << manager.X_win << " time \n";
    }
    //if its more than one win displays plural for x win
  else {
    out<<"X won " << manager.X_win << " times \n";
    }
    //if its only one win displays singular for o win
  if(manager.O_win == 1)  {
    out<<"O won " << manager.O_win << " time \n";
    }
    //if its more than one win displays plural for o win
  else{
    out<<"O won " << manager.O_win << " times \n";
  }
//if its only one tie displays singular for ties
  if (manager.ties == 1){
    out<<"there was " << manager.ties << " tie \n";
  }
  //if its more than one tie displays plural for ties
  else{
    out<<"there was " << manager.ties << " ties \n";
  }
  return out;
}