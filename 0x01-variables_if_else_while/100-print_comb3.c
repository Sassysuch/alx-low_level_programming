#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!((j * 10 + i) < (i * 10 + j)))
			{
				putchar(i);
				putchar(j);

				if (j == '9' && i == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}

			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}

	return (0);
}
