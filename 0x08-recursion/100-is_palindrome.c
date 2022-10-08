#include "main.h"

int find_strlen(char *s);
int palindrome_check(char *s, int len, int i);

/**
 * find_strlen - returns the lenth of the string
 *
 * @s: the string which length is to be determined
 *
 * Return: The lenth of the string
 */
int find_strlen(char *s)
{
	int len;

	len = 0;
	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	
	return (len);
}

/**
 * palindrome_check - check if a string is a palindrome
 *
 * @s: the string to be checked
 * @len: the lenth of the string
 * @i: the index of the string
 *
 * Return: if palindrome return 1
 *	   otherwise return 0
 */
int palindrome_check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palindrome_check(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string
 *	           is a palindrome and 0 if not
 *
 * @s: string to be checked
 *
 * Return: Return 1 if palindrome otherwise 0
 *
 */
int is_palindrome(char *s)
{
	int i;
	int len;

	i = 0;
	len = find_strlen(s);

	if (!(*s))
		return (1);

	return (palindrome_check(s, len, i));
}
