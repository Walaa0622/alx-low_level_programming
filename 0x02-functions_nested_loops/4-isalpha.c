#include "main.h"

/**
 * _isalpha -> Write a function that checks for alphabetic character
 * @c: a character to be check on
 * Return: return 0 or 1 depending on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
