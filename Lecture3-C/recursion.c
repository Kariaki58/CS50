#include <stdio.h>

void draw(int h)
{
	if (h <= 0)
		return;	
	for (int i = 0; i < h; i++)
		printf("#");
	printf("\n");
	draw(h - 1);
}

int main(void)
{
	int height = 4;
	draw(height);
}


