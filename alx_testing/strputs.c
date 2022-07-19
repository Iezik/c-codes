#include <stdio.h>

void strputs(char *str)
{
	int b = 0;
	for (; str[b] != '\0'; b++)
	{
		putchar(str[b]);
	}
	putchar('\n');

}
int main(void)
{
	char str[] = "Plantar aponeurosis";
	strputs(str);

	return (0);
}
