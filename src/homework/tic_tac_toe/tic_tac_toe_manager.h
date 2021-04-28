//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{

public:
  friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
  void save_game(TicTacToe b);
  void get_winner_total(int& O, int& X, int& t );


private:
std::vector<TicTacToe> games;
  int X_win {0};
  int O_win {0};
  int ties {0};
  void update_winner_count(std::string winner);

};
#endif