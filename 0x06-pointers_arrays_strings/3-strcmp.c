#include "main.h"

/**
  * _strcmp - comapres to strings
  *
  * @s1: first string
  * @s2: second string
  *
  * Return: 0 if equal
  *	    1 if first is bigger
  *	    -1 if first is lower
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
