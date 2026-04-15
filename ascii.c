#include <stdio.h>

int print_logo(void) {
  FILE *fp;
  char buf[100];
  
  fp = fopen("./assets/logo.txt", "r");
  if(!fp) {
    printf("Error: could not open file logo.txt\n");
    return 1;
  }

  while(fgets(buf, 100, fp)) {
    printf("%s", buf);
  }
  fclose(fp);
  return 0;
}
