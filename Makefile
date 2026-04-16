all:
	gcc -Wall -Werror -Wextra -g main.c ascii.c get_os.c get_uptime.c get_user_host.c get_cpuinfo.c get_meminfo.c -o reofetch
