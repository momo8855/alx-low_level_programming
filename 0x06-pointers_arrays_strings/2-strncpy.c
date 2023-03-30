#include "main.h"

/**
  * *_strncpy - copy string
  *
  * @dest: pointer to the copy
  * @src: pointer to the source
  * @n: number of bytes to copy
  *
  * Return: pointer to the copy
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
