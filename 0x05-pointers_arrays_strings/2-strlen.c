#include "main.h"

/**
  * _strlen - lenght of string
  *
  * @s: pointer to the string
  *
  * Return: the length
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
