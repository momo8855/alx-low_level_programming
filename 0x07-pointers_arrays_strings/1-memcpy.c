#include "main.h"

/**
  * *_memcpy - copies memory area
  *
  * @dest: a pointer to the memory area where the copied bytes should be stored
  * @src: a pointer to the memory area from where the bytes should be copied
  * @n: the number of bytes to be copied
  *
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
