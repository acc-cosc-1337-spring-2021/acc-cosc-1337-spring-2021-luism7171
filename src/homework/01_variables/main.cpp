#include "variables.h"
#include<iostream>
using std::cout; using std::cin;

int main()
{
  /* sets all the variables as double */
  double meal_amount, tip_rate, tip_amount, tax_amount,total;
  //ask user to enter meal amount and tip rate and gets the total taxes for the food
  cout<<"Plese enter how much was the meal: ";
  cin>> meal_amount;
  tax_amount = get_sales_tax_amount(meal_amount);
  cout<<"Enter the tip rate: ";
  cin>> tip_rate;
  tip_amount = get_tip_amount(meal_amount, tip_rate);
  // gets the total for everything together
  total = tip_amount + tax_amount + meal_amount;
  //displays meal amount tax amount tip amoount and the total
  cout<< "Meal amount:"<< meal_amount<<'\n';
  cout<< "Sales tax:"<< tax_amount<<'\n';
  cout<< "Tip amount:"<< tip_amount<<'\n';
  cout<< "Total:"<< total;
	

	return 0;
}
