#include <stdio.h>

/*
 Homework Ch 6:Arrays, Ex 4: Write a program that calculates the average of an array of 10 floating point values.
*/

int main(void){
  float values[] = {1.3, 4.5, 2.7, 3.4, 9.2, 8.4, 7.7, 5.2, 6.6, 10.3};
  float average;
  float accumulatedValue;

  for(int i = 0; i < 10; i++){
    accumulatedValue = values[i];
  }
  average = accumulatedValue / 10;
  printf("The average of the values in the array is %f\n", average);

  return 0;
}
