#include <stdio.h>

void strputs(char *str)
{
	int b = 0;
	for (; str[b] != '\0'; b++)
	{
	//	putchar(b +'0');
	}
	//putchar('\n');
	int half;
	if (b % 2 == 0)
	{
		half = b / 2;
		half += 1;
		for (; str[half] != '\0'; half++)
		{
			putchar(str[half]);
		}
		putchar('\n');
	}
	else if (b % 2 != 0)
	{
		half = (b - 1) / 2;
		half += 2;
		for (; str[half] != '\0'; half++)
		{
			putchar(str[half]);
		}
		putchar('\n');
	}

}
int main(void)
{
	char str[] = "Plantar aponeurosis";
	strputs(str);

	return (0);
}
