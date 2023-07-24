#include <stdio.h>
/**
* _strlen - count str length
* @s: string to b edetermined
*/
int _strlen(char *s)
{
    int l = 0;
    int flag = 0;
	
	while (flag == 0)
	{
		if (*(s+l) != '\0')
			l++;
		else
			flag = 1;
	}
	
	return l;
}
