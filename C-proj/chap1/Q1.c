#include <stdio.h>

int main(void) {
  char hi[] = "Hello World!";

  printf("%s\n", hi);
  scanf(" %[^/n]", hi);

  return 0;
}

/* q2 Write a program that reads lines from the standard input.
 * Each line is printed on the standard output preceded by its line number.
 * Try to write the program so
 * that it has no built-in limit on how long a line it can handle.
 */
