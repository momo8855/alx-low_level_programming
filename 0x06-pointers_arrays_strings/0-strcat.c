#include "main.h"

/**
  * *_strcat - concate two strings
  *
  * @dest: first word
  * @src: second word
  *
  * Return: pointer to the concatenated strings
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
