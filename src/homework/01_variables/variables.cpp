#include "variables.h"



double get_sales_tax_amount(double meal_amount){
  /*this sets the tax rate as a costant, gets the tax amount and returns it */
  const double tax_rate = .0675;
  double result;
  result = tax_rate * meal_amount;
  return result;

}

double get_tip_amount(double meal_amount, double tip_rate){
  /* returns the tip amount*/

  tip_rate = tip_rate * .01;
  return meal_amount * tip_rate;
}

