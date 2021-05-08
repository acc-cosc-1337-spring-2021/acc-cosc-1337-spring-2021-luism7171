#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <string>
#include <vector>
#include <iostream>
#include <memory>
using std::string; using std::cout; using std::cin; 
using std::vector; 

//creates the tic tac toe class
class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);
public:
  TicTacToe(int size) :pegs(size*size," ") {}
  TicTacToe();
  bool game_over();
  void start_game(std::string first_player);
  void mark_board(int position);
  std::string get_player()const{return player;}
  //void display_board();
  std::string get_winner()const{return winner;}
protected:
  std::vector<std::string> pegs;
  virtual bool check_column_win();
  virtual bool check_row_win();
  virtual bool check_diagonal_win();
  std::string winner;

private:
  void set_winner();
  void set_next_player();
  bool check_board_full();
  std::string player;
  void clear_board();
  //std::string winner;


};
#endif