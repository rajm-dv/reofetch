#include <stdio.h>
#include <string.h>

void get_cpuinfo(void) {
  FILE *fp = fopen("/proc/cpuinfo", "r");
  char line[256];

  while(fgets(line, sizeof(line), fp)) {
    if(strncmp(line, "model name", 10) == 0) {
      printf("CPU: %s\n", strchr(line, ':') + 2);
      break;
    }
  }
  fclose(fp);
}
