#include <stdio.h>

/*
1. Write a function called removeString to remove a specified number of characters from a character string.The function should take three arguments: the source string, the starting index number in the source string, and the number of characters to remove. The function should return a reference to a new string. The function prototype should be similar to:

char *removeString(char*, int, int);
*/

int lengthOfString(char *source[]){
  int num = 0;
  while(source){
    num++;
  }
  return num;
}

char removeString(char *sourceString[], int startPoint, int numToRemove ){
  int lengthOfString = lengthOfString(&sourceString);
  char newString[lengthOfString];
  for(int i = 0; i < lengthOfString; i++){
    if(i == startPoint){
      i--;
      continue;
    } else{
      sourceString[i] = sourceString[i];
    }
  }
}

int main(void){
  char testString[] = "testing";
  char afterMethod = removeString(&testString, 2, 1);
  printf(afterMethod);
}
