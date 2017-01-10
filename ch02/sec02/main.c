#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char* argv[]) {
	printf("int min: %d\tint max: %d\n", INT_MIN, INT_MAX);
	printf("long min: %ld\tlong max: %ld\n", LONG_MIN, LONG_MAX);
	printf("char min: %hhd\tchar max: %hhd\n", CHAR_MIN, CHAR_MAX);
	printf("short min: %u\tshort max: %u\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned int max: %u\n", UINT_MAX);
	printf("unsigned long max: %lu\n", ULONG_MAX);
	printf("unsigned char max: %hhu\n", UCHAR_MAX);
	printf("unsigned short max: %hu\n", USHRT_MAX);
	printf("float min: %f\nfloat max: %f\n", FLT_MIN, FLT_MAX);
	printf("double min: %f\ndouble max: %f\n", DBL_MIN, DBL_MAX);

	return 0;	
}