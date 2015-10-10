#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char buf[4][8];
  strcpy(buf[0], "********");
  strcpy(buf[1], buf[0]);
  strcpy(buf[2], buf[0]);
  strcpy(buf[3], buf[0]);
  printf("%s\n", buf[0]);
}