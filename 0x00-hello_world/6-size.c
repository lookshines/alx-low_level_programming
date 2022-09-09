#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 */
int main(void)
{
	char char_type;	
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	//print the sizes of the above data type
	printf("Size of char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of long int: %zu byte(s)\n", sizeof(long_int_type));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long_long_int_type));
	printf("Size of float: %zu byte(s)\n", sizeof(float_type));
        
	return (0);
}
