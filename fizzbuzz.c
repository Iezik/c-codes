#include <stdio.h>

int main(void)
{
	int a = 1;

	for(; a < 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 5 == 0 && a % 3 == 0)
		{	
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}

	//	printf("%d ", a);
	}
	return (0);
}
