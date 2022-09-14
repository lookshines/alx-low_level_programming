#include "main.h"

/**
* _abs - return absolute value of the integer.
*
* @i: - is the signed integer
*
* Return: absolute value of the integer
*
*/
int _abs(int i)
{
	int abs;

	if (i >= 0)
	{
		return (i);
	}
	else
	{
		abs = -1 * i;
		return (abs);
	}
}
