#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t bufsize = 32;
	char *argv[5];
	char *av[] = {"/usr/bin/ls", "-l", "/usr/", NULL};

	printf("$ ");
	getline(argv, &bufsize, stdin);
	printf("%s\n", argv[0]);
	if (execve(argv[0], av, NULL) == -1)
	{
		perror("Error:");
	}
	return (0);
}
