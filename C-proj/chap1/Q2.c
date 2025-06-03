#include <stdio.h>

// write a program that reads from the standard intput.
// each line is printed on the standard output preceded by its line number.
// try to write the program so that it has no built in limit on how long a line it can handle 


int main(void) {
  int ch;
  int lineNumber;
  int atBeg;

  // need to write a loop to make sure that getchar does not return eof 
  while ((ch = getchar()) != EOF){
    if (atBeg) {
      printf("%d: ", lineNumber);
      atBeg = 0;

    }
    putchar(ch);

    // need it increment the line number
    if (ch == '\n') {
      lineNumber++;
      atBeg = 1;


    }


  } 



  return 0;

}





