#include <stdio.h>

/**
 *  main - Prints the numbers since 0 to 9
 *
 * Description: Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 *  Return: Always Success
 */

int main(void)
{

	char n;

        for (n = '0'; n <= '9'; n++)
	{
         putchar(n);
        }
	putchar('\n');

       	return (0);
}
