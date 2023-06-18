#include <stdio.h>
/**
 * main - Print the alphabets in lowercases then in uppercases,
 * followed by anew line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alphabets[a]);
	}
	putchar('\n');
	return (0);
}
