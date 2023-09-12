#include "main.h"

/**
 * main - Print the parent pid
 * Return: 0 on success 
 */
int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%d\n", ppid);
	return (0);
}
