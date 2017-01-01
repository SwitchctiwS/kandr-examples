#include <stdio.h>

int power(int b, int n);

int main() {
	int i;

	for (i = 0; i < 10; ++i) {
		printf("%d\t%3d\t%6d\n", i, power(2, i), power(-3, i));
	}

	return 0;
}

int power(int b, int n) {
	int i;
	int product;

	product = 1;
	for (i = 1; i <= n; i++) {
		product *= b;
	}

	return product;
}