#include <stdio.h>
#include <string.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void with_ints(void);
void with_floats(void);
void with_for(void);

int main(int argc, char* argv[]) {
	if (argc > 1) {
		if (strcmp("float", argv[1]) == 0) {
			with_floats();
		} else if (strcmp("for", argv[1]) == 0) {
			with_for();
		} else {
			with_ints();
		}
	} else {
		with_ints();
	}

	return 0;
}

void with_ints(void) {
	int fahr, celsius;

	fahr = LOWER;
	while (fahr <= UPPER) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}

void with_floats(void) {
	float fahr, celsius;

	fahr = LOWER;
	while (fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0d\t%6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}

void with_for(void) {
	float fahr, celsius;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}