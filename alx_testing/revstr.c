#include <stdio.h>

void strputs(char *str)
{
	int c = 0;
	int count = 0;
	for (; str[c] != '\0'; c++)
	{
		count++;
	}
	
	char car;
	char revstr[count];
	int a = 0;


	printf("number of chars = %d\n", count);

	for (; a <= count; a++)
	{
		revstr[a] = str[a];
	}

//	printf("both strings:\n);
//	puts(str);
//	puts('\n');
//	puts(revstr);
//	puts(\n);
	
	int count2 = count, count3 = count - 1;
	int d;

			int op = 0;
	for (d = 0; d <= count; d++)
	{
		//for (; count3 >= 0; count3--)
		//{
			
			str[d] = revstr[count3];
			op++;
			printf("%d\n", op);
			count3--;
		//}

	}

	int e = 0;
	for (; str[e] != '\0'; e++)
	{
		putchar(str[e]);

	}

	printf("After first str print\n");

	for (; count >= 0; count--)
	{
		putchar(revstr[count]);
	}
	putchar('\n');

	printf("after revstr\n");

	for (; count2 >= 0; count2--)
	{
		putchar(str[count2]);
	}
	putchar('\n');

}
int main(void)
{
	char str[] = "Plantar aponeurosis";
	strputs(str);

	return (0);
}
