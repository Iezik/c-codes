#include <stdio.h>
/**
 * main - does god knows what
 * Return: 0 maybe, i don't have a clue
 */
int main(void)
{
	int a;
	a =21;
	int b = 10;
	int c;
	{
	c = a + b;
	printf("Line 1 - Value of c is %d\n", c);

	c = a - b;
	printf("Line 2 - Value of c is %d\n", c);

	c = a * b;
	printf("Line 3 - Value of c is %d\n", c);

	c = a / b;
	printf("Line 4 - Value of c is %d\n", c);

	c = a % b;
	printf("Line 5 - Value of c is %d\n", c);

	c = a++;
	printf("Line 6 - Value of c is %d\n", c);

	c = a--;
	printf("Line 7 - Value of c is %d\n", c);

	c = a-- + a;
	printf("Line 8 - Value of me is %d\n", c);

	c = a + b * b;
	printf("Line 9 - Value of t+ is %d\n", c);
	}
	return (0);
}

