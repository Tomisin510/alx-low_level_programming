#include "main.h"

/**
 * main - check the code for Holberton School students.
 * Description: a function that prints the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
