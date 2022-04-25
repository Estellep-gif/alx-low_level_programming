#include <stdio.h>
/**
  * main - prints all the numbers of base 16 in lowercase, followed by a new line
  * Return: Always0 (succeed)
  */
int main(void)
{
	int nbre;
	char letr;
	for (nbre = 0; nbre < 10; nbre++)
		putchar((nbre % 10) + '0');
	for (letr = 'a'; letr <= 'f'; letr++)
		putchar(letr);
	putchar('\n');
	return (0);
}

