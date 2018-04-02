#include<iostream>
#include<list>

using namespace std;

template <class T>
class LinearContainer{
private:
  list<T> container;
  int max_size;
  int current_size;
public:
  explicit LinearContainer(int init_size = 10){list<T> container(init_size); max_size = init_size; current_size = 0;}
  void push(T element){container.push_front(element); current_size++;}
  T pop(){T temp = *container.begin(); container.pop(); return temp;}
  bool is_empty(){return container.empty();}
  bool is_full(){return current_size == max_size;}
};

int main(){
    LinearContainer<int> container;
    cout << container.is_empty() << "\n";
    container.push(1);
    cout << container.is_empty() << "\n";
    cout << container.is_full() << "\n";
  return 0;
}
