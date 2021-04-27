#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("tic tac toe test") {
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
  TicTacToe player;
  player.start_game("X");
  REQUIRE(player.get_player() == "X");

}
TEST_CASE("2 verify player "){
  TicTacToe player;
  player.start_game("O");
  REQUIRE(player.get_player() == "O");

}
TEST_CASE("colum 1  tic tac toe test") {
  TicTacToe ctest1;
  ctest1.start_game("X");
  REQUIRE(ctest1.game_over() == false);
  ctest1.mark_board(1);//x
  REQUIRE(ctest1.game_over() == false);
  ctest1.mark_board(9);//o
  REQUIRE(ctest1.game_over() == false);
  ctest1.mark_board(4);//x
  REQUIRE(ctest1.game_over() == false);
  ctest1.mark_board(8);//o
  REQUIRE(ctest1.game_over() == false);
  ctest1.mark_board(7);//x
  REQUIRE(ctest1.game_over() == true);
}
TEST_CASE("colum 2 tic tac toe test") {
  TicTacToe ctest2;
  ctest2.start_game("X");
  REQUIRE(ctest2.game_over() == false);
  ctest2.mark_board(2);//x
  REQUIRE(ctest2.game_over() == false);
  ctest2.mark_board(9);//o
  REQUIRE(ctest2.game_over() == false);
  ctest2.mark_board(5);//x
  REQUIRE(ctest2.game_over() == false);
  ctest2.mark_board(4);//o
  REQUIRE(ctest2.game_over() == false);
  ctest2.mark_board(8);//x
  REQUIRE(ctest2.game_over() == true);
}
TEST_CASE("colum 3 tic tac toe test") {
  TicTacToe ctest3;
  ctest3.start_game("X");
  REQUIRE(ctest3.game_over() == false);
  ctest3.mark_board(3);//x
  REQUIRE(ctest3.game_over() == false);
  ctest3.mark_board(5);//o
  REQUIRE(ctest3.game_over() == false);
  ctest3.mark_board(6);//x
  REQUIRE(ctest3.game_over() == false);
  ctest3.mark_board(7);//o
  REQUIRE(ctest3.game_over() == false);
  ctest3.mark_board(9);//x
  REQUIRE(ctest3.game_over() == true);
}
TEST_CASE("row 1 tic tac toe test") {
  TicTacToe rtest1;
  rtest1.start_game("X");
  REQUIRE(rtest1.game_over() == false);
  rtest1.mark_board(1);//x
  REQUIRE(rtest1.game_over() == false);
  rtest1.mark_board(5);//o
  REQUIRE(rtest1.game_over() == false);
  rtest1.mark_board(2);//x
  REQUIRE(rtest1.game_over() == false);
  rtest1.mark_board(7);//o
  REQUIRE(rtest1.game_over() == false);
  rtest1.mark_board(3);//x
  REQUIRE(rtest1.game_over() == true);
}
TEST_CASE("row 2 tic tac toe test") {
  TicTacToe rtest2;
  rtest2.start_game("X");
  REQUIRE(rtest2.game_over() == false);
  rtest2.mark_board(4);//x
  REQUIRE(rtest2.game_over() == false);
  rtest2.mark_board(8);//o
  REQUIRE(rtest2.game_over() == false);
  rtest2.mark_board(5);//x
  REQUIRE(rtest2.game_over() == false);
  rtest2.mark_board(7);//o
  REQUIRE(rtest2.game_over() == false);
  rtest2.mark_board(6);//x
  REQUIRE(rtest2.game_over() == true);
}
TEST_CASE("row 3 tic tac toe test") {
  TicTacToe rtest3;
  rtest3.start_game("X");
  REQUIRE(rtest3.game_over() == false);
  rtest3.mark_board(7);//x
  REQUIRE(rtest3.game_over() == false);
  rtest3.mark_board(5);//o
  REQUIRE(rtest3.game_over() == false);
  rtest3.mark_board(8);//x
  REQUIRE(rtest3.game_over() == false);
  rtest3.mark_board(4);//o
  REQUIRE(rtest3.game_over() == false);
  rtest3.mark_board(9);//x
  REQUIRE(rtest3.game_over() == true);
}
TEST_CASE("diagnoal 1 tic tac toe test") {
  TicTacToe dtest1;
  dtest1.start_game("X");
  REQUIRE(dtest1.game_over() == false);
  dtest1.mark_board(1);//x
  REQUIRE(dtest1.game_over() == false);
  dtest1.mark_board(4);//o
  REQUIRE(dtest1.game_over() == false);
  dtest1.mark_board(5);//x
  REQUIRE(dtest1.game_over() == false);
  dtest1.mark_board(7);//o
  REQUIRE(dtest1.game_over() == false);
  dtest1.mark_board(9);//x
  REQUIRE(dtest1.game_over() == true);
}
TEST_CASE("diagnoal tic tac toe test") {
  TicTacToe dtest2;
  dtest2.start_game("X");
  REQUIRE(dtest2.game_over() == false);
  dtest2.mark_board(7);//x
  REQUIRE(dtest2.game_over() == false);
  dtest2.mark_board(4);//o
  REQUIRE(dtest2.game_over() == false);
  dtest2.mark_board(5);//x
  REQUIRE(dtest2.game_over() == false);
  dtest2.mark_board(9);//o
  REQUIRE(dtest2.game_over() == false);
  dtest2.mark_board(3);//x
  REQUIRE(dtest2.game_over() == true);
}
