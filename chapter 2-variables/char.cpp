#include <iostream>
using namespace std;

int main() {
    int grams;
    cin >> grams;

    int kilograms = grams / 1000;  // Convert to kilograms
    int remainingGrams = grams % 1000;  // Calculate remaining grams

    cout<< kilograms << " Kilogram(s)," << remainingGrams << " Gram(s)" << endl;

    return 0;
}
