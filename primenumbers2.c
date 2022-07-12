#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
	int usrinput;
	int number = true;

	printf("Give a number: ");
	scanf("%d", &usrinput);

	for(int i = usrinput - 1; i > 1; i--)
	{
		printf("%d ", i);
		
		if(usrinput % i == 0)
		{
			number = false;
		}
	}

	if(number)
	{
		printf("\nIs Prime\n");
	}
	else
	{
		printf("\nIs not Prime\n");
	}
	
	return (0);
}
