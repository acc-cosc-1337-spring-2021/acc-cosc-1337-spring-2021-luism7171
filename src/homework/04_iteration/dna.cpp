#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
//gets gc content by checking how much g or c are in the string and deviding it by the string size
double get_gc_content(const std::string& dna)
{
  double num = dna.size();
  double dev = 0;
  for(auto s: dna ){
    if(s == 'g' || s == 'c' || s == 'G' || s == 'C'){
      dev++;
    }
  }
  return dev /num;
}
//reverses the string 
std::string reverse_string(std:: string dna){
  std::string str = "";
  for(int i = dna.size() -1 ; i >= 0; i--){
    str = str + dna[i];

   }
   return str;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
// gets dna complement by using reverse string function the changing letters to appropiate letters
std::string get_dna_complement(std:: string dna){
  std::string dna1;
  dna1 = reverse_string(dna);
  std::string newstr = "";
  for( int i = 0; i <= dna1.size(); i++ ){
    
    if(dna1[i] == 'A'){
      newstr[i] = 'T';
    }
    else if(dna1[i] == 'T'){
      newstr[i] = 'A';
    }
    else if(dna1[i] == 'C'){
      newstr[i] = 'G';
    }
    else if(dna1[i] == 'G'){
      newstr[i] = 'C';
    }
    newstr += newstr[i];

  }
  return newstr;

}
