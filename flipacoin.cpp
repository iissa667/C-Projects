#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string CoinFlip() {
    if (rand() % 2 == 0) {
        return "Tails";
    } else {
        return "Heads";
    }
}

int main() {
    srand(time(0)); // set random seed based on current time
    int num_flips;
    //cout << "Enter the number of coin flips: ";
    cin >> num_flips;
    for (int i = 0; i < num_flips; i++) {
        cout << CoinFlip() << endl;
    }
    return 0;
}
