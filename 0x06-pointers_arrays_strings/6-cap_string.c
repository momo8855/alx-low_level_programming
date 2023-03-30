#include "main.h"

/**
  * *cap_string - capitalize all words
  *
  * @s: string
  *
  * Return: the modified string
  */
char *cap_string(char *s)
{
	int flag;
	char *p = s;

	flag = 1;
	while (*s != '\0')
	{
		if (*s == 32 ||
			*s == 9 || *s == 10 ||
			*s == 44 || *s == 59 ||
			*s == 46 || *s == 33 ||
			*s == 34 || *s == 63 ||
			*s == 40 || *s == 41 ||
			*s == 123 || *s == 124)
		{
			flag = 1;
		}
		else
		{
			if (flag == 1 && *s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
			}
			flag = 0;
		}
		s++;
	}
	return (p);
}
