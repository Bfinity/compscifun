/*
16. Write an algorithm to find the second-largest element store in an arbitrary container class. Use STL containers vector<T>, list<T>, and set<T> to test that it works regardless of the container. Write the algorithm, assuming that a forward iterator is available and comparison is understood.
*/

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <list>
#include <set>
#include <vector>
using namespace std;

template <class T>
int findTheSecondLargest(T container){
  typename T::iterator p;
  int largest = 0;
  int secondLargest;

  for(p = container.begin(); p != container.end(); p++){
    if(largest < *p){
      secondLargest = largest;
      largest = *p;
    } else if(secondLargest < *p){
      secondLargest = *p;
    }
  }
  return secondLargest;
}

int main(){
  int nums[5] = {4, 3, 10, 8, 6};
  list<int> testList;
  set<int> setTest;
  vector<int> vectorTest;
  for(int i = 0; i < 5; i++){
    testList.push_front(nums[i]);
    setTest.insert(nums[i]);
    vectorTest.push_back(nums[i]);
  }
  int found = findTheSecondLargest(testList);
  int found2 = findTheSecondLargest(setTest);
  int found3 = findTheSecondLargest(vectorTest);
  cout << found << "\n";
  cout << found2 << "\n";
  cout << found3 << "\n";
}
