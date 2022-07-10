#include <stdio.h>

/**
 * main - calculates the clearance of a substance from the
 * variables u, v, and p
 * Return: 0 is codes runs succesfully, else not 0
 */

int main(void)
{
	double u;
	double v;
	double p;
	char firstname[40];
	char lastname[40];

	printf("Enter patients' first name: ");
	scanf("%s", firstname);	/*fgets(name, 40, stdin);*/
	printf("Enter patients' last name: ");
	scanf("%s", lastname);
	printf("input u: ");
	scanf("%lf", &u);
	printf("input v: ");
	scanf("%lf", &v);
	printf("input p: ");
	scanf("%lf", &p);

	double cl = (u * v) / p;
		printf("The clearance of %s %s is %lg\n", firstname, 
			lastname, cl);

	return (0);
}
