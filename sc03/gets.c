#include <stdio.h>

int main(int argc, char **argv) {
  char buf[4];
  char buf2[8];
  printf("Name>");
  gets(buf);
  printf("[%s]\n", buf);
}
