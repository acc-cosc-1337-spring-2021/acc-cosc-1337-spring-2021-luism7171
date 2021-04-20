//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
  int num;
  int fact;
  char choice;
  do{
    //do while loop that ask user for a number in rnage an checks iif its in range the gets the factorial and displays it
    cout<<"enter a number in range of one to ten \n";
    cin>>num;
    if(num > 0 && num <=10){
      cout<<"number enterdred is a valid number \n";
      fact = factorial(num);
      cout<<"The factorization of "<< num  << " is " << fact << "\n";


    }
    else{
      cout<<"INVALID OPTION \n";
      cout<<"plese press y or Y and enter a valid option from 1 to 10 \n";

    }
    cout<<" would u like to do another factorization pres y for yes or n for no \n";
    cin>>choice;
  }
  while(choice == 'y' || choice == 'Y');


	return 0;
}