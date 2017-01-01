/*
Program name: Detab
Description: Replaces tabs with spaces
*/

// Assume a tab is 8 spaces
#include <stdio.h>

#define TABWIDTH 8

//Converts tabs to spaces, and keeps tab column width
int main(void) {
	char c;
	int cols;
	int i;

	// Remaining spaces = The size of a tab - columns already used
	// Remaining columns have to be reset when there is a newline or a tab
	cols = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (i = 0; i < TABWIDTH - cols; i++) {
				printf(" ");
			}
			cols = 0;
	 	} else if (c == '\n') {
			cols = 0;
		} else {
			cols = (cols + 1) % TABWIDTH;
			putchar(c);
		}
	}

	return 0;
}
