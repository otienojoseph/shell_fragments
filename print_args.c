#include "main.h"

/**
 * main - Print all arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	while (ac > 1)
	{
		printf("%s\n",*av[--ac] );
	}
	return (0);
}
