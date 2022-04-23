#include<stdio.h>

/**
  * main - Prints the lowercase
  *
  * Return: always (success)
  */
int main(void)
{
	char ch;
	ch = "a";
	
	while (ch <= "Z")
	{
       		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
