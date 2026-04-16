#include <stdio.h>
#include <string.h>

void get_os(void) {
  FILE *fp = fopen("/etc/os-release", "r");
  char line[256];

  while(fgets(line, sizeof(line), fp)) {
    if(strncmp(line, "PRETTY_NAME=", 12) == 0) {
      printf("OS: %s", line + 12);
      break;
    }
  }
  fclose(fp);
}
