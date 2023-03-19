#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabet in lower and upper case'
  *Return: always 0
  */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (u <= 90)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
