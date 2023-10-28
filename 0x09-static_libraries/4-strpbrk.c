#include "main.h"

/**
  * _strpbrk - main function
  *
  * @s: function parameter 1
  *
  * @accept: Function parameter 2
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[k] == accept[j])
	return (s + k);
	}
	}
	return (0);
}

