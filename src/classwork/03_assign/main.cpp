//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
//Write namespace using statements for cout and cin
using std::cin; using std::cout; using std::string;
int main() 
{
  string grade_if;
  int grade;
  string grade_switch;
  cout<<"plese enter a valid grade in range of 0 - 100";
  cin>> grade;
  if(grade >= 0 && grade <= 100){
    grade_if = get_letter_grade_using_if(grade);
    grade_switch = get_letter_grade_using_switch(grade);
    cout<< "first we will show the grade obtained by using if else and then switch \n";
    cout<< " the letter grade obtained using the if function is " << grade_if<<"\n";
    cout<< " the letter grade obtained using the switch function is " << grade_switch<<"\n";
  }
  else{
    cout<<"Please enter a valid grade";
  }

	return 0;
}

