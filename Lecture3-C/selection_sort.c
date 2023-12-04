#include <stdio.h>

/**
 * main - selection sort algorithm
 * Return 0
 */
int main(void)
{
	int array[7] = {0, 3, 2, 1, 4, 7, 6};
	int smallest;

	for (int i =0; i < 6; i++)
	{
		int temp;
		for (int j = i + 1; j < 7; j++)
		{
			smallest = i;
			if (array[smallest] > array[j])
				smallest = j;
		}
		if (smallest != i)
		{
			temp = array[smallest];
			array[smallest] = array[i];
			array[i] = temp;
		}
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", array[i]);
	}
	putchar('\n');
}
