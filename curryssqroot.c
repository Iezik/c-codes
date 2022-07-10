#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;
	double b;

	printf("Enter first number: ");
	scanf("%lf", &a);

	printf("Enter the second number: ");
	scanf("%lf", &b);

	double fave = 25;
	double c;
	c = sqrt(fave);

	printf("Hypothenus is: %f\n", c);

	return (0);
}
