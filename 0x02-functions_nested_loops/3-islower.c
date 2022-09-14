#include "main.h"

/**
* _islower - check if the character is lowercase
*
* @c: - ascii integer value of the character
*
* Return: 1 if character is lowercase, 0 otherwise.
*
*/
int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
