#include <stdio.h>
#include <string.h>

void get_os(void) {
  FILE *fp = fopen("/etc/os-release", "r");
  char line[256];

  while (fgets(line, sizeof(line), fp)) {
    if (strncmp(line, "PRETTY_NAME=", 12) == 0) {
      char *ptr = strrchr(line, '"');
      int rpos = (int)(ptr - line);
      line[rpos] = '\0';
      printf("OS: %s\n", line + 13);
      break;
    }
  }
  fclose(fp);
}
