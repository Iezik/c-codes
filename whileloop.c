#include <stdio.h>

int main(void)
{
	int i = 0;
	while(i < 11)
	{
		//printf("%d ", k);
		
		int k = i;
		while(k >= 0)
		{
			printf("%d ", k);
			k--;
		}

		printf("\n");
		i++;
	}
	return (0);
}
