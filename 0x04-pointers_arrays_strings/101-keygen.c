#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(0));

	int pass[100];
	int i, sum, n;

	sum = 0;

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 126;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 126)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}