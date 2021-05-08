//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include <memory>

class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
  void save_game(std::unique_ptr<TicTacToe >& b_ptr);
  void get_winner_total(int& O, int& X, int& t );


private:
  std::vector<std::unique_ptr<TicTacToe>> games;
  int X_win {0};
  int O_win {0};
  int ties {0};
  void update_winner_count(std::string winner);

};
#endif