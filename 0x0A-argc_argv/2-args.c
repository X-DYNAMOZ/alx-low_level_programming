#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argumentCount: number of arguments
 * @argumentValues: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argumentCount, char *argumentValues[])
{
	int argumentIndex;

	for (argumentIndex = 0; argumentIndex < argumentCount; argumentIndex++)
	{
		printf("%s\n", argumentValues[argumentIndex]);
	}

	return (0);
}
