#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: address of a string
 * @c: character to locate
 *
 * Return: address where @c is find or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *c_loc;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;
	c_loc = (s[i] == c) ? &s[i] : NULL;
	return (c_loc);
}
