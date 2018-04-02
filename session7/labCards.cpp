#import <iostream>
#import <cstdlib>
#import <ctime>
using namespace std;
struct dairy {
    char name[100];
    int portion_weight;
    int calories;
    int protein;
    int fat;
    int carbs;
};

float how_many_calories(struct dairy d, float weight) {
    return weight / d.portion_weight * d.calories;
}


enum suit { clubs, diamonds, hearts, spades };

class pips {
public:
    void assign(int n) {
        p = n % 13 + 1;
    }
    int getpip() {
        return p;
    }
    void print() {
        cout << p;
    }

private:
    int p;
};

class card {
public:
    suit s;
    pips p;
    void assign(int n) {
        cd = n;
        s = static_cast<suit>(n/13);
        p.assign(n);
    }
private:
    int cd;
};

void cardswap(card *a, card *b) {
    card tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_by_pips(card hand[], int length) {
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(hand[i].p.getpip() < hand[j].p.getpip() && hand[i].p.getpip() != 1){
                cardswap(&hand[i], &hand[j]);
            } else if(hand[j].p.getpip() == 1){
              cardswap(&hand[j], &hand[i]);
            }
        }
    }
}

int main(void) {
    card hand[5];
    srand(time(NULL));

    hand[0].assign(0);

    for(int i = 1; i < 5; i++) {
        hand[i].assign(rand() % 13);
    }
    cout << "Fresh" << endl;
    for(int i = 0; i < 5; i++) {
        hand[i].p.print();
        cout << endl;
    }

    sort_by_pips(hand, 5);

    cout << endl << "Sorted" << endl;
    for(int i = 0; i < 5; i++) {
        hand[i].p.print();
        cout << endl;
    }
}
