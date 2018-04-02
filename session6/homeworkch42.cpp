/*
2.    Write a structure point that has three coordinates x, y, and z. How can you access the individual members?
*/

#include<iostream>
using namespace std;

struct point{
  double x, y, z;
  void init(double a, double b, double c) {x = a; y = b; z = c;}
};

int main(){
  point test;
  test.init(1.0, 2.0, 1.5);
  cout << "x = " << test.x << " y = " << test.y << " z = " << test.z << "\n";
}
