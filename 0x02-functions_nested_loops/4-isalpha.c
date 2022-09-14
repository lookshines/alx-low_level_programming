#include "main.h"

/**
* _isalpha - check if the character is lowercase
*
* @i: - ascii integer value of the character
*
* Return: 1 if character is an alphabete, 0 otherwise.
*
*/
int _isalpha(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else if(i >= 65 && i <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
