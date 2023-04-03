/**
  * *_strstr - locates a substring
  *
  * @haystack: pointer to the string to search
  * @needle: pointer to the substring to search for
  *
  * Return: pointer to the beginning of the located substring
  *		or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);
	int i;

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		int j;

		for (j = 0; j < needle_len; j++)
		{
			if (haystack[j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
