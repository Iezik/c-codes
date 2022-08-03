#include <stdio.h>

void srch(char *s, char c);

void srch(char *s, char c)
{
	int i = 0;
	for (; s[i] != '\0'; i++)
	{
		//printf("%c", c);	
		//printf("%c\n", s[i]);
	

		if (s[i] == c)
		{		
			printf("Found it! at %s[%d]\n", s, i);
			return;
		}
		
	}

	if (s[i] == '\0')
	{
		printf("NULL\n");
	}

}



int main(void)
{
	char word[] = "Plantar Aponeurosis";
	
	srch(word, 's');
	
	return (0);
}
