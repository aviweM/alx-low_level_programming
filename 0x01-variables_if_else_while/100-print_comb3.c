#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 * in ascending order, separated by comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fNum, sNum;

	for (fNum = '0'; fNum < '9'; fNum++)
	{
		for (sNum = fNum + 1; sNum <= '9'; sNum++)
		{
			if (sNum != fNum)
			{
				putchar(fNum);
				putchar(sNum);
				if (fNum == '8' && sNum == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
