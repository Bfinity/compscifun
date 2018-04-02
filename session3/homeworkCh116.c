#include <stdio.h>

/*
6. Develop insertEntry and removeEntry functions for a doubly linked list that are similar in function to those developed in previous exercises for a singly linked list. Why can your removeEntry function now take as its argument a direct pointer to the entry to be removed from the list?
*/

struct doublyLinkedListEntry{
  int value;
  struct doublyLinkedListEntry *previousEntry;
  struct doublyLinkedListEntry *nextEntry;
};

struct doublyLinkedListEntry *nullStruct = (struct doublyLinkedListEntry *) 0;

int isEqual(struct doublyLinkedListEntry *compareFrom, struct doublyLinkedListEntry compareTo){
  if(compareFrom->previousEntry == compareTo.previousEntry){
    return 1;
  }
  return 0;
}

void insertEntryByValue(struct doublyLinkedListEntry *list, int valueToFind, struct doublyLinkedListEntry entryToAdd){
  while(list != nullStruct){
    if(list->value == valueToFind){
      entryToAdd.nextEntry = list->nextEntry;
      entryToAdd.previousEntry = list;
      list->nextEntry->previousEntry = &entryToAdd;
      list->nextEntry = &entryToAdd;

    }
    list = list->nextEntry;
  }
  printf("Inserted entry by value\n");
}

void insertEntry(struct doublyLinkedListEntry *list, struct doublyLinkedListEntry *entryBefore,  struct doublyLinkedListEntry entryToAdd){
  while(list != nullStruct){
    if(list == entryBefore){
      entryToAdd.nextEntry = list->nextEntry;
      entryToAdd.previousEntry = list;
      list->nextEntry->previousEntry = &entryToAdd;
      list->nextEntry = &entryToAdd;

    }
    list = list->nextEntry;
  }
  printf("Inserted entry by struct pointer\n");
}

void insertEntryRefactor(struct doublyLinkedListEntry *entryBefore,  struct doublyLinkedListEntry entryToAdd){
      entryToAdd.nextEntry = entryBefore->nextEntry;
      entryToAdd.previousEntry = entryBefore;
      entryBefore->nextEntry->previousEntry = &entryToAdd;
      entryBefore->nextEntry = &entryToAdd;
  printf("Inserted entry by struct pointer\n");
}

void removeEntryByValue(struct doublyLinkedListEntry *list, int valueOfEntryToRemove){
//  struct doublyLinkedListEntry *nullStruct = (struct doublyLinkedListEntry *) 0;
  while(list != nullStruct){
    if(list->value == valueOfEntryToRemove){
      list->previousEntry->nextEntry = list->nextEntry;
      list->nextEntry->previousEntry = list->previousEntry;
      list->previousEntry = nullStruct;
      list->nextEntry = nullStruct;
    }
    list = list->nextEntry;
  }
  printf("Removed entry by value\n");
}

void removeEntry(struct doublyLinkedListEntry *list, struct doublyLinkedListEntry entryToRemove){
//  struct doublyLinkedListEntry *nullStruct = (struct doublyLinkedListEntry *) 0;
  while(list != nullStruct){
    if(isEqual(list, entryToRemove)){
      list->previousEntry->nextEntry = list->nextEntry;
      list->nextEntry->previousEntry = list->previousEntry;
      list->previousEntry = nullStruct;
      list->nextEntry = nullStruct;
    }
    list = list->nextEntry;
  }
  printf("Removed entry by struct pointer\n");
}

void removeEntryRefactor1(struct doublyLinkedListEntry *list, struct doublyLinkedListEntry entryToRemove){
//  struct doublyLinkedListEntry *nullStruct = (struct doublyLinkedListEntry *) 0;
      list->previousEntry->nextEntry = list->nextEntry;
      list->nextEntry->previousEntry = list->previousEntry;
      list->previousEntry = nullStruct;
      list->nextEntry = nullStruct;
  printf("Removed entry by struct pointer\n");
}

void removeEntryRefactor2(struct doublyLinkedListEntry *list, struct doublyLinkedListEntry *entryToRemove){
//  struct doublyLinkedListEntry *nullStruct = (struct doublyLinkedListEntry *) 0;
  while(list){
    if(list == entryToRemove){
      list->previousEntry->nextEntry = list->nextEntry;
      list->nextEntry->previousEntry = list->previousEntry;
      list->previousEntry = nullStruct;
      list->nextEntry = nullStruct;
    }
    list = list->nextEntry;
  }
  printf("Removed entry by struct pointer\n");
}

void printList(struct doublyLinkedListEntry *list, struct doublyLinkedListEntry *firstEntry){
  while(list != (struct doublyLinkedListEntry *) 0){
    printf("%i\n", list->value);
    list = list->nextEntry;
  }

  list = firstEntry;
}

int main(void){
  struct doublyLinkedListEntry first, second, third, addIn;
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

  addIn.value = 5;

  printf("Starting List\n");
  printList(list, &first);

  insertEntry(list, &second, addIn);

  printf("List after inserting\n");
  printList(list, &first);

  removeEntryRefactor2(list, &second);

  printf("List after removing\n");
  printList(list, &first);

  return 0;
}
