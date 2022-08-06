#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints '$', wait for the user to enter command
 * prints it on the next line
 * `man 3 getline` library
 *
 * Return: 0
 */
int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("#cisfun$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
	}
	return (0);
}
