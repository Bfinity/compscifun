/*
7. Write a macro IS_ALPHABETIC that gives a nonzero value if a character is an alphabetic character. Have the macro use the IS_LOWER_CASE macro defined in the chapter text and the IS_UPPER_CASE macro defined in exercise 6.
*/

#include "homeworkCh136.h"

#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))

#define IS_ALPHABETIC(x) ((IS_UPPER_CASE(x)) || (IS_LOWER_CASE(x)))
