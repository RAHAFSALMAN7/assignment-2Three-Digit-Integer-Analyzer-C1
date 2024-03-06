#include <iostream>
#include <algorithm> // Include the <algorithm> header for the sort function
using namespace std;

int main() {
    int x, d1, d2, d3;

    cout << "Enter your number: ";
    cin >> x;

    // Extracting digits
    d1 = x % 10;
    x = x / 10;
    d2 = x % 10;
    x = x / 10;
    d3 = x % 10;

    // Finding maximum digit
    int max_digit = max(d1, max(d2, d3));
    cout << "The maximum digit in the integer: " << max_digit << endl;

    // Finding minimum digit
    int min_digit = min(d1, min(d2, d3));
    cout << "The minimum digit in the integer: " << min_digit << endl;

    // Sorting digits in ascending order
    int digits[3] = { d1, d2, d3 };
    sort(digits, digits + 3);
    cout << "The integer digits sorted in ascending order: ";
    for (int i = 0; i < 3; ++i) {
        cout << digits[i];
    }
    cout << endl;

    return 0;
}
