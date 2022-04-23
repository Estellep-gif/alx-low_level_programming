#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
  * main - prints if the numbers is positive or negative
  *
  * Return: Always (success)
  */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	printf("The numer %d is positive\n", n);
	else if (n == 0)
	printf("The numer %d is Zero\n", n);
	else
	printf("The numer %d is negative\n", n);
	return (0);
}
