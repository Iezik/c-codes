#include <math.h>
#include <stdio.h>

/**
 * main - Calculates the hypothenus of a right angle triangle,
 * when given two values
 * Return: 0 or else not 1
 */

int main(void)
{
	double a, b;

	printf("This program calculates the hypothenus of a right angles triang;e from two values\n");

	printf("Input first number: ");
	scanf("%lf", &a);

	printf("Input second number: ");
	scanf("%lf", &b);


	double c = sqrt((a * a) + (b * b));

	printf("The squareroot of the right angles triangle of sides %lf and %lf is: %lf\n", a, b, c);

	return (0);
}
