#include <stdio.h>

/**
 *  main - prints the alphabet in lowercase, and then in uppercase,
 *
 * Description:print the letter of the alphabet in lower then in upper
 *
 *     Return: Always 0 Success
 */

int main(void)

{       int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
