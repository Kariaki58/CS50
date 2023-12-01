#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 3)
		{
			printf("meow\n");
			i++;
		}
	for (; i < 10; i++)
		{
			printf("Hello world\n");
		}
	return (0);
}