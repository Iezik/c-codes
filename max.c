#include <stdio.h>

/**
 * max - returns the highest value of two number
 */

int max(int num1, int num2);

int main(void)
{
	int a = 1000;
	int b = 500;
	int ret;

	ret = max(a, b);

	printf("The max value is: %d\n", ret);
	return (0);
}

int max(int num1, int num2)
{
	int result;
	{
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	}
	return result;
}
