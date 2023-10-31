#include <stdio.h>

/**
 * main - The program prints its name followed by a new line.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	argc--; /*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
