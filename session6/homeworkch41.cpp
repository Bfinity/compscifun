/*
Design a C++ structure to store a dairy product name, portion weight, calories, protein, fat, and carbohydrates. Twenty-five grams of American cheese have 375 calories, 5 grams of protein, 8 grams of fat, and 0 carbohydrates. Show how to assign these values to the member variables of your structure. Write a function that, given a variable of type struct dairy and a weight in grams (portion size), returns the number of calories for that weight.
*/
#include<iostream>
#include<string>
using namespace std;

class DairyProduct{
private:
  string name;
  int weight, calories, protein, fat, carbohydrates;
public:
  DairyProduct(string n, int w, int c, int p, int f, int carbs){
    name = n;
    weight = w;
    calories = c;
    protein = p;
    fat = f;
    carbohydrates = carbs;
  };
  int caloriesPerWeight(int weightInGrams){return (weightInGrams / weight) * calories;}

};

int main(){
  DairyProduct *cheese = new DairyProduct("cheese", 25, 375, 5, 8, 0);
  int cals = cheese->caloriesPerWeight(50);
  cout << "\n" << cals;
}
