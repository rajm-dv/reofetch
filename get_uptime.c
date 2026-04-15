#include <stdio.h>

void get_uptime(void) {
  FILE *fp = fopen("/proc/uptime", "r");
  float uptime;
  fscanf(fp, "%f", &uptime);
  fclose(fp);

  int hours = uptime / 3600;
  int mins = (uptime - (hours * 3600)) / 60;

  printf("Uptime: %dh %dm\n", hours, mins);
}
