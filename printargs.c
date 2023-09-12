#include <stdio.h>

/**
 * main - Print all arguents
 * Return: 0 on success
 */
int main(int ac, char *argv[])
{
	while (--ac > 1)
	{
		printf("%s\n", *++argv);
	}
	return (0);
}
