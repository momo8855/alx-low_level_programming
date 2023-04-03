#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  *
  * @s: pointer to the string to search
  * @accept: pointer to the set of characters to accept
  *
  * Return: the number of bytes in the initial segment of s
  *		which consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int flag = 1;
	char *a;

	while (*s != '\0' && flag)
	{
		flag = 0;
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				count++;
				flag = 1;
				break;
			}
		}
		s++
	}
	return (count)

}
