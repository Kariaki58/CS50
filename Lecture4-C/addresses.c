#include <stdio.h>

typedef char *string;
int main(void)
{
	string text = "HI!";

	printf("%s\n", text);
	printf("%s\n", text + 1);
	printf("%s\n", text + 2);
	return (0);
}
