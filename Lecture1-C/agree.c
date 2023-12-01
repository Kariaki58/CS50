#include <stdio.h>


int main(void)
{
	char c = 'n';

	if (c == 'y' || c == 'Y')
		printf("agreed\n");
	else if (c == 'n' || c == 'N')
		printf("don't agree\n");
	return (0);
}