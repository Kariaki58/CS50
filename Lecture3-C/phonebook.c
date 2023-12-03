#include <stdio.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
	char *name;
	char *number;
} person;

int main(void)
{
	person people[2];

	people[0].name = "Carter";
	people[0].number = "+1-717-357-1000";

	people[1].name = "David";
	people[1].number = "+1-954-423-2760";
	
	char *name = "Cartesr";

	for (int i = 0; i < 2; i++)
	{
		if (strcmp(people[i].name, name) == 0)
		{
			printf("Found %s\n", people[i].number);
			return (0);
		}
	}
	printf("Not found\n");
	return (1);
}
