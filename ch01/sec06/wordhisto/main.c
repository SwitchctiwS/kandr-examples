#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char* argv[]) {
	int i, c, nl, nw, nc, wordlen, state;

	state = OUT;
	nl = nw = nc = wordlen = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			printf(" ");
			for (i = 0; i < wordlen; i++) {
				printf("-");
			}
			printf("\n");
		} else if (state == OUT) {
			putchar(c);
			state = IN;
			++nw;
			wordlen = 1;
		} else {
			putchar(c);
			wordlen++;
		}
	}
	printf("Newlines: %3d\t Words: %3d\t Chars: %3d\n", nl, nw, nc);

	return 0;
}