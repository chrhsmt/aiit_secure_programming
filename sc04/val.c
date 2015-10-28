#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

  char buffer[128];

  _Bool IsPasswordOK(void) {
    char Password[12];

    fgets(buffer, sizeof buffer, stdin);
    if (buffer[ strlen(buffer) - 1] == '\n')
      buffer[ strlen(buffer) - 1] = 0;
    strcpy(Password, buffer);
    return 0 == strcmp(Password, "goodpass");
  }

  int main(void) {
    _Bool PwStatus;

    puts("Enter password:");
    PwStatus = IsPasswordOK();
    if (!PwStatus) {
      puts("Access denied");
      exit(-1);
    }
    else
      puts("Access granted");
    return 0;
  }