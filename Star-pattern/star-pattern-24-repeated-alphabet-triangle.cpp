#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows for half of the glass
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Top inverted hollow pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            char ch = 'A' + i-1;
            cout << ch;
        }

                    cout<< endl;

}
    return 0; 
}
