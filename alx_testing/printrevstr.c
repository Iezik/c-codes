#include <stdio.h>

void strputs(char *str)
{
	int c = 0;
	int count = 0;
	for (; str[c] != '\0'; c++)
	{
		count++;
	}

	printf("number of chars = %d\n", count);
	for (; count >= 0; count--)
	{
		putchar(str[count]);
	}
	putchar('\n');

}
int main(void)
{
	char str[] = "Plantar aponeurosis";
	strputs(str);

	return (0);
}
