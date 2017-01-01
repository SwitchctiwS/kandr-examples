#include <stdio.h>

#define IN 1
#define OUT 0
#define TOTCHARS 26

int main(int argc, char* argv[]) {
	int c;
	char ch;
	int charcounts[TOTCHARS];
	int i, j;

	for (i = 0; i < TOTCHARS; i++) {
		charcounts[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			charcounts[c - 'a']++;
		}
	}

	ch = 'a';
	for (i = 0; i < TOTCHARS; i++) {
		printf("%c ", ch++);
		for (j = 0; j < charcounts[i]; j++) {
			printf("-");
		}
		printf("\n");
	}

	return 0;
}