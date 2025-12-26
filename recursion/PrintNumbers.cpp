#include <iostream>
using namespace std;

void printNum(int n) {
    // Base case
    if (n == 0)
        return;

    // Recursive call
    printNum(n - 1);

    // Work
    cout << n << " ";
}
// the ay to add this
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    printNum(n);

    return 0;
}
