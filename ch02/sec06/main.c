#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int lim = 11;
	char c;
	char* s = malloc(lim * sizeof(*s));

	i = 0;
	// original loop:
	// i < lim - 1 && (c = getchar()) != '\n' && c != EOF
	while ((i < lim - 1) + ((c = getchar()) != '\n') + (c != EOF) == 3) {
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	printf("%s", s);

	return 0;
}