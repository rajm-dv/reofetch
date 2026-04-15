#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void get_user_host(void) {
  char hostname[100];
  gethostname(hostname, sizeof(hostname));

  char *user = getenv("USER");
  printf("%s@%s\n", user, hostname);
}
