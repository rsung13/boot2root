#include <stdio.h>
#include <string.h>

int main (int ac, char **av) {
	(void)ac;

	char decr[17] = "isrveawhobpnutfg";
	for (int i = 0; i < strlen(av[1]); i++) {
		printf("%c", decr[(char)av[1][i] & 0xf]);
	}

	return (0);
}
