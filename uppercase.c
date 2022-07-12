#include <stdio.h>

int main(void)
{
	char c;
	scanf("%c", &c);

	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	return 0;
}
