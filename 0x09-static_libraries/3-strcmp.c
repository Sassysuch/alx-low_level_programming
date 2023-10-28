#include "main.h"
/**
 * _strcmp - function name
 * @s1: first string
 * @s2: second string
 * Return: the resulting string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int dif = 0;

	while (s1[i] != 0 && s2[i] != 0)
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
			break;
		i++;
	}

	return (dif);
}
