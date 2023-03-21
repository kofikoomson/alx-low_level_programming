#include "main.h"

/**
 *function  _islower - Checks for lowercase character.
 * if else loop to check for character : c
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
