#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char buf[4][8];
  int i = 0;
  printf("%i\n", i++);
  strcpy(buf[0], "********");
  printf("%i\n", i++);
  strcpy(buf[1], buf[0]);
  printf("%i\n", i++);
  strcpy(buf[2], buf[0]);
  printf("%i\n", i++);
  strcpy(buf[3], buf[0]);
  printf("%i\n", i++);
  printf("%s\n", buf[0]);
}