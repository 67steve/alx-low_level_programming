#include <stdio.h>
/**
  *main - Entry point
  *Description 'print numbers of base 16 in lower case'
  *Return: always 0
  */
int main(void)
{
	int d;
	int e;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (e = 97; e <= 102; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
