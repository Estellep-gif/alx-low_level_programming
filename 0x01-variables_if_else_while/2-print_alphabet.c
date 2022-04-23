#include<stdio.h>

/**
  * main - Prints the lowercase
  *
  * Return: always (success)
  */
int main(void)
{
	char ch = "a";
	
	while (ch <= "Z")
	{
	putchar("%c", ch);
	ch++;
	}
	return (0);
}
