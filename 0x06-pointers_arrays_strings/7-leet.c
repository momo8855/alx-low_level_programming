#include "main.h"

/**
  * *leet - encode
  *
  * @str: string to encode
  *
  * Return: encoded string
  */
char *leet(char *str)
{
	char *result = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "44330771";
	int i, j;

	for (i = 0; leet_chars[i] != '\0'; i++)
	{
		for (j = 0; result[j] != '\0'; j++)
		{
			if (result[j] == leet_chars[i])
			{
				result[j] = leet_replacements[i];
			}
		}
	}
	return (result);
}
