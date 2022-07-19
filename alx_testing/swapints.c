#include <stdio.h>

void pal(int *a, int *b);

void pal(int *a, int *b)
{
	int b2 = *b;
	printf("b2 = %d\n", b2);
	*b = *a;
	*a = b2;

}

int main (void)
{
	int c = 4;
	int d = 5;

	printf("c = %d\nd = %d\n", c, d);
	pal(&c, &d);
	printf("c = %d\nd = %d\n", c, d);
	return (0);
}
