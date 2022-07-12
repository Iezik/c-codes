#include <stdio.h>

int main(void)
{
	for(int i = 0; i < 11; i++)
	{
		//printf("%d ", k);
		for(int k = i; k >= 0; k--)
			{
				printf("%d ", k);
			}
		printf("\n");
	}
	return (0);
}
