#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int status;
  printf("Password>\n");
  status = authenticate();
  if (!status) { puts("Access dined"); return -10;}
  else puts("Access granted");
  return 0;
}

int authenticate(void) {
  char password[12];
  gets(password);
  if(!strcmp(password, "password")) return 1;
  return 0;
}