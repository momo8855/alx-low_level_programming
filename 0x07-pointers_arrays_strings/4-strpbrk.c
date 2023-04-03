#include "main.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes
  *
  * @s: searches a string for any of a set of bytes
  * @accept: pointer to the set of characters to search for
  *
  * Return: pointer to the byte in s that matches one of the bytes in
  *		accept, or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
