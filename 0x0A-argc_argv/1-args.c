#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argumentCount: number of arguments
 * @argumentValues: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argumentCount, char *argumentValues[])
{
	int numberOfArguments;

	(void) argumentValues; /* Ignoring argumentValues */
	numberOfArguments = argumentCount - 1;

	printf("The number of arguments passed to the program is: %d\n",
			numberOfArguments);

	return (0);
}
