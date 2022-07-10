#include <stdio.h>

int main(void)
{
	int i;
	for(i = 0; i < 10; i = i + 2)
	{
		printf("%d\n", i);
	}

	printf("You printed %d numbers\n", i);
	return (0);
}
