#include <stdio.h>
#include "main.h"

/**
 * main - function that prints lowercase alphabets
 *
 * Description: Write a function that prints the alphabet in lowercase
 *
 * Return: Always 0 success
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');

}
