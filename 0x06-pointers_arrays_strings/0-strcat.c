#include <main.h>
/**
  * main concatenates two strings
  *
  * Return: dest
  *
char *_strcat(char *dest, char *src);
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

