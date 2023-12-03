#include <stdio.h>

int main(void)
{
	int numbers[] = {10, 11, 50, 18, 14};
	int n;

	printf("Number: ");
	scanf("%d", &n);
	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] == n)
		{
			printf("Found\n");
			return (0);
		}
	}
	printf("Not found\n");
	return (1);
}
