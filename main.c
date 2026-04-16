/*
 * <DES>
 * Github.com/rajm-dv/rfetch
 * rfetch -> neofetch clone
 * Auther: rajm-dv
 * Date: 14-04-2026
 * </DES>
 */

#include "rfetch.h"
#include <stdio.h>

int main(void) {
  print_logo();
  printf("\n");

  get_user_host();
  get_os();
  get_uptime();
  get_cpuinfo();

  return 0;
}
