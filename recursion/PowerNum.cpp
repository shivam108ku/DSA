#include <iostream>
using namespace std;

int power(int a, int b) {
    // Base case
    if (b == 0)
        return 1;

    // Recursive call
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    cout << "Result: " << power(a, b);

    return 0;
}
