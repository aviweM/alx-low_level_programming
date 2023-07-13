#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int value_1 = 0, value_2 = 0;

	if (argc == 3)
	{
		value_1 = atoi(argv[1]);
		value_2 = atoi(argv[2]);
		printf("%d\n", value_1 * value_2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
