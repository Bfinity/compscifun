/*
This class tests the macros in homework for Chapter 13
*/

#include <stdio.h>
#include "homeworkCh138.h"


int main(void){
  char testUpperCase = 'D';
  printf("Test Upper_Case Macro of %c is %i\n", testUpperCase, IS_UPPER_CASE(testUpperCase));

  char testLowerCase = 'r';
  printf("Test Lower_Case Macro of %c is %i\n", testLowerCase, IS_LOWER_CASE(testLowerCase));

  char testAlphabetic = '4';
  printf("Test Is_Alphabetic Macro of %c is %i\n", testAlphabetic, IS_ALPHABETIC(testAlphabetic));

  char digitTest = 'e';
  printf("Test Is_Digit Macro of %c is %i\n", digitTest, IS_DIGIT(digitTest));

  char specialTest = '$';
  printf("Test Is_Special Macro of %c is %i\n", specialTest, IS_SPECIAL(specialTest));

  return 0;
}
