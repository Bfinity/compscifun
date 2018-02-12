#include <stdio.h>

/*
5. Write a function called findString to determine if one character string exists inside another string.The first argument to the function should be the character string that is to be searched and the second argument is the string you are interest- ed in finding. If the function finds the specified string, have it return the location in the source string where the string was found. If the function does not find the string, have it return –1. So, for example, the call

index = findString ("a chatterbox", "hat");

searches the string "a chatterbox" for the string "hat". Because "hat" does exist inside the source string, the function returns 3 to indicate the starting position inside the source string where "hat" was found.
*/

int findString(char sourceString[], char partialString[]){

  int i;
  int j = 0;
  int m = -1;

  for(i = 0; sourceString[i] != '\0'; i++){
      if(sourceString[i] != partialString[j]){
          continue;
      } else if(partialString[j] == '\0'){
          break;
      } else{
        m = i - j;
        j++;
      }
  }

  return m;
}

int main(void){

  int index = findString("a chatterbox", "hat");
  printf("%i\n", index);
}
