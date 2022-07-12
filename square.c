#include <stdio.h>

int main(void)
{
	int size;
	scanf("%d", &size);

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i=0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	return 0;
}
