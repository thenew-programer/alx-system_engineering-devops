#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>


/**
 * infinite_while - it's an infinite while loop
 * Return: 0
*/
int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	pid_t pid;
	char count = 0;

	while (count < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			count++;
		}
		else
			exit(0);
	}
	infinite_while();
	return (0);
}

