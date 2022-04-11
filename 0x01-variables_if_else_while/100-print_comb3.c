#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 1; d < 90; d++)
	{
     		int count = 0;
	  	for (int i = 0; i < d; i++)
		{
			int a = i / 10;
			int b = i % 10;
			int e = d / 10;
                        int f = d % 10;
			if ((a == f && b == e) || e == f)
			{
				++count;
			}
		}
		if (count > 0)
			continue;
		else
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
		}
		if (d != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
