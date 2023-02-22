#include"main.h"

/**
 * main - Entry point
 *
 * print_alphabet - print the alphabets in lower case using putchar
 *
 * Return: Always 0 (Successs)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
