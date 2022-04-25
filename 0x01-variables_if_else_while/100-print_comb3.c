#include <stdio.h>

/**
  * main - prints all possible different combinations of two digits
  *
  * Return: Always 0 (succeed)
  */
int main(void)
{
	int digi1, digi2;

	for (digi1 = 0; digi1 < 10; digi1++)
	{
		for (digi2 = 0; digi2 < 10; digi2++)
		{
			putchar((digi1 % 10) + '0');
			putchar((digi2 % 10) + '0');

			if (digi1 == 9 && digi2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

