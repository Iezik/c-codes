#include <stdio.h>

/**
 * main - checks if a decimal data type "%d" will give a remainder
 * or will require modulus
 * Return: 0 for success, else not 0
 */

int main(void)
{
	int deci;
	int de;
	int d;

	/**
	 * using a number with a decimal point here will result in an error as the decimal "%d" data type
	 * does not accept such numbers
	 */
	printf("input a number: ");
	scanf("%d", &deci);

	//This will be skipped if a number with a decimal point is given at the first prompt
	printf("input another number: ");
	scanf("%d", &de);

	d = deci / de;
	printf("%d divided by %d is: %d\n", deci, de, d);

	return (0);
}

// this is the coorect way to  obtain a number with a decimal point as your answer and give similar inputs
// 
int main(void)

{
	float deci, de, d; //shorter way of declaring

	printf("Input a number: ");
	scanf("%f", &deci);

	printf("Input another number: ");
	scanf("%f", &de);

	d = deci / de;
	printf("%f divided by %f is: %f\n", deci, de, d);

	return (0);
}
