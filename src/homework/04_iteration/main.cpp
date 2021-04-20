//write include statements
#include "dna.h"
#include <iostream>

//write using statements
using std::cout; using std::cin; using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
  int choice1;
  char choice2;
  double gc;
  string dna;
  string complement;
  cout<<"this program is CASE SENSITIVE please make sure to use all upper case when entering a dna string \n";

  do{
    //ask user what they would like to do gc contet or complement and askk user to enter a dna string
    cout<<"enter 1 to get gc content \n";
    cout<<"enter 2 to get dna complement \n";
    cin>>choice1;
    cout<<"enter a dna string";
    cin>>dna;
    if (choice1 == 1){
      gc = get_gc_content(dna);
      cout<<"the gc content of the string entered is "<< gc << " percent \n";

    }
    else if (choice1 == 2){
      complement = get_dna_complement(dna);
      cout<<"the dna complement of the string entered is " << complement << "\n";
      
    }
    else{
      cout<<"invalid option plese enter y or Y when promted to do so and enter a valid option \n";
    }
    //ask user if they would like to do process again
    cout<<"would u like to continue ? if yes press y if not press n \n";
    cin>>choice2;
  }while(choice2 == 'y' || choice2 == 'Y');
	return 0;
}