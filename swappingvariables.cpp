#include <iostream>

using namespace std;

// Function to swap values referenced by the parameters
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4) {
    int temp = userVal1;
    userVal1 = userVal2;
    userVal2 = temp;
    temp = userVal3;
    userVal3 = userVal4;
    userVal4 = temp;
}

int main() {
    int val1, val2, val3, val4;

    // Reading input values
    cin >> val1 >> val2 >> val3 >> val4;

    // Calling SwapValues() function to swap the values
    SwapValues(val1, val2, val3, val4);

    // Printing the swapped values
    cout << val1 << " " << val2 << " " << val3 << " " << val4 << endl;

    return 0;
}
