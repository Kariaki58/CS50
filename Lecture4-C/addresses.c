#include <stdio.h>

typedef char *string;
int main(void)
{
	string s = "HI!";

	printf("%s\n", s);
	printf("%s\n", s + 1);
	printf("%s\n", s + 2);
	return (0);
}
