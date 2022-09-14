#include "main.h"

/**
* _islower - check if the character is lowercase
*  
* Return 1 if it is lowercase  and 0 otherwise
*/
int  _islower(int i)
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
