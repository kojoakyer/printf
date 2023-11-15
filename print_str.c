#include "main.h"

/**
* _strlen - Returns the length of a string.
*@str: string pointer.
*Return: length of the string.
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strlenc - strlen function applied to a constant char pointer.
 * @str: constant char pointer.
 * Return: length of the string.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
