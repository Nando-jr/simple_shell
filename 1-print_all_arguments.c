#include <stdio.h>
/**
 * main - program prints all the arguments without using 'ac'
 * @ac: count the number of CLI argument
 * @av: array containing all arguments
 *
 * Return: 0 (success)
 */

int main(int ac, char **av)
{
	unsigned int len;

	for (len = 0; av[len];)
	{
		printf("%s\n", av[len]);
		len++;
	}

	return (0);
}
