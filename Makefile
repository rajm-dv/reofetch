all:
	gcc -Wall -Werror -Wextra -g main.c ascii.c get_os.c get_uptime.c get_user_host.c -o reofetch
