#include <stdio.h>


int main(void)
{
        char c;
        scanf("%c", &c);

        if(c >= 'A' && c <= 'z')
        {
                printf("%c is uppercase!\n", c);
        }
        else if(c >= 'a' && c <= 'z')
        {
                printf("%c is lowercase!\n", c);
        }
        else
        {
                printf("%c is not an alphabet\n", c);
	}

        return 0;
}

