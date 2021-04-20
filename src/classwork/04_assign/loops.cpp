
#include "loops.h"
//lops the number and multiplies it to get factorial
int factorial(int num){
  int fact = 1 ;
  for (int i = 1; i <= num; ++i){
    fact = fact;
    fact = fact * i;


  }
  return fact;

}