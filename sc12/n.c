#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int var;
  printf("%200d%n", &var);
  printf("---\n");
  printf("%d\n", var);
 return 0;
}