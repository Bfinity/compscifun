#include <stdio.h>

/*
6. Write a function called removeString to remove a specified number of characters from a character string.The function should take three arguments: the source string, the starting index number in the source string, and the number of charac- ters to remove. So, if the character array text contains the string "the wrong son", the call

removeString (text, 4, 6);

has the effect of removing the characters “wrong “ (the word “wrong” plus the space that follows) from the array text.The resulting string inside text is then "the son".
*/

void removeString(char sourceString[], int index, int numToRemove){
  int i;
  int count = index + numToRemove;
  for(i = index; sourceString[i] != '\0'; i++){
      sourceString[i] = sourceString[count];
      count++;
    }
}

int main(void){
  char string[] = "the wrong son";
  removeString(string, 4, 6);
  printf("%s\n", string);
  return 0;
}
