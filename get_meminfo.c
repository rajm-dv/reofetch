#include <stdio.h>

void get_meminfo(void) {
  FILE *fp = fopen("/proc/meminfo", "r");
  char line[256];
  int total, free;

  while (fgets(line, sizeof(line), fp)) {
    if (sscanf(line, "MemTotal: %d kB", &total))
      continue;
    if (sscanf(line, "MemFree: %d kB", &free))
      break;
  }
  printf("Memory: %d MB / %d MB\n", (total - free) / 1024, total / 1024);
  fclose(fp);
}
