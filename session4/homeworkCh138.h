/*
8. Write a macro IS_DIGIT that gives a nonzero value if a character is a digit '0' through '9'. Use this macro in the definition of another macro IS_SPECIAL, which gives a nonzero result if a character is a special character; that is, not alphabetic and not a digit. Be certain to use the IS_ALPHABETIC macro developed in exercise 7.
*/

#include "homeworkCh137.h"

#define IS_DIGIT(x) (((x) >= '0') && ((x) <= '9'))

#define IS_SPECIAL(x) (((IS_DIGIT(x)) && (IS_ALPHABETIC(x))) == 0 ? 1 : 0)
