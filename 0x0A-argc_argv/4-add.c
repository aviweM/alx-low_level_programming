#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];

			for (k = 0; k < strlen(p); k++)
			{
				if (p[k] < 48 || p[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(p);
			p++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
