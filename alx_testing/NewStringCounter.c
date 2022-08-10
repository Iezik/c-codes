#include <stdio.h>

int main(void)
{
	char str[] = "Plantar Lig";
	int count, len = 0;

	for (count = 0; str[count]; count++)
		len++;

	printf ("len is: %d\nsize of int is: %ld\ncount is: %d\n", len, sizeof(int), count);

	return (0);
}
