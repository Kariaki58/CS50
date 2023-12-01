#include <stdio.h>


int main(void)
{
	long x = 10;
	long y = 2;
	double z = (double) x / (double) y;

	printf("hello world %.30f\n", z);
}