#include <stdio.h>

int mupltiplier(int a, int b);

int multiplier(int a, int b)
{
	int c = a * b;

	return (c);
}

int main(void)
{
	int g;
	g = multiplier(5, 9);

	printf("%d", g);

	return (0);
}
