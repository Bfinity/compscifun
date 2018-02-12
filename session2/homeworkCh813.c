#include <stdio.h>

/*
  Modify the sort function from Program 8.12 to take a third argument indicating whether the array is to be sorted in ascending or descending order. Then modify the sort algorithm to correctly sort the array into the indicated order.
*/

//sort array ascending
void sortAcc(int array[], int arrayLength){
  int i, j, temp;
  for(i = 0; i < arrayLength - 1; i++){
    for(j = i + 1; j < arrayLength; j++){
      if(array[i] > array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

//sort array descending
void sortDcc(int array[], int arrayLength){
  printf("descending");
  int i, j, temp;
  for(i = 0; i < arrayLength - 1; i++){
    for(j = i + 1; j < arrayLength; j++){
      if(array[i] < array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

//sorting method
void sortArray(int array[], int indexToRemove, int indexToReplace){
  int temp;
  temp = array[indexToRemove];
  array[indexToRemove] = array[indexToReplace];
  array[indexToReplace] = temp;
}

//Sorting an array of integers into ascending or descending order
void sort(int array[], int arrayLength, char sortOrder){
  int i, j;
  for(i = 0; i < arrayLength - 1; i++){
    for(j = i + 1; j < arrayLength; j++){
      if(sortOrder == 'd'){
        if(array[i] < array[j]){
          sortArray(array, i, j);
        }
      } else {
        if(array[i] > array[j]){
          sortArray(array, i, j);
        }
      }
    }
  }
}

int main(void){
  int i;
  int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 17, 22, 6, 11};
  void sort(int a[], int n, char o);

  printf("The array before the sort: \n");

  for(i = 0; i < 16; i++){
    printf("%i ", array[i]);
  }

  sort(array, 16, 'd');

  printf("\n\nThe array after the sort:\n");

  for(i = 0; i < 16; i++){
    printf("%i ", array[i]);
  }
  printf("\n");

  return 0;
}
