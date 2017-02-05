#include <stdio.h>
#include <string.h>
#include <math.h>
//#include <ctype.h>
//#include <limits.h>

int htoi(char* s);

int main(void) {
	char s[] = {'0', 'x', 'F', 'F', 'F', 'F', 'F', '\0'};

	printf("%d", htoi(s));
	return 0;
}

/* htoi: converts hex to dec (int)
Has an optional 0x or 0X
Allowable digits are 0..9, a..f, A..F
Params:
	s -> hex number to convert */
int htoi(char* s) {
	int str_len = strlen(s);
	int result = 0;
	int i, j;

	// Remove "0x" or "0X" from the number
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
		for (i = 0; i < str_len - 1; i++) {
			s[i] = s[i + 2];
		} 
	}

	str_len = strlen(s);

	i = 0;
	while (i < str_len) {
		// Convert letters to numbers
		if (s[i] == 'a' || s[i] == 'A') {
			result += 10 * pow(16, i);
		} else if (s[i] == 'b' || s[i] == 'B') {
			result += 11 * pow(16, i);
		} else if (s[i] == 'c' || s[i] == 'C') {
			result += 12 * pow(16, i);
		} else if (s[i] == 'd' || s[i] == 'D') {
			result += 13 * pow(16, i);
		} else if (s[i] == 'e' || s[i] == 'E') {
			result += 14 * pow(16, i);
		} else if (s[i] == 'f' || s[i] == 'F') {
			result += 15 * pow(16, i);
		} else {
			result += (s[str_len - i - 1] - '0') * pow(16, i);
		}

		i++;
	}
	return result;
}