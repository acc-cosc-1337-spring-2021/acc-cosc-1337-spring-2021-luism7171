#include <string>
#include <vector>
#include <iostream>
using std::string; using std::cout; using std::cin; 
using std::vector; 
//creates the tic tac toe class
class TicTacToe
{
public:
  bool game_over();
  void start_game(std::string first_player);
  void mark_board(int position);
  std::string get_player()const{return player;}
  void display_board();
  std::string get_winner()const{return winner;}

private:
  bool check_column_win();
  bool check_row_win();
  bool check_diagonal_win();
  void set_winner();
  void set_next_player();
  bool check_board_full();
  std::string player;
  void clear_board();
  std::vector<string> pegs{9," "};
  std::string winner;


};