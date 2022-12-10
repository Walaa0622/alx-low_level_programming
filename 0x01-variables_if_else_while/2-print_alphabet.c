#include <stdio.h>
#include <stdlid.h>
/**
 * main - returns alph
 *
 * Return: Always o
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
