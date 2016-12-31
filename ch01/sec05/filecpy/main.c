#include <stdio.h>

int main(void) {
	char c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	printf("getchar() != EOF is: %d\n", getchar() != EOF);
	printf("EOF is: %d\n", EOF);

	return 0;
}