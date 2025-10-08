#include <iostream>
using namespace std;

int main() {
    int n;

    // Input
    cout << "Enter the number of rows: ";
    cin >> n;

    // Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // Top half of diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print increasing letters
        for (int k = 1; k <= i; k++) {
            char ch = 'A' + k - 1;
            cout << ch;
        }
        // Print decreasing letters
        for (int l = i - 1; l >= 1; l--) {
            char ch = 'A' + l - 1;
            cout << ch;
        }
        cout << endl;
    }

    // Bottom half of diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print increasing letters
        for (int k = 1; k <= i; k++) {
            char ch = 'A' + k - 1;
            cout << ch;
        }
        // Print decreasing letters
        for (int l = i - 1; l >= 1; l--) {
            char ch = 'A' + l - 1;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
