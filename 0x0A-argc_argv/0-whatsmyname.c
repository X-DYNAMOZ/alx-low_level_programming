#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argumentCount: number of arguments
 * @argumentValues: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argumentCount __attribute__((unused)), char *argumentValues[])
{
	printf("%s\n", *argumentValues);

	return (0);
}
