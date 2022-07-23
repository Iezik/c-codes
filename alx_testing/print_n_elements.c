#include <stdio.h>

void printarray(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
	printf("%d", arr[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
	}
		putchar('\n');
}

int main(void)
{
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	printarray(array, 6);

	return (0);
}
