#include "main.h"

/**
 * _isdigit - check if is digit
 * @x: the number to be checked
 * Return: 1 for character 0 for any else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
