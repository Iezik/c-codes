#include <stdio.h>

/**
 * main - prints all primenunbers from n till
 * 2, where 2 is regarded as the last prime number
 * This is done to mainly avid edge cases
 * Return: 0 else 1
 */

int main(void)
{
	int n = 0;
	int i;
	
	printf("This app checks all print numbers from the number you select till 0\n\n");
	printf("Choose a number to begin: ");
	scanf("%d", &i);
	int i2 = i;

	for(; i >= 2; i--)
	{
		if((i % 2 != 0) && (i % 3 != 0))	
		{
			printf("%d    ", i);
			n++;
		}	
	}	
	
	printf("\nThere are %d prime nunbers between 0 and %d\n", n, i2);

	return (0);
}
