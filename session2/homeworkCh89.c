#include <stdio.h>

/*
 Homework Chapter 7: Functions EX 9: The least common multiple (lcm) of two positive integers u and v is the smallest positive integer that is evenly divisible by both u and v. Thus, the lcm of 15 and 10 written lcm(15,10) is 30, because 30 is the smallest integer divisible by both 30 15 and 10. Write a function lcm that takes two integer arguments and returns their lcm. the lcm function should calculate the least common multiple by calling the gcd function from [Program .6 or any version from the presented material] in accordance with the following identity
     lcm(u, v) = uv / gcd(u, v)    u, v >= 0
*/

//Program 7.6: gcd
int gcd(int u, int v){
  int temp;
  if(u >= 0 && v >= 0){
    while( v != 0){
      temp = u % v;
      u = v;
      v = temp;
    }
  }
  return u;
}

int lcm(int a, int b){
  int ans = a * b / gcd(a, b);
  printf("The lcm of %i and %i is %i\n", a, b, ans);
  return ans;
}

int lcmTest(int a, int b){
  while(a % b != 0){
    a = a * 2;
  }
  printf("%i\n", a);
  return a;
}



int main(){
  lcm(15, 10);
  return 0;
}
