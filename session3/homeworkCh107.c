#include <stdio.h>

/*
7. Write a function called insertString to insert one character string into another string.The arguments to the function should consist of the source string, the string to be inserted, and the position in the source string where the string is to be inserted. So, the call

insertString (text, "per", 10);

with text as originally defined in the previous exercise, results in the character string "per" being inserted inside text, beginning at text[10].Therefore, the character string "the wrong person" is stored inside the text array after the function returned.
*/

int sizeArray(char array[]){
  int i = 0;
  while(array[i] != '\0'){
    i++;
  }
  return i;
}

void wtf(char first[], char add[], int start){
  int size = sizeArray(first);
  for(int i = 0; add[i] != '\0'; i++){
    for(int j = size; j > start; j--){
      first[j] = first[j - 1];
    }
    first[start + i] = add[i];
  }
}

int main(void){
  char startString[30] = "the wrong son";
  char newString[] = "per";
  wtf(startString, newString, 10);
  printf("%s\n", startString);
  return 0;
}
