#include <stdio.h>

/*
5. A doubly linked list is a list in which each entry contains a pointer to the preceding entry in the list as well as a pointer to the next entry in the list. Define the appropriate structure definition for a doubly linked list entry and then write a small program that implements a small doubly linked list and prints out the elements of the list.
*/

int main(void){
  struct doublyLinkedListEntry{
    int value;
    struct doublyLinkedListEntry *previousEntry;
    struct doublyLinkedListEntry *nextEntry;
  };

  struct doublyLinkedListEntry first, second, third;
  struct doublyLinkedListEntry *list = &first;

  first.value = 1;
  second.value = 2;
  third.value = 3;

  first.previousEntry = (struct doublyLinkedListEntry *) 0;
  first.nextEntry = &second;

  second.previousEntry = &first;
  second.nextEntry = &third;

  third.previousEntry = &second;
  third.nextEntry = (struct doublyLinkedListEntry *) 0;

  while(list->nextEntry != (struct doublyLinkedListEntry *) 0){
    printf("%i\n", list->value);
    list = list->nextEntry;
  }

  while(list != (struct doublyLinkedListEntry *) 0){
    printf("%i\n", list->value);
    list = list->previousEntry;
  }

  return 0;
}
