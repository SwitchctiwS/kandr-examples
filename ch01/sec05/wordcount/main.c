#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char* argv[]) {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			printf("\n");
		} else if (state == OUT) {
			putchar(c);
			state = IN;
			++nw;
		} else {
			putchar(c);
		}
	}
	printf("Newlines: %3d\t Words: %3d\t Chars: %3d\n", nl, nw, nc);

	return 0;
}