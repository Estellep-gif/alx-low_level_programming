#include <stdio.h>

/**
  * main - prints all possible different combinations of two digits
  *
  * Return: Always 0 (succeed)
  */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;


	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && a < b)
			{
				putchar(b);
				putchar(a);
				if (i == 57 && e == 56)
				{
					break;
				}
			putchar(',');
			putchar(' ');
			}
			a++;

		}
		b++;
	}
	putchar('\n');
	return (0);
}

