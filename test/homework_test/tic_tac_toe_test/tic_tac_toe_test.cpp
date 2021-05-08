#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h" 
 

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*TEST_CASE("tic tac toe test") {
  TicTacToe game;
  game.start_game("X");
  game.mark_board(1);
  REQUIRE(game.game_over() == false);
  game.mark_board(2);
  REQUIRE(game.game_over() == false);
  game.mark_board(3);
  REQUIRE(game.game_over() == false);
  game.mark_board(4);
  REQUIRE(game.game_over() == false);
  game.mark_board(5);
  REQUIRE(game.game_over() == false);
  game.mark_board(6);
  REQUIRE(game.game_over() == false);
  game.mark_board(7);
  REQUIRE(game.game_over() == false);
  game.mark_board(8);
  REQUIRE(game.game_over() == false);
  game.mark_board(9);
  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "C");


  
}
TEST_CASE("1 verify player "){
  std::unique_ptr<TicTacToe> player std::make_unique<TicTacToe3>;
  player->start_game("X");
  REQUIRE(player->get_player() == "X");

}
TEST_CASE("2 verify player "){
  std::unique_ptr<TicTacToe> player std::make_unique<TicTacToe3>;
  player->start_game("O");
  REQUIRE(player->get_player() == "0");

}*/

TEST_CASE("colum 1  tic tac toe test") {
  std::unique_ptr<TicTacToe> ctest1 = std::make_unique<TicTacToe3>();
  //checks x win
  ctest1->start_game("X");
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(1);//x
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(9);//o
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(4);//x
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(8);//o
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(7);//x
  REQUIRE(ctest1->game_over() == true);
  //checks o win
}

TEST_CASE("colum 2 tic tac toe test") {
  std::unique_ptr<TicTacToe> ctest2 = std::make_unique<TicTacToe3>();

  //checks x win
  ctest2->start_game("X");
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(2);//x
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(9);//o
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(5);//x
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(4);//o
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(8);//x
  REQUIRE(ctest2->game_over() == true);
  
}
TEST_CASE("colum 3 tic tac toe test") {
  //checks o win
  std::unique_ptr<TicTacToe> ctest3 = std::make_unique<TicTacToe3>();
  
  ctest3->start_game("X");
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(3);//x
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(5);//o
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(6);//x
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(7);//o
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(9);//x
  REQUIRE(ctest3->game_over() == true);
  
}
TEST_CASE("row 1 tic tac toe test") {
  std::unique_ptr<TicTacToe> rtest1 = std::make_unique<TicTacToe3>();
  //checks x win

  rtest1->start_game("X");
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(1);//x
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(5);//o
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(2);//x
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(7);//o
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(3);//x
  REQUIRE(rtest1->game_over() == true);
  
}
TEST_CASE("row 2 tic tac toe test") {
  //checks x wiw
  std::unique_ptr<TicTacToe> rtest2 = std::make_unique<TicTacToe3>();
  rtest2->start_game("X");
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(4);//x
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(8);//o
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(5);//x
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(7);//o
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(6);//x
  REQUIRE(rtest2->game_over() == true);
}
TEST_CASE("row 3 tic tac toe test") {
  std::unique_ptr<TicTacToe> rtest3 = std::make_unique<TicTacToe3>();
  //checks x win

  rtest3->start_game("X");
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(7);//x
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(5);//o
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(8);//x
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(4);//o
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(9);//x
  REQUIRE(rtest3->game_over() == true);
 
}
TEST_CASE("diagnoal 1 tic tac toe test") {
  std::unique_ptr<TicTacToe> dtest1 = std::make_unique<TicTacToe3>();
  //checks x win
  dtest1->start_game("X");
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(1);//x
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(4);//o
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(5);//x
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(7);//o
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(9);//x
  REQUIRE(dtest1->game_over() == true);

}
TEST_CASE("diagnoal tic tac toe test") {
  std::unique_ptr<TicTacToe> dtest2 = std::make_unique<TicTacToe3>();
  //checks x win
  dtest2->start_game("X");
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(7);//x
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(4);//o
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(5);//x
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(9);//o
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(3);//x
  REQUIRE(dtest2->game_over() == true);
  
}/*
TEST_CASE("manager test  "){
  //x win
  int x, o, t;
  std::unique_ptr<TicTacToe> gameuno = std::make_unique<TicTacToe3>();
  TicTacToeManager manager;
  gameuno->start_game("X");
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(7);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(4);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(5);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(9);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(3);//x
  REQUIRE(gameuno->game_over() == true);
  manager.save_game(gameuno);
  //o win
  gameuno->start_game("X");
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(7);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(4);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(5);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(9);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(3);//o
  REQUIRE(gameuno->game_over() == true);
  manager.save_game(gameuno);
  //tie game
  gameuno->start_game("X");
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(1);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(2);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(3);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(4);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(6);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(5);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(7);//x
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(9);//o
  REQUIRE(gameuno->game_over() == false);
  gameuno->mark_board(8);//x
  REQUIRE(gameuno->game_over() == true);
  manager.save_game(gameuno);
  manager.get_winner_total(o,x,t);
  //verifies it stores the right amount of wins to each variable
  REQUIRE(x == 1);
  REQUIRE(o == 1);
  REQUIRE(t == 1);
}*/

TEST_CASE("4x4 colum 1  tic tac toe test") {
  std::unique_ptr<TicTacToe> ctest1 = std::make_unique<TicTacToe4>();
  //checks x win
  ctest1->start_game("X");
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(1);//x
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(8);//o
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(5);//x
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(3);//o
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(9);//x
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(11);//o
  REQUIRE(ctest1->game_over() == false);
  ctest1->mark_board(13);//x
  REQUIRE(ctest1->game_over() == true);
  //checks o win
}

TEST_CASE("4 x 4 colum 2 tic tac toe test") {
  std::unique_ptr<TicTacToe> ctest2 = std::make_unique<TicTacToe4>();

  //checks x win
  ctest2->start_game("X");
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(2);//x
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(9);//o
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(6);//x
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(5);//o
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(10);//x
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(4);//o
  REQUIRE(ctest2->game_over() == false);
  ctest2->mark_board(14);//x
  REQUIRE(ctest2->game_over() == true);
  
}
TEST_CASE("4 x 4 colum 3 tic tac toe test") {
  //checks o win
  std::unique_ptr<TicTacToe> ctest3 = std::make_unique<TicTacToe4>();
  
  ctest3->start_game("X");
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(3);//x
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(5);//o
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(7);//x
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(6);//o
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(11);//x
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(4);//o
  REQUIRE(ctest3->game_over() == false);
  ctest3->mark_board(15);//x
  REQUIRE(ctest3->game_over() == true);
  
}
TEST_CASE("4 x 4 colum 4 tic tac toe test") {
  //checks o win
  std::unique_ptr<TicTacToe> ctest4 = std::make_unique<TicTacToe4>();
  
  ctest4->start_game("X");
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(4);//x
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(5);//o
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(8);//x
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(6);//o
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(12);//x
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(7);//o
  REQUIRE(ctest4->game_over() == false);
  ctest4->mark_board(16);//x
  REQUIRE(ctest4->game_over() == true);
  
}
TEST_CASE("4 x 4 row 1 tic tac toe test") {
  std::unique_ptr<TicTacToe> rtest1 = std::make_unique<TicTacToe4>();
  //checks x win

  rtest1->start_game("X");
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(1);//x
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(5);//o
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(2);//x
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(7);//o
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(3);//x
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(8);//o
  REQUIRE(rtest1->game_over() == false);
  rtest1->mark_board(4);//x
  REQUIRE(rtest1->game_over() == true);
  
}
TEST_CASE("4 x 4 row 2 tic tac toe test") {
  //checks x wiw
  std::unique_ptr<TicTacToe> rtest2 = std::make_unique<TicTacToe4>();
  rtest2->start_game("X");
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(5);//x
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(10);//o
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(6);//x
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(4);//o
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(7);//x
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(9);//o
  REQUIRE(rtest2->game_over() == false);
  rtest2->mark_board(8);//x
  REQUIRE(rtest2->game_over() == true);
}

TEST_CASE("4 x 4 row 3 tic tac toe test") {
  std::unique_ptr<TicTacToe> rtest3 = std::make_unique<TicTacToe4>();
  //checks x win

  rtest3->start_game("X");
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(9);//x
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(5);//o
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(10);//x
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(4);//o
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(11);//x
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(7);//o
  REQUIRE(rtest3->game_over() == false);
  rtest3->mark_board(12);//x
  REQUIRE(rtest3->game_over() == true);
 
}
TEST_CASE("4 x 4 row 4 tic tac toe test") {
  std::unique_ptr<TicTacToe> rtest4 = std::make_unique<TicTacToe4>();
  //checks x win

  rtest4->start_game("X");
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(13);//x
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(5);//o
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(14);//x
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(4);//o
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(15);//x
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(7);//o
  REQUIRE(rtest4->game_over() == false);
  rtest4->mark_board(16);//x
  REQUIRE(rtest4->game_over() == true);
 
}
TEST_CASE("4 x 4 diagnoal 1 tic tac toe test") {
  std::unique_ptr<TicTacToe> dtest1 = std::make_unique<TicTacToe4>();
  //checks x win
  dtest1->start_game("X");
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(1);//x
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(4);//o
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(6);//x
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(7);//o
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(11);//x
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(8);//o
  REQUIRE(dtest1->game_over() == false);
  dtest1->mark_board(16);//x
  REQUIRE(dtest1->game_over() == true);

}
TEST_CASE("4 x 4 diagnoal 2 tic tac toe test") {
  std::unique_ptr<TicTacToe> dtest2 = std::make_unique<TicTacToe4>();
  //checks x win
  dtest2->start_game("X");
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(4);//x
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(5);//o
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(7);//x
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(11);//o
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(10);//x
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(9);//o
  REQUIRE(dtest2->game_over() == false);
  dtest2->mark_board(13);//x
  REQUIRE(dtest2->game_over() == true);
}