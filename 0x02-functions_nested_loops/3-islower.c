#include "main.h"

/**
* _islower - check if the character is lowercase
*
* i is the character being checked
*
* Return 1 if it is lowercase
* Return 0 if it is not lowercase
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
