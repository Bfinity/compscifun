#include <stdio.h>

/*
6. Write a macro IS_UPPER_CASE that gives a nonzero value if a character is an uppercase letter.
*/

#define IS_UPPER_CASE(x) (((x) >= 'A') && ((x) <= 'Z'))
