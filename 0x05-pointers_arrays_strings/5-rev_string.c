#include "stdio.h"

/**
 *  rev_string - Reverses a string
 *  @s: Input string
 *  Return: String in reverse
 */
void rev_string(char *s)
{
char s[10] = "My School";

    printf("%s\n", s);
        rev_string(s);
	    printf("%s\n", s);
	        return (0);
}
