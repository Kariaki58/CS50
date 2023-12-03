#include <stdio.h>

int main(void)
{
	int scores[3] = {10, 20, 30};
	int sum;
	
	for (int i = 0; i < 3; i++)
		{
			sum += scores[i];
		}
	printf("%f\n", (sum) / 3.0);
}