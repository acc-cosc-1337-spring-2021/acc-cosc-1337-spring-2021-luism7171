#include <string>
#include <vector>
#include <iostream>
using std::string; using std::cout; using std::cin; 
using std::vector; 
//creates the tic tac toe class
class TicTacToe
{
public:
//returns check board value
  bool game_over(){ return check_board_full();}
  void start_game(std::string first_player);
  void mark_board(int position);
  //returns player value
  std::string get_player()const{return player;}
  void display_board();

private:
  void set_next_player();
  bool check_board_full();
  std::string player;
  void clear_board();
  std::vector<string> pegs{9," "};


};