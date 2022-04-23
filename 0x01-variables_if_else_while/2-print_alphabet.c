#include<stdio.h>

/**
  * main - Prints the lowercase
  *
  * Return: always (success)
  */
int main(void)
{
	char ch;
	
	for (ch = "a"; ch <= "Z"; ch++)
	{
       		putchar(ch);
		
	}
	putchar('\n');
	return (0);
}
