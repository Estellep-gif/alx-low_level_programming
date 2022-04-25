#include<stdio.h>

/**
  * main - print the alphabet in lowercase
  * 
  * Return: Always 0 succeed
  */
int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{

			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
