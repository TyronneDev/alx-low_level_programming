#include"main.h"

/**
 *
 * print_alphabet -  print the alphabets in lower case using putchar
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
