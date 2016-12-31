#include <stdio.h>

#define TRUE 1
#define FALSE 0

int count_lines();
int count_other();
void condense();
void be_verbose();

int main(int argc, char* argv[]) {
	printf("Newlines:\n");
	printf("%d\n", count_lines());
	printf("Other:\n");
	printf("%d\n", count_other());
	printf("Condense:\n");
	condense();
	printf("Be verbose:\n");
	be_verbose();

	return 0;
}

int count_lines() {
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	}

	return nl;
}

int count_other() {
	int c;
	int btn;

	btn = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == '\b') {
			btn++;
		}
	}

	return btn;
}

void condense() {
	char c;
	int is_multispace = FALSE;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (is_multispace == FALSE) {
				printf(" ");
				is_multispace = TRUE;
			}
		} else {
			putchar(c);
			is_multispace = FALSE;
		}
	}
}

void be_verbose() {
	char c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
		} else if (c == '\b') {
			printf("\\b");
		} else if (c == '\\') {
			printf("\\\\");
		} else {
			putchar(c);
		}
	}
}